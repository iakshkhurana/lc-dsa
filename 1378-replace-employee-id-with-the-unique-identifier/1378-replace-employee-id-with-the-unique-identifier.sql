-- SELECT b.unique_id, a.name
-- FROM Employees a
-- LEFT JOIN EmployeeUNI b ON a.id = b.id;

select b.unique_id, a.name
from employeeuni b
right join employees a on b.id=a.id;