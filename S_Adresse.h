#pragma once
#include "pch.h"
#include "C_Adresse.h"

using namespace Composants;
namespace Services {
	ref class S_Adresse  {
	private: 
		AccederAuxDonnées^ Aad;
		C_Adresse^ Ladresse;	

	public:
		S_Adresse();
		void ajouterAdresse(int Num, String^ Nom, String^ Ville, int Zip, String^ TypeOf, int IdCommand, int IdPerson);
		void modifier();
		void supprimer();
		DataSet^ afficher(String^ Table);

	};
}

