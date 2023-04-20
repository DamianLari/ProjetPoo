#pragma once
#include "C_Staff.h"
#include "pch.h"

using namespace Composants;

namespace Services {
	ref class S_Staff : public C_Staff{
	private:
		AccederAuxDonnées^ Aad;
		C_Staff^ LeStaff;
	public:
		S_Staff();
		void ajouter(String^ Nom, String^ Prenom, String^ Hiring, String^ Mail, String^ Password, String^ TypeOf);
		DataSet^ afficher(String^ Table);
		DataSet^ afficherParam(String^ Table, String^ Param, String^ Valeur);
		void modifier(int Param, String^ Modif, String^ Valeur);

	};
}

