#include "S_Command.h"
#include "C_Command.h"

using namespace Services;
using namespace Composants;
S_Command::S_Command() {
	this->Aad = gcnew AccederAuxDonnées();
	this->LaCommand = gcnew C_Command();
	this->Ladresse = gcnew S_Adresse();
}
void S_Command::setParam(int) {

}
int S_Command::getParam() {
	return 0;
}

/*
DataSet^ afficherIdCommand(String^Table) {
	String^ sql;
	sql=this->LaCommand->maxIdCommande();
	return this->Aad->getRows(sql, Table);
}*/

void S_Command::EnregistrerCommande(int NumF, int NumL, String^ NomF, String^ NomL, String^ VilleF, String^ VilleL, int ZipF, int ZipL,int IdPerson) {
	
	this->Ladresse->ajouterAdresse(NumF, NomF, VilleF, ZipF, "fac",this->getIdCommand(), IdPerson);
	this->Ladresse->ajouterAdresse(NumL, NomL, VilleL, ZipL, "liv", this->getIdCommand(), IdPerson);
	
}
/*
void S_Command::supprimer() {

}

void S_Command::modifier() {

}
void S_Command::afficher() {

}
*/