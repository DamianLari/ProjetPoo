#pragma once
#include "pch.h"

#include "C_Adresse.h"
namespace Composants {
	ref class C_Person : public C_Adresse {
	protected:
		int idPerson;
		String^ nom;
		String^ prenom;
		int param;
		String^ modif;
		String^ valeur;
		String^ table;

	public:
		C_Person();

		void setIdPerson(int);
		void setNom(String^);
		void setPrenom(String^);
		void setParam(int);
		void setModif(String^);
		void setValeur(String^);
		void setTable(String^);

		int getIdPerson();
		String^ getNom();
		String^ getPrenom();
		int getParam();
		String^ getModif();
		String^ getValeur();
		String^ getTable();

		String^ update();
		String^ delet();
		String^ select();
		String^ selectParam();

	};
}

