create schema 16_april;
-- ctrl + shift + enter

create table student
(id int not null unique,
name varchar(25) not null,
percentage float not null,
grade char not null);

describe student;

-- change table name
alter table student rename to employee;
alter table employee rename to student;

describe employee;

-- change column name
alter table student rename column id to roll_no;

-- add column
alter table student add column remarks int;

-- add column at specific position
alter table student add column city varchar(25) not null after grade;

-- change data type
alter table student modify remarks varchar(25);

-- add new constraint
alter table student modify remarks varchar(25) not null;

-- remove constraint
alter table student modify city varchar(25);

-- delete column
alter table student drop column remarks;

drop table student;

drop schema 16_april;