# Write your MySQL query statement below
select w.id as id from weather w join weather i on datediff(w.recorddate,i.recorddate) = 1 where w.temperature > i.temperature;  