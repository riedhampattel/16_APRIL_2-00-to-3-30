delimiter &&
create procedure display()
select * from employees order by salary;
end &&

call display();

drop procedure display;

delimiter &&
create procedure display(in id int)
begin
select * from employees where employee_id = id;
end &&

call display(107);

delimiter &&
create procedure update_sal(in id int,sal int)
begin
update employees set salary = salary + sal where employee_id = id;
end &&

select * from employees;

call update_sal(103,2000);

select * from employees;

create view person as select employee_id,first_name,last_name from employees;

select * from person;