DROP PROCEDURE IF EXISTS ChiffreAffaireMois;
GO
CREATE PROCEDURE [dbo].[ChiffreAffaireMois]
    @annee int = 0,
    @mois int = 0
AS
BEGIN
    select sum(payment.prix - detail.amount * item.prix_uht) as total
    from payment
    inner join detail on payment.id_command = detail.id_command
    inner join item on detail.id_item = item.id_item
    where (year(date_payment) = @annee and month(date_payment) = @mois)
END
GO

DROP PROCEDURE IF EXISTS PanierMoyen;
GO

CREATE PROCEDURE [dbo].[PanierMoyen]
    
AS
BEGIN
    select avg(prix)
    from payment
END
GO

DROP PROCEDURE IF EXISTS ProduitsSousSeuil;
GO

CREATE PROCEDURE [dbo].[ProduitsSousSeuil]

AS
BEGIN
    select nom
    from item
    where (item.stock < item.seuil)
END
GO

DROP PROCEDURE IF EXISTS AchatTotalClient;
GO

CREATE PROCEDURE [dbo].[AchatTotalClient]
    @client int = 0
AS
BEGIN
    select person.nom, person.prenom, sum(payment.prix)
    from command
    inner join person on person.id_person = command.id_person
    inner join payment on payment.id_command = command.id_command
    inner join client on person.id_person = client.id_person
    where (id_client = @client)
    group by command.id_person, person.nom, person.prenom
END
GO

DROP PROCEDURE IF EXISTS PlusVendu;
GO
 
CREATE PROCEDURE [dbo].[PlusVendu]

AS
BEGIN
    select item.nom, SUM(detail.amount)
    from item
    inner join detail
    on item.id_item = detail.id_item
    group by item.nom
    having (SUM(detail.amount) > 0) 
    order by SUM(detail.amount) desc
END
GO

DROP PROCEDURE IF EXISTS MoinsVendu;
GO

CREATE PROCEDURE [dbo].[MoinsVendu]

AS
BEGIN
    select item.nom, SUM(detail.amount)
    from item
    inner join detail
    on item.id_item = detail.id_item
    group by item.nom
    having (SUM(detail.amount) > 0) 
    order by SUM(detail.amount) asc
END
GO


DROP PROCEDURE IF EXISTS ValeurCommerciale;
GO


CREATE PROCEDURE [dbo].[ValeurCommerciale]

AS
BEGIN
    select SUM((stock * prix_uht)) as total
    from item
END
GO

DROP PROCEDURE IF EXISTS ValeurAchat;
GO

CREATE PROCEDURE [dbo].[ValeurAchat]

AS
BEGIN
    select SUM((stock * prix_uht)) as total
    from item
END
GO