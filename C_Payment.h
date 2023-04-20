#pragma once
#include "pch.h"
#include "S_Global.h"

namespace Composants {
	ref class C_Payment {
	private:
		int idPayment;
		String^ datePayment;
		String^ meansOfPayment;
		int idCommand;
		int param;
		String^ modif;
		String^ valeur;

	public:
		C_Payment();
		//void setIdPayment(int IdPayment);
		void setDatePayment(String^ DatePayment);
		void setMeansOfPayment(String^ MeansOfPayment);
		void setIdCommand(int IdCommand);

		int getIdCommand();
		String^ getDatePaymeny();
		String^ getMeansOfPayment();

		void setParam(int);
		int getParam();
		void setModif(String^);
		String^ getModif();
		void setValeur(String^);
		String^ getValeur();

	};
}

