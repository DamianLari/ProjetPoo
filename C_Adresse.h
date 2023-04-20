#pragma once

#include "pch.h"
#include "S_Global.h"

using namespace Services;
namespace Composants {
	ref class C_Adresse:public S_Global {
	private:
		int idAdresse;
		int numRue;
		String^ nomRue;
		String^ ville;
		int zipCode;
		String^ typeOf;
		int idPerson;
		int idCommand;
		int param;
		String^ modif;
		String^ valeur;

	public:
		C_Adresse();

		void setNomRue(String^);
		void setNumRue(int);
		void setVille(String^);
		void setZipCode(int);
		void setTypeOf(String^);
		void setIdPerson(int);
		void setIdCommand(int);

		String^ getNomRue();
		int getNumRue();
		String^ getVille();
		int getZipCode();
		String^ getTypeOf();
		int getIdPerson();
		int getIdCommand();



		String^ insert();
		String^ update();
		String^ delet();
		String^ select();

		void setParam(int);
		int getParam();
		void setModif(String^);
		String^ getModif();
		void setValeur(String^);
		String^ getValeur();

	};
}


