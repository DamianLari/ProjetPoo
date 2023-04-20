CREATE TABLE [dbo].[address] (
    [id_address]    INT          IDENTITY (1, 1) NOT NULL,
    [num_rue] INT          NOT NULL,
    [nom_rue]   VARCHAR (50) NOT NULL,
    [zip_code]      INT          NOT NULL,
    [ville]          VARCHAR (50) NOT NULL,
    [type]          VARCHAR (10)  NOT NULL,
    [id_person]     INT          NOT NULL,
    PRIMARY KEY CLUSTERED ([id_address] ASC),
    FOREIGN KEY ([id_person]) REFERENCES [dbo].[Person] ([id_person])
);

