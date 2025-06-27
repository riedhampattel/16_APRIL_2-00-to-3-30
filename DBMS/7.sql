create table users
(user_id int not null unique,
name varchar(25) not null,
age int not null);

create table deleted_users
(user_id int,
name varchar(25),
age int,
stamp time);

create trigger data_delete
before delete on 16_april.users
for each row
insert into deleted_users values(old.user_id,old.name,old.age,curtime());

insert into users values(101,'Rohan',45);
insert into users values(102,'Rahul',25);
insert into users values(103,'Riya',35);

select * from users;

select * from deleted_users;

delete from users where user_id = 102;

drop table users;

create table users
(user_id int not null,
name varchar(25) not null,
age int not null);

create table backup_data
(user_id int not null,
name varchar(25),
age int,
stamp time);

create trigger copy_data
after insert on 16_april.users
for each row
insert into backup_data values(new.user_id,new.name,new.age,curtime());

select * from users;

select * from backup_data;

insert into users values(101,'Rihan',25);
insert into users values(102,'Rohan',35);
insert into users values(103,'Riya',27);

select * from users;

select * from backup_data;