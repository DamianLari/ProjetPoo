#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace Composants
{
    ref class C_AccesAuxDonnées
    {
    private:
        String^ connexion;
        String^ requete;
        SqlConnection^ connecteur;
        //SqlCommand^ commande;
        SqlDataAdapter^ adapteur;
        DataSet^ DS;
    public:
        C_AccesAuxDonnées();
        int actionRowID(SqlCommand^);
        void actionRows(SqlCommand^);
        DataSet^ getRows(SqlCommand^, String^);

    };
};
