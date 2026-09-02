# Write your MySQL query statement below
select visits.customer_id, count(visits.customer_id) AS count_no_trans
from visits
left join transactions
on visits.visit_id = transactions.visit_id
where transaction_id is NULL
group by customer_id;