#include "S_Item.h"
//#include "C_Item.h"
#include "AccederAuxDonnées.h"
using namespace Services;
using namespace Composants;
S_Item::S_Item() {
	this->Aad = gcnew AccederAuxDonnées();
	this->Litem = gcnew  C_Item();

}

void S_Item::ajouter(String^ Nom, String^ Typeof, String^ Color,int Stock,double Prix_uht,int Seuil,double Prix_achat) {
	String^ sql;
	//this->C_Item::setIdItem( nom);
	this->Litem->setIdColor( Color);
	this->Litem->setNom(Nom);
	this->Litem->setTypeOf(Typeof);
	this->Litem->setPrixAchat(Prix_achat);
	this->Litem->setPrixVente(Prix_uht);
	this->Litem->setStock(Stock);
	this->Litem->setSeuil(Seuil);
	sql = this->Litem->insert();
	this->Aad->actionRows(sql);
}
DataSet^ S_Item::afficher(String^ Table) {
	String^ sql;
	sql = this->Litem->select();
	return this->Aad->getRows(sql,Table);

}
void S_Item::modifier(int Param, String^ Modif, String^ Valeur) {
	String^ sql;
	this->Litem->setParam(Param);
	this->Litem->setModif(Modif);
	this->Litem->setValeur(Valeur);
	sql = this->Litem->update();
	this->Aad->actionRows(sql);
}


