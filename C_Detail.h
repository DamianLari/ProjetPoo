#pragma once
#include "pch.h"
#include "AccederAuxDonnées.h"
namespace Composants {
	ref class C_Detail: public AccederAuxDonnées{
	private:
		int idDetail;
		int idCommand;
		int idItem;
		int amount;
		int param;
		String^ modif;
		String^ valeur;

	public:
		C_Detail();

		String^ insert();
		String^ delet();
		String^ update();
		String^ select();

		void setIdDetail(int);
		void setIdCommand(int);
		void setIdItem(int);
		void setAmount(int);

		int getIdDetail();
		int getIdCommand();
		int getIdItem();
		int getAmount();

		void setParam(int);
		int getParam();
		void setModif(String^);
		String^ getModif();
		void setValeur(String^);
		String^ getValeur();
	};
}

