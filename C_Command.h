#pragma once
#include "pch.h"
#include "AccederAuxDonnées.h"
#include "S_Adresse.h"

using namespace Services;
namespace Composants {
	ref class C_Command{
	private:
		int idCommand;
		int idPerson;
		int idDiscount;
		String^ orderDate;
		String^ validDate;
		double prixHT;
		double prixTTC;
		int Tva;
		int param;
		String^ modif;
		String^ valeur;


	public:
		C_Command();

		String^ insert();
		String^ delet();
		String^ update();
		String^ select();
		String^ calculPrixHt();
		String^ calulPrixTtc();
		String^ maxIdCommande();

		void setIdCommand(int);
		void setIdPerson(int);
		void setIdDiscount(int);
		void setOrderDate(String^);
		void setValidDate(String^);
		void setPrixHT(double);
		void setPrixTTC(double);
		void setTVA(int);

		int getIdCommand();
		int getIdPerson();
		int getIdDiscount();
		String^ getOrderDate();
		String^ getValidDate();
		double getPrixHT();
		double getPrixTTC();
		int getTVA();

		void setParam(int);
		int getParam();
		void setModif(String^);
		String^ getModif();
		void setValeur(String^);
		String^ getValeur();


	};
}
