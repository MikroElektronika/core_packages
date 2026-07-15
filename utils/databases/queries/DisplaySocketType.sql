SELECT
    Boards.display_socket
FROM
    Boards
WHERE
    Boards.uid == (SELECT
                    SelectedBoard.uid
                FROM
                    SelectedBoard
                LIMIT
                    1)