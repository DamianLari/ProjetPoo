#pragma once
#include "pch.h"

namespace Composants {

	ref class AccederAuxDonnées{
	private:
		String^ ChaineConnexion;
		String^ Requete;
		SqlConnection^ Connecteur;
		SqlCommand^ Commande;
		SqlDataAdapter^ Adapteur;
		DataSet^ DS;
		void setRequete(String^);
	public:
		AccederAuxDonnées();
		int actionRowID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);


	};
}
