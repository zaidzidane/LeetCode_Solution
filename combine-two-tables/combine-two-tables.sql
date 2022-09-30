# Write your MySQL query statement below

select Person.lastName,Person.firstName,Address.city,Address.state from Person 
LEFT JOIN Address on Person.personId = Address.personId 