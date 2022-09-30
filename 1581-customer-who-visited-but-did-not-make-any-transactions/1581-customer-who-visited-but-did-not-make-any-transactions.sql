# Write your MySQL query statement below


select customer_id,count(*) as count_no_trans from Visits LEFT JOIN Transactions on Visits.visit_id = Transactions.visit_id where transaction_id is NULL group by customer_id;
