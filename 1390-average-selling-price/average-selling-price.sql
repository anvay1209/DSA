select p.product_id, IFNULL(ROUND(SUM(units*price)/SUM(units),2),0) AS average_price
from Prices p
left join UnitsSold s on s.product_id =p.product_id AND
s.purchase_date BETWEEN start_date AND end_date
group by p.product_id
