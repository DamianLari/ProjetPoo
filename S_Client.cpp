#include "S_Client.h"
#include "C_Person.h"
#include "S_Person.h"
#include "C_Client.h"
#include "AccederAuxDonnées.h"
using namespace Services;
using namespace Composants;
S_Client::S_Client() {
	this->Aad = gcnew AccederAuxDonnées();
	this->LeClient = gcnew  C_Client();
}
DataSet^ S_Client::afficher(String^ Table) {
	String^ sql;
	sql = this->LeClient->select();
	return this->Aad->getRows(sql, Table);

}

void S_Client::ajouter(String^ Nom, String^ Prenom, String^ First, String^ Birth) {
	String^ sql;
	this->LeClient->setNom(Nom);
	this->LeClient->setPrenom(Prenom);
	this->LeClient->setFirstOrder(First);
	this->LeClient->setBirth(Birth);
	sql = this->LeClient->insert();
	this->Aad->actionRows(sql);

}
void S_Client::modifier(int Param, String^ Modif, String^ Valeur) {
	String^ sql;
	this->LeClient->setParam(Param);
	this->LeClient->setModif(Modif);
	this->LeClient->setValeur(Valeur);
	sql = this->LeClient->update();
	this->Aad->actionRows(sql);
}

