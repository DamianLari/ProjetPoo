#include "S_Adresse.h"

using namespace Services;
using namespace Composants;

S_Adresse::S_Adresse() {
	this->Aad = gcnew AccederAuxDonnées();
	this->Ladresse = gcnew  C_Adresse();
}

void S_Adresse::ajouterAdresse(int Num, String^ Nom, String^ Ville, int Zip, String^ TypeOf, int IdCommand, int IdPerson) {
	String^ sql;
	this->Ladresse->setNumRue( Num);
	this->Ladresse->setNomRue(Nom);
	this->Ladresse->setVille(Ville);
	this->Ladresse->setZipCode(Zip);
	this->Ladresse->setTypeOf(TypeOf);
	this->Ladresse->setIdCommand(IdCommand);
	this->Ladresse->setIdPerson(IdPerson);
	sql = this->Ladresse->insert();
	this->Aad->actionRows(sql);
}
void S_Adresse::supprimer() {

}
void S_Adresse::modifier() {

}
DataSet^ S_Adresse::afficher(String^ Table) {
	String^ sql;
	sql = this->Ladresse->select();
	return this->Aad->getRows(sql, Table);
}
