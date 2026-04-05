SELECT ROUND(x / no, 2) AS fraction
FROM (
    SELECT 
        COUNT(a.player_id) AS x, no
    FROM (
        SELECT player_id, DATE_ADD(MIN(event_date), INTERVAL 1 DAY) AS MIN_Date,
        (SELECT COUNT(DISTINCT player_id) FROM Activity) AS no
        FROM Activity
        GROUP BY player_id
    ) t
    LEFT JOIN Activity a
    ON a.player_id = t.player_id 
    AND a.event_date = t.MIN_Date
) u;