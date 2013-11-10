create database autocenter;
use autocenter;

	# Таблица логин-пароль
CREATE TABLE data_enter (login VARCHAR(20) NOT NULL, password VARCHAR(40) NOT NULL, post VARCHAR(20) NOT NULL, name VARCHAR (20) NOT NULL, surname VARCHAR(20) NOT NULL, UNIQUE (login), UNIQUE (password)); 

load data local infile "/home/yura/Project/test_data_for_data_enter_table" into table data_enter;
update data_enter set password=sha1(password);


	# Таблица общей информации об автомобилях
create table general_car_info (id int primary key auto_increment, firm varchar(20) not null, model varchar(20) not null, year int not null, power int not null , price int not null, eng_type varchar(2) not null, present varchar(3) not null);

load data local infile "/home/yura/Project/test_data_for_general_car_info_table" into table general_car_info;


	# Таблица полной информации об автомобилях
create table full_car_info(id int primary key auto_increment not null, id_gen_car int not null, body_type varchar(20) not null, drive_type varchar(20) not null, rudder_type varchar(20) not null, color varchar(20) not null, condition_type varchar(10) not null, conditioner bool, tv bool, navigation bool, outgo float not null, foreign key(id_gen_car) references general_car_info(id));

load data local infile "/home/yura/Project/test_data_for_full_car_info_table" into table full_car_info;


	# Таблица продаж автомобилей
create table sales_car (id int primary key auto_increment, data varchar(11) not null, time varchar(5) not null, seller_info text not null, firm varchar(20) not null, model varchar(20) not null, price int not null, id_full_info int not null, sale_number int not null);

load data local infile "/home/yura/Project/test_data_for_sales_car_table" into table sales_car;


	# Таблица характеристик запчастей
create table details_info (id int primary key auto_increment, name varchar(40) not null, price int not null, firm varchar(20), type varchar(20), info text);

load data local infile "/home/yura/Project/test_data_for_details_info_table" into table details_info;

	# Таблица продаж запчастей
create table sales_detail (id int primary key auto_increment, data varchar(11) not null, time varchar(5) not null, tech_info text not null, price int
not null, detail_count int not null, id_info int not null);

load data local infile "/home/yura/Project/test_data_for_sales_detail_table" into table sales_detail;






