SELECT
    socket_uid
FROM
    BoardToSocket
WHERE
    board_uid = (
        SELECT
            SelectedBoard.uid
        FROM
            SelectedBoard
        LIMIT
            1
    )