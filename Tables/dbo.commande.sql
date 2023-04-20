CREATE TABLE commande(
   id_commande INT NOT NULL IDENTITY (1,1),
   taux_tva DECIMAL(15,2) NOT NULL,
   delivery_date DATETIME NOT NULL,
   order_date DATETIME NOT NULL,
   ht INT NOT NULL,
   ttc INT NOT NULL,
   discount DECIMAL(15,2) NOT NULL,
   id_person INT NOT NULL,
   CONSTRAINT id_comande PRIMARY KEY(id_commande),
   CONSTRAINT id_person FOREIGN KEY(id_person) REFERENCES Person(id_person)
);
