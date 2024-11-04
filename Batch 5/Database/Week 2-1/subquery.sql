-- Alter Table
create database test;
use test;

create table person (
	id int PRIMARY key,
	name varchar(100) Not NUll,
    email varchar(50) unique
);

insert into person(id, name, email)
Values (1, "Mr. X", "abcd@example.com");

insert into person(id, name, email)
Values (2, "Mr. X", "xyz@example.com");

alter table person change column email email varchar(100);
alter table person add column address VARCHAR(250);
alter table person DROP column name;


select * from person;

-- Subquery
-- Find employee who earn more than average salary
select * from employees;
select AVG(salary) as average_salary from employees;

select employee_id, first_name, last_name, salary FROM employees
WHERE salary > (select AVG(salary) as average_salary from employees);

-- Group By & Having
-- Count the number of employees in each job title
select * from departments;

select job_id, count(*) as count
from employees
GROUP BY job_id
having count > 1
ORDER BY count DESC;

-- Subquery with Group By:
-- Find departments where the average salary is higher than the overall average salary
select department_id, (select department_name from departments 
	where departments.department_id = employees.department_id
),
avg(salary) as average_salary
from employees
group by department_id
having average_salary > (select AVG(salary) as average_salary from employees);

-- CTE (Common Table Expression)
WITH DepartmentAverage AS (
	select department_id, avg(salary) as average_salary
	from employees
	GROUP BY department_id
)
select department_id, (select department_name from departments 
	where departments.department_id = DepartmentAverage.department_id
), average_salary
from DepartmentAverage
where average_salary > (select AVG(salary) as average_salary from employees)
order by department_id asc;



