select x,y,z,
case when x+y>z AND x+z>y AND y+z>x THEN 'Yes'
     else 'No' end as triangle
from Triangle