CREATE TABLE detail(
   id_detail INT NOT NULL IDENTITY (1,1),
   amount INT NOT NULL,
   id_commande INT NOT NULL,
   id_item INT NOT NULL,
   PRIMARY KEY(id_detail),
   FOREIGN KEY(id_commande) REFERENCES commande(id_commande),
   FOREIGN KEY(id_item) REFERENCES stock(id_item)
);

