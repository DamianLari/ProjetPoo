CREATE TABLE person(
   id_person INT,
   prenom VARCHAR(50) NOT NULL,
   nom VARCHAR(50) NOT NULL,
   PRIMARY KEY(id_person)
);

CREATE TABLE commande(
   id_commande INT,
   order_date DATETIME NOT NULL,
   valid_date DATE,
   ht INT NOT NULL,
   taux_tva DECIMAL(15,2) NOT NULL,
   ttc INT NOT NULL,
   discount DECIMAL(15,2) NOT NULL,
   PRIMARY KEY(id_commande)
);

CREATE TABLE stock(
   id_item CHAR(50),
   nom VARCHAR(50) NOT NULL,
   typeof VARCHAR(50) NOT NULL,
   color VARCHAR(50) NOT NULL,
   stock INT NOT NULL,
   prix_uht DECIMAL(15,2) NOT NULL,
   seuil INT NOT NULL,
   PRIMARY KEY(id_item)
);

CREATE TABLE staff(
   id_staff INT,
   mail VARCHAR(50),
   password VARCHAR(50),
   hiring_date DATE,
   boss_id INT,
   type VARCHAR(50),
   id_person INT NOT NULL,
   PRIMARY KEY(id_staff),
   UNIQUE(id_person),
   FOREIGN KEY(id_person) REFERENCES person(id_person)
);

CREATE TABLE client(
   id_client INT,
   first_date DATE,
   birth_date DATE,
   id_person INT NOT NULL,
   PRIMARY KEY(id_client),
   UNIQUE(id_person),
   FOREIGN KEY(id_person) REFERENCES person(id_person)
);

CREATE TABLE address(
   Id_address INT,
   num_rue INT NOT NULL,
   nom_rue VARCHAR(50) NOT NULL,
   zip_code INT NOT NULL,
   ville VARCHAR(50) NOT NULL,
   type VARCHAR(3) NOT NULL,
   id_commande INT NOT NULL,
   id_person INT NOT NULL,
   PRIMARY KEY(Id_address),
   FOREIGN KEY(id_commande) REFERENCES commande(id_commande),
   FOREIGN KEY(id_person) REFERENCES person(id_person)
);

CREATE TABLE Payment(
   id_payment INT,
   prix DECIMAL(15,2) NOT NULL,
   amount DECIMAL(15,2) NOT NULL,
   date_payment DATETIME NOT NULL,
   monthly_payment DECIMAL(15,2) NOT NULL,
   means_payment VARCHAR(50) NOT NULL,
   id_commande INT NOT NULL,
   PRIMARY KEY(id_payment),
   FOREIGN KEY(id_commande) REFERENCES commande(id_commande)
);

CREATE TABLE detail(
   id_detail INT,
   amount INT NOT NULL,
   id_commande INT NOT NULL,
   id_item CHAR(50) NOT NULL,
   PRIMARY KEY(id_detail),
   FOREIGN KEY(id_commande) REFERENCES commande(id_commande),
   FOREIGN KEY(id_item) REFERENCES stock(id_item)
);
