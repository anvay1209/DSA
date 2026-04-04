SELECT e.name, b.bonus
FROM Employee e
Left JOIN Bonus b ON e.empId= b.empId 
Where b.bonus<1000 or b.bonus is null