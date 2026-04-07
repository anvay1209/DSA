select activity_date as day, count(distinct user_id) as active_users 
from (
    select distinct user_id, activity_date, activity_type
    from Activity 
) t
where activity_date between '2019-06-28' AND '2019-07-27'
group by activity_date  
