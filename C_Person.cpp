#include "C_Person.h"
#include "pch.h"
using namespace Composants;

C_Person::C_Person() {

}
	void C_Person::setNom(String^ Nom) {
		this->nom = Nom;
	}
	void C_Person::setPrenom(String^ Prenom) {
		this->prenom = Prenom;
	}
	void C_Person::setIdPerson(int IdPerson) {
		this->idPerson = IdPerson;
	}
	int C_Person::getIdPerson() {
		return this->idPerson;
	}

	int C_Person::getParam() {
		return this->param;
	}
	String^ C_Person::getModif() {
		return this->modif;
	}
	String^ C_Person::getValeur() {
		return this->valeur;
	}
	String^ C_Person::getTable() {
		return this->table;
	}
	void C_Person::setParam(int Param) {
		this->param = Param;
	}
	void C_Person::setModif(String^ Modif) {
		this->modif = Modif;
	}
	void C_Person::setTable(String^ Table) {
		this->table = Table;
	}
	void C_Person::setValeur(String^ Valeur) {
		this->valeur = Valeur;
	}
	String^ C_Person::getNom() {
		return this->nom;
	}
	String^ C_Person::getPrenom() {
		return this->prenom;
	}
	String^ C_Person::delet() {
		return "Rien";
		
	}
	String^ C_Person::update() {
		return "UPDATE" + this->getTable() + "SET " + this->getModif() + "='" + this->getValeur() + "' WHERE id_person = " + this->getParam();
	}
	String^ C_Person::select() {
		return "SELECT * FROM " + this->getTable() + " CROSS JOIN client WHERE " + this->getTable() + ".id_person = person.id_person";
	}
	String^ C_Person::selectParam() {
		return "SELECT " + this->getParam() + "FROM " + this->getTable() + " CROSS JOIN client WHERE " + this->getTable() + ".id_person=" + this->getParam() + "";
	}
	
