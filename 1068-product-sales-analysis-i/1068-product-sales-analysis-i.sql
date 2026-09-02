select p.product_name, s.year, s.price
from product p
cross join sales s
where s.product_id=p.product_id;