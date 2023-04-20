CREATE TABLE [dbo].[payment] (
    [id_payment]      INT             NOT NULL,
    [prix]            DECIMAL (15, 2) NOT NULL,
    [amount]          DECIMAL (15, 2) NOT NULL,
    [date_payment]    DATETIME        NOT NULL,
    [monthly_payment] DECIMAL (15, 2) NOT NULL,
    [means_payment]   VARCHAR (50)    NOT NULL,
    [id_commande]     INT             NOT NULL,
    PRIMARY KEY CLUSTERED ([id_payment] ASC),
    FOREIGN KEY ([id_commande]) REFERENCES [dbo].[commande] ([id_commande])
);

