CREATE TABLE booking(
   id_booking INT NOT NULL IDENTITY (1,1),
   Valid INT NOT NULL,
   order_date DATE NOT NULL,
   id_commande INT NOT NULL,
   CONSTRAINT id_booking PRIMARY KEY(id_booking),
   CONSTRAINT id_commande FOREIGN KEY(id_commande) REFERENCES commande(id_commande), 
   
);
