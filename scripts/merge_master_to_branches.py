import os
import subprocess

def get_release_branches(prefix="new-feature/mcus"):
    """Get all branches that start with the specified prefix."""
    try:
        # Fetch all remote branches
        result = subprocess.run(
            ["git", "branch", "-r"],
            cwd=os.getcwd(),
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=True
        )
        # Extract branch names and filter by prefix
        branches = result.stdout.splitlines()
        filtered_branches = [
            branch.strip().replace('origin/', '') for branch in branches
            if branch.strip().startswith(f"origin/{prefix}")
        ]
        return filtered_branches
    except subprocess.CalledProcessError as e:
        print(f"Error fetching branches: {e}")
        return []

def branch_exists(git_repo_path, branch_name):
    """Check if a branch exists locally or remotely."""
    try:
        # Check locally
        result = subprocess.run(
            ["git", "branch", "--list", branch_name],
            cwd=git_repo_path,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=True
        )
        if result.stdout.strip():
            return 'local'

        # Check remotely
        result = subprocess.run(
            ["git", "ls-remote", "--heads", "origin", branch_name],
            cwd=git_repo_path,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=True
        )
        if result.stdout.strip():
            return 'remote'

        return None
    except subprocess.CalledProcessError as e:
        print(f"Error checking if branch exists: {e}")
        return None

def merge_main_to_branches():
    try:
        # Ensure we're on main branch
        subprocess.run(["git", "checkout", "main"], check=True)
        print("Switched to main branch.")

        # Fetch and pull latest changes from main
        subprocess.run(["git", "fetch"], check=True)
        subprocess.run(["git", "pull", "origin", "main"], check=True)

        # Get the list of branches that start with 'new-feature/boards'
        release_branches = get_release_branches()

        for release_branch in release_branches:
            # Check if the branch already exists
            branch_status = branch_exists(os.getcwd(), release_branch)
            if branch_status:
                print(f"Branch '{release_branch}' exists ({branch_status}). Updating it.")
                # Checkout the existing branch
                subprocess.run(["git", "checkout", release_branch], check=True)
                print(f"Switched to existing branch '{release_branch}'.")

                # Pull the latest changes from the remote branch to update local branch
                subprocess.run(["git", "pull", "origin", release_branch], check=True)

                # Merge main into the release branch to integrate latest main changes
                result = subprocess.run(["git", "merge", "main"], cwd=os.getcwd(), stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
                if result.returncode != 0:
                    if "CONFLICT" in result.stdout or "CONFLICT" in result.stderr:
                        print(f"Merge conflicts detected when merging 'main' into '{release_branch}'. Aborting merge.")
                        subprocess.run(["git", "merge", "--abort"], check=True)
                        print("Merge aborted due to conflicts.")
                        return  # Exit the function or handle accordingly
                    else:
                        raise subprocess.CalledProcessError(result.returncode, result.args, output=result.stdout, stderr=result.stderr)
                print(f"Merged 'main' into '{release_branch}' successfully.")
                subprocess.run(["git", "push", "origin", release_branch], check=True)
                print(f"Pushed branch '{release_branch}' to remote.")

    finally:
        # Switch back to main branch
        try:
            subprocess.run(["git", "checkout", "main"], check=True)
            print("Switched back to main branch.")
        except subprocess.CalledProcessError as e:
            print(f"Failed to switch back to main branch: {e}")

if __name__ == "__main__":
    merge_main_to_branches()
