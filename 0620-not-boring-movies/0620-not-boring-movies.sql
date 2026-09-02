select * from cinema
where id%2!=0 AND description <> "boring"
order by rating desc;