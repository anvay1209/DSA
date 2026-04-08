select distinct x.num as ConsecutiveNums
from Logs x
join Logs y on x.id=y.id-1
join Logs z on y.id=z.id-1
where x.num=y.num and y.num = z.num