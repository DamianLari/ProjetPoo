#include "C_AccesAuxDonn�es.h"

using namespace Composants;

C_AccesAuxDonn�es::C_AccesAuxDonn�es() {
    this->requete = "RIEN";
    this->connexion = "Data Source=34.155.117.230;Initial Catalog=projetpoo;Persist Security Info=True;User ID=sqlserver;Password=projetpoo";
    this->connecteur = gcnew SqlConnection(this->connexion);
}


int C_AccesAuxDonn�es::actionRowID(SqlCommand^ commande) {
    int id;
    commande->Connection = connecteur;

    this->connecteur->Open();
    id = Convert::ToInt32(commande->ExecuteScalar());
    this->connecteur->Close();
    return id;
}
void C_AccesAuxDonn�es::actionRows(SqlCommand^ commande)
{
    commande->Connection = connecteur;
    this->connecteur->Open();
    commande->ExecuteNonQuery();
    this->connecteur->Close();
}
DataSet^ C_AccesAuxDonn�es::getRows(SqlCommand^ commande, String^ nom)
{
    this->adapteur = gcnew SqlDataAdapter(commande);
    commande->Connection = this->connecteur;
    this->DS = gcnew DataSet();
    this->adapteur->Fill(this->DS, nom);
    return this->DS;
}
