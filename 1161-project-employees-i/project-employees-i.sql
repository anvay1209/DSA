SELECT project_id,round((y/x),2) as average_years 
FROM (
    SELECT 
        p.project_id,
        COUNT(*) AS x,
        SUM(e.experience_years) AS y
    FROM Project p
    JOIN Employee e 
        ON e.employee_id = p.employee_id
    GROUP BY p.project_id
) t;