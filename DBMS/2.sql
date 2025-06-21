create schema 16_april;

create table student
(id int not null unique,
name varchar(25) not null,
percentage float not null); 

describe student;

insert into student values(101,'Rohan',96.36);

insert into student values(102,'Rahul',52.85);

insert into student(percentage,id,name) values(75.25,103,'Tanvi');

insert into student values(104,'Gopal',99.99),(105,'Dhyey',85.25);

select id from student;

select id,name from student;

select id,name,percentage from student;

select * from student;

update student set name = 'Dhairya' where id = 105;

select * from student;

delete from student where id = 102;

select * from student;

delete from student where name = 'Tanvi';

select * from student;