# Write your MySQL query statement below

select email  as Email from Person group by email having count(Email)>1