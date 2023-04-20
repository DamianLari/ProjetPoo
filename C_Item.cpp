#include "C_Item.h"
namespace Composants {
	C_Item::C_Item() {

	}

	String^ C_Item::insert() {
		return "INSERT INTO item(nom, typeOf, Color, stock, prix_uht, seuil, prix_achat) VALUES ('" + this->getNom() + "','"
				+ this->getTypeOf() + "','" + this->getIdColor() + "','" + this->getStock() + "','" + this->getPrixVente() + 
				"','" + this->getSeuil() + "','" + this->getPrixAchat() + "';)";
	}
	String^ C_Item::delet() {
		return "Rien";
	}
	String^ C_Item::select() {
		return "SELECT * FROM item;";
	}
	String^ C_Item::update() {
		return "Rien";
	}

	void C_Item::setIdItem(int) {

	}
	void C_Item::setIdColor(String^ IdColor) {
		this->idColor = IdColor;
	}
	void C_Item::setNom(String^ Nom) {
		this->nom = Nom;
	}
	void C_Item::setTypeOf(String^ TypeOf) {
		this->typeOf = TypeOf;
	}
	void C_Item::setPrixAchat(double PrixAchat) {
		this->prixAchat = PrixAchat;
	}
	void C_Item::setPrixVente(double PrixVente) {
		this->prixVente = PrixVente;
	}
	void C_Item::setStock(int Stock) {
		this->stock = Stock;
	}
	void C_Item::setSeuil(int Seuil) {
		this->seuil = Seuil;
	}

	int C_Item::getIdItem() {
		return 0;
	}
	String^ C_Item::getIdColor() {
		return this->idColor;
	}
	String^ C_Item::getNom() {
		return this->nom;
	}
	String^ C_Item::getTypeOf() {
		return this->typeOf;
	}
	double C_Item::getPrixAchat() {
		return this->prixAchat;
	}
	double C_Item::getPrixVente() {
		return this->prixVente;
	}
	int C_Item::getStock() {
		return this->stock;
	}
	int C_Item::getSeuil() {
		return this->seuil;
	}


	int C_Item::getParam() {
		return this->param;
	}
	String^ C_Item::getModif() {
		return this->modif;
	}
	String^ C_Item::getValeur() {
		return this->valeur;
	}
	void C_Item::setParam(int Param) {
		this->param = Param;
	}
	void C_Item::setModif(String^ Modif) {
		this->modif = Modif;
	}
	void C_Item::setValeur(String^ Valeur) {
		this->valeur = Valeur;
	}
}


