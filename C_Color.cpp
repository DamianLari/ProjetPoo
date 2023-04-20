#include "C_Color.h"
#include "pch.h"
using namespace Composants;
C_Color::C_Color() {
	this->paramColor = "Aucune";
	this->increase = 0;
	this->param = 0;
	this-> modif = "Rien";
	this-> valeur = "Rien";
}
void C_Color::setParamColor(String^ ParamColor) {
	this->paramColor= ParamColor;
}
void C_Color::setIncrease(double Increase) {
	this->increase = Increase;
}
String^ C_Color::getParamColor() {
	return this->paramColor;
}
double C_Color::getIncrease() {
	return this->increase;
}

void C_Color::setParam(int Param) {
	this->param = Param;
}
void C_Color::setModif(String^ Modif) {
	this->modif = Modif;
}
void C_Color::setValeur(String^ Valeur) {
	this->valeur = Valeur;
}
int C_Color::getParam() {
	return this->param;
}
String^ C_Color::getModif() {
	return this->modif;
}
String^ C_Color::getValeur() {
	return this->valeur;
}



String^ C_Color::insert() {
	return "INSERT INTO color(Color,increase) VALUES ('" + this->getParamColor() + "','" + this->getIncrease() + "');";
}
String^ C_Color::select() {
	return "SELECT * FROM color;";
}
String^ C_Color::delet() {
	return "Rien";
}
String^ C_Color::update() {
	return "UPDATE color SET " + this->getModif() + "='" + this->getValeur() + "' WHERE id_person = " + this->getParam();
}