CREATE TABLE [dbo].[stock] (
    [id_item]  INT             IDENTITY (1, 1) NOT NULL,
    [nom]     VARCHAR (50)    NOT NULL,
    [color]    VARCHAR (50)    NOT NULL,
    [typeof]   VARCHAR (50)    NOT NULL,
    [amount]    INT             NOT NULL,
    [prix_uht] DECIMAL (15, 2) NOT NULL,
    [seuil]    INT             NOT NULL,
    CONSTRAINT [id_item] PRIMARY KEY CLUSTERED ([id_item] ASC)
);

