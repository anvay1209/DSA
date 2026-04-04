select id, movie, description, rating
from Cinema 
where id%2!=0 AND description not in ('boring')
order by rating desc
