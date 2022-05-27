CREATE TABLE cars(car_id int primary key, regNo varchar(60) not null, company varchar(60) not null, model varchar(60) not null, isRented bool not null, doa date not null, cost_per_day double not null);
CREATE TABLE customers (cust_id int primary key, name varchar(100) not null, email varchar(200) not null, phNo varchar(90) not null, resAddress varchar(900) not null, idProofNo varchar(90) not null, dor date);
CREATE TABLE rental (rental_id int primary key, cust_id int not null, car_id int not null, dateOfRent date not null, dateOfReturn date default NULL, cost double, isPaid bool);
