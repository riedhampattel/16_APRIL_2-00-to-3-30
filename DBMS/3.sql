select employee_id,first_name,last_name from employees;

select * from employees;

select * from employees where department_id = 90;

select * from employees where salary>10000;

select * from employees where salary<10000;

select * from employees where salary between 10000 and 20000;

select * from employees;

select * from employees where department_id = 90 and manager_id = 100;

select * from employees where department_id = 90 or manager_id = 100;

select * from employees where comission_pct is null;

select * from employees where comission_pct is not null;

select employee_id,concat(first_name,' ',last_name) as full_name from employees;

select * from employees;

select * from employees order by salary;

select * from employees order by salary desc;

select * from employees order by 6;

select employee_id,first_name,salary as income from employees order by income;

select * from employees where first_name like 'A%';

select * from employees where first_name like '%e';

select * from employees where first_name like '%e_';

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select min(salary) from employees;

select max(salary) from employees;

select sum(salary) from employees;

select avg(salary) from employees;

select count(comission_pct) from employees;

select * from employees;

select department_id,min(salary) from employees group by department_id having min(salary)<10000;

select * from employees limit 3;

select * from employees limit 5 offset 3;

select * from employees order by salary desc limit 5;

select * from employees order by salary limit 5;

select * from employees order by salary limit 10 offset 5;