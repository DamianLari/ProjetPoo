#pragma once
#include "C_Client.h"
#include "S_Person.h"
namespace Services {
	ref class S_Client :public C_Client {
	private:
		AccederAuxDonnées^ Aad;
		C_Client^ LeClient;
	public:
		S_Client();

		void ajouter(String^ Nom, String^ Prenom, String^ First, String^ Birth);
		DataSet^ afficher(String^ Table);
		void modifier(int Param, String^ Modif, String^ Valeur);
	};
}

