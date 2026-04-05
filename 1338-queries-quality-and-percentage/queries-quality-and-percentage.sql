
select query_name, round((y/x), 2) as quality, round((z/x)*100, 2) as poor_query_percentage
from (
    select query_name, count(*) as x, sum(rating/position) as y, sum(if(rating<3,1,0)) as z
    from Queries
    group by query_name 
) t;
