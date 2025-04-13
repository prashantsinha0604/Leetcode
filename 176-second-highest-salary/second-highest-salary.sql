# Write your MySQL query statement below
select coalesce( (select a.salary from (select salary, dense_rank() over (order by salary desc) as salary_rank from employee) as a where a.salary_rank = 2 limit 1), null) as SecondHighestSalary
;