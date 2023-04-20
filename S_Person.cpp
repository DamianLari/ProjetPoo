#include "S_Person.h"
#include "C_Person.h"
using namespace Services;
using namespace Composants;

void S_Person::modifier(String^ Table, int Param, String^ Modif, String^ Valeur) {
	this->C_Person::setTable(Table);
	this->C_Person::setParam(Param);
	this->C_Person::setModif(Modif);
	this->C_Person::setValeur(Modif);
	this->C_Person::update();
}
void S_Person::supprimer(String^ Table, int Param) {
	this->C_Person::setTable(Table);
	this->C_Person::setParam(Param);
	this->C_Person::delet();
}
void S_Person::afficher(String^ Table, int Param) {
	this->C_Person::setTable(Table);
	this->C_Person::setParam(Param);
	this->C_Person::selectParam();
}
void S_Person::afficherTout(String^ Table) {
	this->C_Person::setTable(Table);
	this->C_Person::select();
}


