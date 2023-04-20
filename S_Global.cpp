#include "S_Global.h"
#include "C_Global.h"
#include "A_Rh.h"
using namespace Services;
using namespace Composants;

S_Global::S_Global() {
	this->Aad = gcnew AccederAuxDonnées();
	this->LeGlobal = gcnew  C_Global();
}


void S_Global::modifier() {

}
DataSet^ S_Global::afficher(String^ Table) {
	String^ sql;
	sql = this->LeGlobal->select();
	return this->Aad->getRows(sql, Table);
}


void S_Global::SeConnecter(String^ Mail, String^ Password) {
	this->setMail(mail);
	this->setPassword(Password);
	//int a = this->mailVerif() + this->MailPassword();

	if (this->mailVerif()=="1"){
		if (this->MailPassword() == "1") {
			if (this->checkType() == "manager") {

			}
			else {
				//ouvrir fenêtre A_Staff
			}
		}
	}
	// afficher fenêtre erreur mail



}


