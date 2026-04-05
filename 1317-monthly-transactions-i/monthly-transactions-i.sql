SELECT 
    month, country, trans_count,approved_count, trans_total_amount, approved_total_amount 
FROM (
    SELECT 
        DATE_FORMAT(trans_date, '%Y-%m') AS month, country,
        COUNT(*) AS trans_count, SUM(amount) AS trans_total_amount,
        sum(if(state='approved', amount,0)) as approved_total_amount, 
        sum(if(state='approved', 1,0)) as approved_count 
    
    FROM Transactions
    GROUP BY country, DATE_FORMAT(trans_date, '%Y-%m')
) t;