create table users
(user_id int primary key,
name varchar(25) not null,
age int);

insert into users values(101,'Rohan',25);
insert into users values(102,'Rahul',22);
insert into users values(103,'Mehul',21);
insert into users values(104,'Dhairya',14);
insert into users values(105,'Megha',15);

select * from users;

create table orders
(order_id int primary key auto_increment,
name varchar(25) not null,
user_id int,
foreign key orders(user_id) references users(user_id));

insert into orders(name,user_id) values('Toys',101);
insert into orders(name,user_id) values('Soap',101);
insert into orders(name,user_id) values('Shampoo',102);
insert into orders(name,user_id) values('Comb',103);
insert into orders(name,user_id) values('Chocolate',103);

select * from orders;

select * from users
natural join orders;

select users.user_id,users.name,orders.name
from users inner join orders
on users.user_id = orders.user_id;

select users.user_id,users.name,orders.name
from users left join orders
on users.user_id = orders.user_id;

select users.user_id,users.name,orders.name
from users right join orders
on users.user_id = orders.user_id;

create table temp1
(id int not null unique,
name varchar(25) not null);

insert into temp1 values(101,'qwe');
insert into temp1 values(102,'asd');
insert into temp1 values(103,'zxc');

create table temp2
(id int not null unique,
name varchar(25) not null);

insert into temp2 values(101,'qwe');
insert into temp2 values(102,'fgh');
insert into temp2 values(103,'bnm');

select * from temp1
union
select * from temp2;

select * from temp1
union all
select * from temp2;