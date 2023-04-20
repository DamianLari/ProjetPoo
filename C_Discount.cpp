#include "C_Discount.h"
// définir

C_Discount::C_Discount() {
	this->discountValue=0;
	this->param = 0;
	this-> modif = "Rien";
	this-> valeur = 0;
}
String^ C_Discount::select() {
	return "Rien";
}
String^ C_Discount::delet() {
	return "Rien";
}
String^ C_Discount::update() {
	return "UPDATE discount SET " + this->getModif() + "='" + this->getValeur() + "' WHERE id_person = " + this->getParam();
}

void C_Discount::setIdDiscount(int IdDiscount) {

}
void C_Discount::setDiscount(int Discount) {
	this->discountValue = Discount;
}
int C_Discount::getIdDiscount() {
	return this->idDiscount;
}
int C_Discount::getDiscountValue() {
	return this->discountValue;
}

void C_Discount::setParam(int Param) {
	this->param = Param;
}
void C_Discount::setModif(String^ Modif) {
	this->modif = Modif;
}
void C_Discount::setValeur(int Valeur) {
	this->valeur = Valeur;
}
int C_Discount::getParam() {
	return this->param;
}
String^ C_Discount::getModif() {
	return this->modif;
}
int C_Discount::getValeur() {
	return this->valeur;
}
