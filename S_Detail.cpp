#include "S_Detail.h"
#include"S_Global.h"
//� d�finir
using namespace Services;
S_Detail::S_Detail() {
}
/*
S_Detail::S_Detail() {
	this->Aad = gcnew AccederAuxDonn�es();
	this->LeDetail = gcnew  C_Detail();
}
void S_Detail::ajouter(int Amount, int IdCommand, int IdItem) {
	String^ sql;
	this->LeDetail->setAmount(Amount);
	this->LeDetail->setIdCommand(IdCommand);
	this->LeDetail->setIdItem(IdItem);
	sql = this->LeDetail->insert();
	this->Aad->actionRows(sql);
}
/*
void afficher(String^ Table) {
	String^ sql;
	sql = this->LeDetail->select();
	this->Aad->getRows(sql, Table);
}
	

 
void supprimer() {

 }
void modifier() {

 }
*/