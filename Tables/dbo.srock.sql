CREATE TABLE stock(
   id_item CHAR(50),
   name VARCHAR(50) NOT NULL,
   color VARCHAR(50) NOT NULL,
   typeof VARCHAR(50) NOT NULL,
   stock INT NOT NULL,
   prix_uht DECIMAL(15,2) NOT NULL,
   seuil INT NOT NULL,
   CONSTRAINT id_item PRIMARY KEY(id_item)
);
