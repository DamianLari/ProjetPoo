#pragma once
#include "pch.h"
#include "C_Command.h"
using  namespace Composants;
namespace Services {
	ref class S_Command :public C_Command {
	private:
		int param;
		AccederAuxDonnées^ Aad;
		C_Command^ LaCommand;
		S_Adresse^ Ladresse;
		/*
		String^ modif;
		String^ valeur;
		int valeurInt;
		*/
	public: 
		S_Command();
		void setParam(int);
		int getParam();
		void EnregistrerCommande(int NumF, int NumL, String^ NomF, String^ NomL, String^ VilleF, String^ VilleL, int ZipF, int ZipcL, int IdPerson);
		//DataSet^ afficherIdCommand(String^ Table);

			/*
			void setModif(String^);
			void setValeur(String^);
			void setValeurInt(int);


			String^ getModif();
			String^ getValeur();
			int getValeurInt(int);
		*/

	};
}

