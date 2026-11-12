-- SELECT c.name AS Customers
-- FROM Customers c
-- LEFT JOIN Orders o
-- ON c.id = o.customerId
-- WHERE o.customerId IS NULL;


SELECT c.name AS Customers
FROM Customers c
WHERE c.id NOT IN (
    SELECT customerId
    FROM Orders
);