select class
from (
    select class, count(*) as x
    from Courses 
    group by class
) t
where x>=5