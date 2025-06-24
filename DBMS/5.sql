delete from employees where employee_id = 100;
delete from employees where employee_id = 101;
delete from employees where employee_id = 102;

select * from employees;

rollback;

delete from employees where employee_id = 100;
delete from employees where employee_id = 101;
delete from employees where employee_id = 102;

select * from employees;

commit;

rollback;

select * from employees;

savepoint s1;
delete from employees where employee_id = 103;
savepoint s2;
delete from employees where employee_id = 104;
savepoint s3;
delete from employees where employee_id = 107;

select * from employees;

rollback to s3;