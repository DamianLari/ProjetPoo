#include "S_Staff.h"
#include "C_Staff.h"
#include "C_Person.h"
#include "S_Person.h"
using namespace Services;
S_Staff::S_Staff(){
	this->Aad = gcnew AccederAuxDonnées();
	this->LeStaff = gcnew  C_Staff();

}

void S_Staff::ajouter(String^ Nom, String^ Prenom, String^ Hiring, String^ Mail, String^ Password, String^ TypeOf) {
	String^ sql;
	this->LeStaff->setNom(Nom);
	this->LeStaff->setPrenom(Prenom);
	this->LeStaff->setHiring(Hiring);
	this->LeStaff->setMail(Mail);
	this->LeStaff->setPassword(Password);
	this->LeStaff->setTypeOf(TypeOf);
	sql = this->LeStaff->insert();
	this->Aad->actionRows(sql);
}

void S_Staff::modifier(int Param, String^ Modif, String^ Valeur) {
	String^ sql;
	this->LeStaff->setParam(Param);
	this->LeStaff->setModif(Modif);
	this->LeStaff->setValeur(Valeur);
	sql = this->LeStaff->update();
	this->Aad->actionRows(sql);
}
DataSet^ S_Staff::afficher(String^ Table) {
	String^ sql;
	sql = this->LeStaff->select();
	return this->Aad->getRows(sql, Table);

}
DataSet^ S_Staff::afficherParam(String^ Table, String^ Param, String^ Valeur) {
	String^ sql;
	sql = this->LeStaff->selectParam(Param, Valeur);
	return this->Aad->getRows(sql, Table);
}

