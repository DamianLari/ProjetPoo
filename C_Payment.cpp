#include "C_Payment.h"
using namespace Composants;

C_Payment::C_Payment() {

}

void C_Payment::setDatePayment(String^ DatePayment) {
	this->datePayment = DatePayment;
}
void C_Payment::setMeansOfPayment(String^ MeansOfPayment) {
	this->meansOfPayment = MeansOfPayment;
}
void C_Payment::setIdCommand(int IdCommand) {
	this->idCommand = IdCommand;
}


int C_Payment::getIdCommand() {
	return this->idCommand;
}
String^ C_Payment::getDatePaymeny() {
	return this->datePayment;
}
String^ C_Payment::getMeansOfPayment() {
	return this->meansOfPayment;
}

int C_Payment::getParam() {
	return this->param;
}
String^ C_Payment::getModif() {
	return this->modif;
}
String^ C_Payment::getValeur() {
	return this->valeur;
}
void C_Payment::setParam(int Param) {
	this->param = Param;
}
void C_Payment::setModif(String^ Modif) {
	this->modif = Modif;
}
void C_Payment::setValeur(String^ Valeur) {
	this->valeur = Valeur;
}
