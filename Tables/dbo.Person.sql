CREATE TABLE [dbo].[person] (
    [id_person]   INT          IDENTITY (1, 1) NOT NULL,
    [prenom]   VARCHAR (50) NOT NULL,
    [nom]         VARCHAR (50) NOT NULL,
    [mail]        VARCHAR (50) NOT NULL,
    [password]     VARCHAR (50) NOT NULL,
    [birthdate]   DATE         NULL,
    [first_order] DATE         NULL,
    [hiring_date] DATE         NULL,
    [type]        VARCHAR (50) NOT NULL,
    [boss]        VARCHAR (50) NULL,
    PRIMARY KEY CLUSTERED ([id_person] ASC)
);

