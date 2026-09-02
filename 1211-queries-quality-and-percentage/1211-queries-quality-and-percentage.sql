select query_name, ROUND(AVG(rating/position), 2) AS quality, ROUND(SUM(rating < 3) * 100.0 / COUNT(*), 2) AS poor_query_percentage
from Queries
group by query_name;