#pragma once
#include "pch.h"
#include "C_Item.h"

using namespace Composants;
namespace Services {
	ref class S_Item  {
	private:
		AccederAuxDonnées^ Aad;
		C_Item^ Litem;
	public:
		S_Item();
		DataSet^ afficher(String^);
		void ajouter(String^ nom, String^ typeof, String^ Color, int stock, double prix_uht, int seuil, double prix_achat);
		void modifier(int Param, String^ Modif, String^ Valeur);

	};
}
