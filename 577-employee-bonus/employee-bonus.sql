SELECT name, bonus
FROM Employee e
Left JOIN Bonus b ON e.empId= b.empId 
Where bonus<1000 or bonus is null