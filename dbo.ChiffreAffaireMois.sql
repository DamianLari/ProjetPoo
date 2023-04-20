CREATE PROCEDURE [dbo].[ChiffreAffaireMois]
    @annee int = 0,
    @mois int = 0
AS
    select sum(payment.prix - detail.amount * item.prix_achat) as total
    from payment
    inner join detail on payment.id_command = detail.id_command
    inner join item on detail.id_item = item.id_item
    where (year(date_payment) = @annee and month(date_payment) = @mois)
RETURN 0