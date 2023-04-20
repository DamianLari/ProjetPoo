#pragma once
#include "pch.h"
#include "C_Global.h"
#include "AccederAuxDonnées.h"
#include "C_Item.h"


using namespace Composants;
namespace Services {
	ref class S_Global : public C_Global {
	private:
		int param;
		int valeurInt;
		String^ table;
		String^ mail;
		String^ password;
		AccederAuxDonnées^ Aad;
		C_Global^ LeGlobal;


	public:
		S_Global();
		/*
		virtual void setParam(int);
		virtual void setModif(String^);
		virtual void setValeur(String^);
		virtual void setValeurInt(int);
		*/
		

		/*
		virtual int getParam();
		virtual String^ getModif();
		virtual String^ getValeur();
		virtual int getValeurInt(int);
		*/
		



		virtual void modifier();
		DataSet^ afficher(String^);
		
		void SeConnecter(String^ Mail, String^ Password);
	};
}

