#include "C_Adresse.h"
#include "pch.h"
//à définir
using namespace Composants;
 C_Adresse::C_Adresse() {

}

 void C_Adresse::setNomRue(String^NomRue) {
	 this->nomRue = NomRue;

}
void C_Adresse::setNumRue(int NumRue) {
	this->numRue = NumRue;

}
void C_Adresse::setVille(String^ Ville) {
	this->ville = Ville;

}
void C_Adresse::setZipCode(int ZipCode) {
	this->zipCode = ZipCode;

}
void C_Adresse::setTypeOf(String^ TypeOf) {
	this->typeOf = TypeOf;

}
void C_Adresse::setParam(int Param) {
	this->param = Param;

}
void C_Adresse::setValeur(String^ Valeur) {
	this->valeur = Valeur;

}
void C_Adresse::setIdPerson(int IdPerson) {
	this->idPerson = IdPerson;

}
void C_Adresse::setIdCommand(int IdCommand) {
	this->idCommand = IdCommand;

}
void C_Adresse::setModif(String^ Modif) {
	this->modif = Modif;
}
String^ C_Adresse::getNomRue() {
	return this->nomRue;

}
int C_Adresse::getNumRue() {
	return this->numRue;

}
String^ C_Adresse::getVille( ) {
	return this->ville ;

}
int C_Adresse::getZipCode() {
	return this->zipCode;

}
String^ C_Adresse::getTypeOf() {
	return this->typeOf;

}
int C_Adresse::getIdPerson() {
	return this->idPerson;

}
int C_Adresse::getIdCommand() {
	return this->idCommand;

}
int C_Adresse::getParam() {
	return this->param;

}
String^ C_Adresse::getValeur() {
	return this->valeur;

}
String^ C_Adresse::getModif() {
	return this->modif;
}


String^ C_Adresse::insert() {
	return this->nomRue;

}
String^ C_Adresse::update() {
	return this->nomRue;

}
String^ C_Adresse::delet() {
	return this->nomRue;

}
String^ C_Adresse::select() {
	return this->nomRue;

}


