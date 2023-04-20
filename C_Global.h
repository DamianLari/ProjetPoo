#pragma once
#include "pch.h"
#include "AccederAuxDonnées.h"
namespace Composants {
	ref class C_Global:public AccederAuxDonnées {
	protected:
		int param;
		String^ modif;
		String^ valeur;
		String^ table;
		String^ mail;
		String^ password;

	public:
		C_Global();
		
		void setParam(int);
		void setModif(String^);
		void setValeur(String^);
		void setTable(String^);

		int getParam();
		String^ getModif();
		String^ getValeur();
		String^ getTable();

		String^ update();
		String^ delet();
		String^ select();
		String^ selectParam();

		void setMail(String^);
		void setPassword(String^);
		String^ getMail();
		String^ getPassword();

		String^ mailVerif();
		String^ MailPassword();
		String^ checkType();

	};
}
