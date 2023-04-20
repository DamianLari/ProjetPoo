#include "C_MonthlyPayment.h"
//à définir
using namespace Composants;
C_MonthlyPayment::C_MonthlyPayment() {

}

void C_MonthlyPayment::insert() {

}

void C_MonthlyPayment::select() {

}
void C_MonthlyPayment::delet() {

}
void C_MonthlyPayment::update() {

}
void C_MonthlyPayment::setIdMonthlyPayment(int) {

}
void C_MonthlyPayment::setIdPayment(int) {

}
void C_MonthlyPayment::setDateMonthly(String^) {

}
void C_MonthlyPayment::setAmount(int) {

}
void C_MonthlyPayment::setMeansOfPayment(String^) {

}

int C_MonthlyPayment::getIdMonthlyPayment() {
	return this->idMonthlyPayment;
}
int C_MonthlyPayment::getIdPayment() {
	return this->idPayment;
}
String^ C_MonthlyPayment::getDateMonthly() {
	return this->dateMonthly;
}
int C_MonthlyPayment::getAmount() {
	return this->amount;
}
String^ C_MonthlyPayment::getMeansOfPayment() {
	return this->meansOfPayment;
}
int C_MonthlyPayment::getParam() {
	return this->param;
}
String^ C_MonthlyPayment::getModif() {
	return this->modif;
}
String^ C_MonthlyPayment::getValeur() {
	return this->valeur;
}
void C_MonthlyPayment::setParam(int Param) {
	this->param = Param;
}
void C_MonthlyPayment::setModif(String^ Modif) {
	this->modif = Modif;
}
void C_MonthlyPayment::setValeur(String^ Valeur) {
	this->valeur = Valeur;
}
