#include "C_Client.h"
//définir les méthodes suivantes:

using namespace Composants;
	C_Client::C_Client() {

	}

	void C_Client::setBirth(String^ birth) {
		this->Birth = birth;
	}
	void C_Client::setFirstOrder(String^ first) {
		this->FirstOrder = first;
	}

	String^ C_Client::getBirth() {
		return this->Birth;
	}
	String^ C_Client::getFirstOrder() {
		return this->FirstOrder;
	}
	

	String^ C_Client::insert() {
		return "INSERT INTO person (nom,prénom) VALUES ('" + this->getNom() + "','" + this->getPrenom() + "');"
			"INSERT INTO client(first_date,birth_date,id_person) VALUES ('" + this->getFirstOrder() + "','" + this->getBirth() + "', SELECT MAX (id_person) from person)";
	}
	
	

