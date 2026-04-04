SELECT contest_id,ROUND(x * 100 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM (
    SELECT contest_id, COUNT(*) AS x
    FROM Register
    GROUP BY contest_id
) t
ORDER BY percentage DESC, contest_id;