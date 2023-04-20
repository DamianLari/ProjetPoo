#include "C_Staff.h"

// définir 

namespace Composants {
	C_Staff::C_Staff() {
		this->password = "Aucun";
		this->mail = "Aucun";
		this->boss = 0;
		this->typeOf = "Lamba";
	}
	void C_Staff::setHiring(String^ Hiring) {
		this->hiring = Hiring;
	}
	void C_Staff::setPassword(String^ Password){
		this->password = Password;
	}
	void C_Staff::setMail(String^ Mail) {
		this->mail = Mail;
	}
	
	void C_Staff::setBoss(int Boss) {
		this->boss = Boss;
	}
	void C_Staff::setTypeOf(String^ TypeOf) {
		this->typeOf = TypeOf;
	}
	String^ C_Staff::getMail() {
		return this->mail;
	}
	String^ C_Staff::getPassword() {
		return this->password;
	}
	String^ C_Staff::getHiring() {
		return this->hiring;
	}
	
	int C_Staff::getBoss() {
		return this->boss;
	}
	String^ C_Staff::getTypeOf() {
		return this->typeOf;
	}
	String^ C_Staff::insert() {
		return "INSERT INTO person (nom,prénom) VALUES ('" + this->getNom() + "','" + this->getPrenom() + "');"
			"INSERT INTO staff(hiring_date,mail,password,typeOf,id_superieur,id_person) VALUES ('" + this->getHiring() + "','" + this->getMail() + "','" + this->getPassword()+ "','" + this->getTypeOf()+ "','" + this->getBoss()+ "','" +this->getIdPerson()+"', (SELECT MAX (id_person) from person))";
	}
	String^ C_Staff::select() {
		return "SELECT * FROM staff ";
	}
	String^ C_Staff::selectParam(String^ Param, String^ Valeur) {
		return"SELECT * FROM staff where " + Param + "='" + Valeur + "';";
	}
	
}