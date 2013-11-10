CREATE EXTENSION pgcrypto;

	-- Таблица логин-пароль
CREATE TABLE data_enter (login VARCHAR(20) NOT NULL, password VARCHAR(40) NOT NULL, post VARCHAR(20) check (post='seller' or post='tech'), name VARCHAR (20) NOT NULL, surname VARCHAR(20) NOT NULL, UNIQUE (login), UNIQUE (password));

copy data_enter from '/home/yura/Project/test_data_for_data_enter_table';
update data_enter set password=crypt(password, gen_salt('md5'));



	-- Таблица общей информации об автомобилях
create table general_car_info (id serial primary key, firm varchar(20) not null, model varchar(20) not null, year int check (year>=1920 and year<=2013), power int not null check (power>=50 and power<=1001) , price int not null check (price > 0), eng_type varchar(20) not null check (eng_type='инжектор' or eng_type='бензин-турбина' or eng_type='дизель' or eng_type='турбодизель' or eng_type='битурбо' or eng_type='компрессор'), present varchar(3) not null);

copy general_car_info (firm, model, year, power, price, eng_type, present) from '/home/yura/Project/test_data_for_general_car_info_table';


	-- Таблица полной информации об автомобилях
create table full_car_info(id serial primary key not null, id_gen_car int not null check (id_gen_car > 0), body_type varchar(20) not null check (body_type='Седан' or body_type='Кабриолет' or body_type='Авант' or body_type='Хетч-бек' or body_type='Минивен' or body_type='Купе' or body_type='Джип'), drive_type varchar(20) not null check (drive_type='Передний' or drive_type='Задний' or drive_type='Полный'), rudder_type varchar(20) not null check (rudder_type='Левый' or rudder_type='Правый'), color varchar(20) not null, condition_type varchar(10) not null check (condition_type='Хорошее' or condition_type='Отличное' or condition_type='Среднее' or condition_type='Битый'), conditioner varchar(3), tv varchar(3), navigation varchar(3), outgo float not null check (outgo>0), foreign key(id_gen_car) references general_car_info(id));

copy full_car_info (id_gen_car, body_type, drive_type, rudder_type, color, condition_type, conditioner, tv, navigation, outgo) from '/home/yura/Project/test_data_for_full_car_info_table';



	-- Таблица продаж автомобилей
create table sales_car (id serial primary key, data varchar(11) not null, time varchar(5) not null, seller_info text not null, firm varchar(20) not null, model varchar(20) not null, price int not null, id_full_info int not null check (id_full_info>0), sale_number int not null check(sale_number>0));

copy sales_car (data, time, seller_info, firm, model, price, id_full_info, sale_number) from '/home/yura/Project/test_data_for_sales_car_table';


	-- Таблица характеристик запчастей
create table details_info (id serial primary key, name varchar(40) not null, price int not null check(price > 0), firm varchar(20), type varchar(20), info text);

copy details_info (name, price, firm, type, info) from '/home/yura/Project/test_data_for_details_info_table';


	-- Таблица продаж запчастей
create table sales_detail (id serial primary key, data varchar(11) not null, time varchar(5) not null, tech_info text not null, price int
not null, detail_count int not null check(detail_count >= 1), id_info int not null check(id_info > 0));

copy sales_detail (data, time, tech_info, price, detail_count, id_info) from '/home/yura/Project/test_data_for_sales_detail_table';






