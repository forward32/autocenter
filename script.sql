CREATE EXTENSION pgcrypto;

	-- Таблица логин-пароль
CREATE TABLE data_enter (login VARCHAR(20) NOT NULL, password VARCHAR(40) NOT NULL, post VARCHAR(20) check (post='seller' or post='tech'), name VARCHAR (20) NOT NULL, surname VARCHAR(20) NOT NULL, UNIQUE (login), UNIQUE (password));

copy data_enter from '/home/yura/Project/test_data_for_data_enter_table';
update data_enter set password=crypt(password, gen_salt('md5'));



	-- Таблица общей информации об автомобилях
CREATE TABLE general_car_info (id serial primary key, firm VARCHAR(20) NOT NULL, model VARCHAR(20) NOT NULL, year int check (year>=1920 and year<=2013), power int NOT NULL check (power>=50 and power<=1001) , price int NOT NULL check (price > 0), eng_type VARCHAR(20) NOT NULL check (eng_type='инжектор' or eng_type='бензин-турбина' or eng_type='дизель' or eng_type='турбодизель' or eng_type='битурбо' or eng_type='компрессор'), present VARCHAR(3) NOT NULL);

copy general_car_info (firm, model, year, power, price, eng_type, present) from '/home/yura/Project/test_data_for_general_car_info_table';


	-- Таблица полной информации об автомобилях
CREATE TABLE full_car_info(id serial primary key NOT NULL, id_gen_car int NOT NULL check (id_gen_car > 0), body_type VARCHAR(20) NOT NULL check (body_type='Седан' or body_type='Кабриолет' or body_type='Авант' or body_type='Хетч-бек' or body_type='Минивен' or body_type='Купе' or body_type='Джип'), drive_type VARCHAR(20) NOT NULL check (drive_type='Передний' or drive_type='Задний' or drive_type='Полный'), rudder_type VARCHAR(20) NOT NULL check (rudder_type='Левый' or rudder_type='Правый'), color VARCHAR(20) NOT NULL, condition_type VARCHAR(10) NOT NULL check (condition_type='Хорошее' or condition_type='Отличное' or condition_type='Среднее' or condition_type='Битый'), conditioner VARCHAR(3), tv VARCHAR(3), navigation VARCHAR(3), outgo float NOT NULL check (outgo>0), foreign key(id_gen_car) references general_car_info(id));

copy full_car_info (id_gen_car, body_type, drive_type, rudder_type, color, condition_type, conditioner, tv, navigation, outgo) from '/home/yura/Project/test_data_for_full_car_info_table';



	-- Таблица продаж автомобилей
CREATE TABLE sales_car (id serial primary key, data VARCHAR(11) NOT NULL, time VARCHAR(5) NOT NULL, seller_info text NOT NULL, firm VARCHAR(20) NOT NULL, model VARCHAR(20) NOT NULL, price int NOT NULL, id_full_info int NOT NULL check (id_full_info>0), sale_number int NOT NULL check(sale_number>0));

copy sales_car (data, time, seller_info, firm, model, price, id_full_info, sale_number) from '/home/yura/Project/test_data_for_sales_car_table';


	-- Таблица характеристик запчастей
CREATE TABLE details_info (id serial primary key, name VARCHAR(40) NOT NULL, price int NOT NULL check(price > 0), firm VARCHAR(20), type VARCHAR(20), info text);

copy details_info (name, price, firm, type, info) from '/home/yura/Project/test_data_for_details_info_table';


	-- Таблица продаж запчастей
CREATE TABLE sales_detail (id serial primary key, data VARCHAR(11) NOT NULL, time VARCHAR(5) NOT NULL, tech_info text NOT NULL, price int
NOT NULL, detail_count int NOT NULL check(detail_count >= 1), id_info int NOT NULL check(id_info > 0));

copy sales_detail (data, time, tech_info, price, detail_count, id_info) from '/home/yura/Project/test_data_for_sales_detail_table';






