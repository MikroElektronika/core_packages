DELETE FROM "Boards" WHERE uid='%1';
DELETE FROM "SDKToBoard" WHERE board_uid='%1';
DELETE FROM "BoardToSocket" WHERE board_uid='%1';
DELETE FROM "BoardToDevice" WHERE board_uid='%1';
