create role student;

create user Rohan identified by 'abc@123' default role student;

grant select on 16_april.employees to Rohan;

grant insert,update on 16_april.employees to Rohan;

revoke update on 16_april.employees from Rohan;