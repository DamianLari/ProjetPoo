#include "C_Detail.h"
#include "pch.h"
#include "AccederAuxDonnées.h"

using namespace Composants;

C_Detail::C_Detail(){
	this->idDetail = 0;
	this->idCommand=0;
	this->idItem=0;
	this->amount=0;
}
void C_Detail::setIdDetail(int Id) {
	this->idDetail = Id;
};

void C_Detail::setIdCommand(int Id) {
	this->idCommand = Id;
};

void C_Detail::setIdItem(int Id) {
	this->idItem = Id;
};

void C_Detail::setAmount(int Amount) {
	this->amount = Amount;
};

int C_Detail::getIdDetail() {
	return this->idDetail;
};

int C_Detail::getIdCommand() {
	return this->idCommand;
};

int C_Detail::getIdItem() {
	return this->idItem;
};

int C_Detail::getAmount() {
	return this->amount;
};


void C_Detail::setParam(int Param) {
	this->param = Param;
}
void C_Detail::setModif(String^ Modif) {
	this->modif = Modif;
}
void C_Detail::setValeur(String^ Valeur) {
	this->valeur = Valeur;
}
int C_Detail::getParam() {
	return this->param;
}
String^ C_Detail::getModif() {
	return this->modif;
}
String^ C_Detail::getValeur() {
	return this->valeur;
}


String^ C_Detail::insert() {
	return "INSERT INTO detail (amount,id_command,id_item) VALUES ('" + this->getAmount() + "','" + this->getIdCommand() + "','" + this->getIdItem() + "');";
};
String^ C_Detail::select() {
	return "SELECT * FROM color;";
}
String^ C_Detail::delet() {
	return "Rien";
}
String^ C_Detail::update() {
	return "UPDATE detail SET " + this->getModif() + "='" + this->getValeur() + "' WHERE id_person = " + this->getParam();
}







