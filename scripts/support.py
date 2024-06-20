def get_previous_release(releases, prerelases=None):
    ''' Fetch the previously released version '''
    for counter, release in enumerate(releases):
        if not release['draft']:
            if prerelases:
                if release['prerelease']:
                    continue
            if counter + 1 < len(releases):
                return releases[counter + 1]
            else:
                return None
    return None

def get_latest_release(releases):
    ''' Fetch the latest released version '''
    return next((release for release in releases if not release['prerelease'] and not release['draft']), None)
