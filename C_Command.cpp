#include "C_Command.h"

namespace Composants {
	C_Command::C_Command() {
		this->idCommand = 0;
		this->idPerson=0;
		this->idDiscount=0;
		this-> orderDate="Aucune";
		this-> validDate = "Aucune";
		this->prixHT = 0;
		this->prixTTC = 0;
		this->Tva = 0;
		this->param = 0;
		this->modif = "Rien";
		this-> valeur = "Aucune";
	}


	String^ C_Command::insert() {
		return "INSERT INTO commande(order_date, valid_date, Id_discount, id_person) VALUES (" + this->getOrderDate() + "','" + this->getValidDate() + "','" + this->getIdDiscount() + "','" + this->getIdPerson() + "';)";
	}
	String^ C_Command::delet() {
		return "Rien";
	}
	String^ C_Command::update() {
		return "Rien";
	}
	String^ C_Command::select() {
		return "Rien";
	}
	String^ C_Command::calculPrixHt() {
		return "Rien";
	}
	String^ C_Command::calulPrixTtc() {
		return "Rien";
	}
	String^ C_Command:: maxIdCommande() {
		return "SELECT MAX(id_command) FROM command";
	}

	void C_Command::setIdCommand(int IdCommand) {
		this->idCommand = IdCommand;
	}
	void C_Command::setIdPerson(int IdPerson) {
		this->idPerson = IdPerson;
	}
	void C_Command::setIdDiscount(int IdDiscount) {
		this->idDiscount = IdDiscount;
	}
	void C_Command::setOrderDate(String^ Order) {
		this->orderDate = Order;
	}
	void C_Command::setValidDate(String^ Valid) {
		this->validDate = Valid;
	}
	void C_Command::setPrixHT(double PrixHt) {
		this->prixHT = PrixHt;
	}
	void C_Command::setPrixTTC(double PrixTtc) {
		this->prixTTC = PrixTtc;
	}
	void C_Command::setTVA(int TVA) {
		this->Tva = TVA;
	}

	int C_Command::getIdCommand() {
		return this->idCommand;
	}
	int C_Command::getIdPerson() {
		return this->idPerson;
	}
	int C_Command::getIdDiscount() {
		return this->idDiscount;
	}
	String^ C_Command::getOrderDate() {
		return this->orderDate;
	}
	String^ C_Command::getValidDate() {
		return this->validDate;
	}
	double C_Command::getPrixHT() {
		return this->prixHT;
	}
	double C_Command::getPrixTTC() {
		return this->prixTTC;
	}
	int C_Command::getTVA() {
		return this->Tva;
	}


	void C_Command::setParam(int Param) {
		this->param = Param;
	}
	void C_Command::setModif(String^ Modif) {
		this->modif = Modif;
	}
	void C_Command::setValeur(String^ Valeur) {
		this->valeur = Valeur;
	}
	int C_Command::getParam() {
		return this->param;
	}
	String^ C_Command::getModif() {
		return this->modif;
	}
	String^ C_Command::getValeur() {
		return this->valeur;
	}
}