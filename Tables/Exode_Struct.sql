CREATE TABLE person(
   id_person INT IDENTITY,
   prenom VARCHAR(50) NOT NULL,
   nom VARCHAR(50) NOT NULL,
   PRIMARY KEY(id_person)
);

CREATE TABLE staff(
   id_staff INT IDENTITY,
   mail VARCHAR(50),
   password VARCHAR(50),
   hiring_date DATE,
   typeOf VARCHAR(50),
   id_staff_1 INT,
   id_person INT NOT NULL,
   PRIMARY KEY(id_staff),
   UNIQUE(id_staff_1),
   UNIQUE(id_person),
   FOREIGN KEY(id_staff_1) REFERENCES staff(id_staff),
   FOREIGN KEY(id_person) REFERENCES person(id_person)
);

CREATE TABLE client(
   id_client INT IDENTITY,
   first_date DATE,
   birth_date DATE,
   id_person INT NOT NULL,
   PRIMARY KEY(id_client),
   UNIQUE(id_person),
   FOREIGN KEY(id_person) REFERENCES person(id_person)
);

CREATE TABLE color(
   Color VARCHAR(50) ,
   increase DECIMAL(15,3),
   PRIMARY KEY(Color)
);

CREATE TABLE discount(
   Id_discount INT IDENTITY,
   discount_value INT,
   PRIMARY KEY(Id_discount)
);

CREATE TABLE command(
   id_command INT IDENTITY,
   order_date DATETIME NOT NULL,
   valid_date DATE,
   Id_discount INT,
   PRIMARY KEY(id_command),
   FOREIGN KEY(Id_discount) REFERENCES discount(Id_discount)
);

CREATE TABLE item(
   id_item INT IDENTITY,
   nom VARCHAR(50) NOT NULL,
   typeof VARCHAR(50) NOT NULL,
   stock INT NOT NULL,
   prix_uht DECIMAL(15,2) NOT NULL,
   seuil INT NOT NULL,
   Color VARCHAR(50) NOT NULL,
   PRIMARY KEY(id_item),
   FOREIGN KEY(Color) REFERENCES color(Color)
);

CREATE TABLE address(
   Id_address INT IDENTITY,
   num_rue INT NOT NULL,
   nom_rue VARCHAR(50) NOT NULL,
   zip_code INT NOT NULL,
   ville VARCHAR(50) NOT NULL,
   typeOf VARCHAR(3) NOT NULL,
   id_command INT NOT NULL,
   id_person INT NOT NULL,
   PRIMARY KEY(Id_address),
   FOREIGN KEY(id_command) REFERENCES command(id_command),
   FOREIGN KEY(id_person) REFERENCES person(id_person)
);

CREATE TABLE payment(
   Id_payment INT IDENTITY,
   prix DECIMAL(15,2) NOT NULL,
   amount DECIMAL(15,2) NOT NULL,
   date_payment DATETIME NOT NULL,
   monthly_payment DECIMAL(15,2) NOT NULL,
   means_payment VARCHAR(50) NOT NULL,
   id_command INT NOT NULL,
   PRIMARY KEY(Id_payment),
   FOREIGN KEY(id_command) REFERENCES command(id_command)
);

CREATE TABLE detail(
   id_detail INT IDENTITY,
   amount INT NOT NULL,
   id_command INT NOT NULL,
   id_item INT NOT NULL,
   PRIMARY KEY(id_detail),
   FOREIGN KEY(id_command) REFERENCES command(id_command),
   FOREIGN KEY(id_item) REFERENCES item(id_item)
);

CREATE TABLE monthly_payment(
   Id_monthly_payment INT IDENTITY,
   date_monthly DATE,
   amount DECIMAL(15,2),
   means_payment VARCHAR(50),
   Id_payment INT NOT NULL,
   PRIMARY KEY(Id_monthly_payment),
   FOREIGN KEY(Id_payment) REFERENCES payment(Id_payment)
);
