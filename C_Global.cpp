#include "C_Global.h"
using namespace Composants;
C_Global::C_Global() {

}
	
	int C_Global::getParam() {
		return this->param;
	}
	String^ C_Global::getModif() {
		return this->modif;
	}
	String^ C_Global::getValeur() {
		return this->valeur;
	}
	String^ C_Global::getTable() {
		return this->table;
	}
	void C_Global::setParam(int Param) {
		this->param = Param;
	}
	void C_Global::setModif(String^ Modif) {
		this->modif = Modif;
	}
	void C_Global::setTable(String^ Table) {
		this->table = Table;
	}
	void C_Global::setValeur(String^ Valeur) {
		this->valeur = Valeur;
	}
	

	
	String^ C_Global::update() {
		return "UPDATE" + this->getTable() + "SET " + this->getModif() + "='" + this->getValeur() + "' WHERE id_person = " + this->getParam();
	}
	String^ C_Global::select() {
		return "SELECT * FROM " + this->getTable() + " CROSS JOIN client WHERE " + this->getTable() + ".id_person = person.id_person";
	}
	String^ C_Global::selectParam() {
		return "SELECT " + this->getParam() + "FROM " + this->getTable() + " CROSS JOIN client WHERE " + this->getTable() + ".id_person=" + this->getParam() + "";
	}
	String^ C_Global::delet() {
		return "Rien";
	}
	

	void C_Global::setMail(String^ Mail) {
		this->mail = Mail;
	}
	void C_Global::setPassword(String^Password) {
		this->password = Password;
	}
	String^ C_Global::getMail() {
		return this->mail;
	}
	String^ C_Global::getPassword() {
		return this->password;
	}


	String^ C_Global::checkType() {
		return "SELECT (typeOf) FROM staff WHERE staff.mail=" + this->getMail() + ";";
	}
	String^ C_Global::mailVerif() {
		return "SELECT COUNT * FROM staff WHERE mail=" + this->getMail() + ";";
	}
	String^ C_Global::MailPassword() {
		return "SELECT COUNT * FROM staff WHERE (SELECT (password) FROM staff where mail=" + this->getMail() + ")=" + this->getPassword() + ";";
	}

