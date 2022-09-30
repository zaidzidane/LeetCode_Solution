# Write your MySQL query statement below

select Users.user_id as buyer_id, Users.join_date as join_date ,count(Orders.buyer_id) as orders_in_2019 from Users LEFT JOIN  Orders on Users.user_id=Orders.buyer_id  and Year(Orders.order_date)='2019' group by Users.user_id