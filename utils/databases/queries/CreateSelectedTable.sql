CREATE TABLE IF NOT EXISTS '%1' AS
SELECT
    *
FROM
    '%2'
WHERE
    uid == '%3';
DELETE FROM '%1';
INSERT INTO '%1'
SELECT
    *
FROM
    '%2'
WHERE
    uid == '%3';