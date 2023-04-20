#pragma once
#include"pch.h"
namespace Composants {
	ref class C_MonthlyPayment {
	public:
		int idMonthlyPayment;
		int idPayment;
		String^ dateMonthly;
		int amount;
		String^ meansOfPayment;
		int param;
		String^ modif;
		String^ valeur;

	private:
		C_MonthlyPayment();
		void insert();
		void select();
		void delet();
		void update();

		void setIdMonthlyPayment(int);
		void setIdPayment(int);
		void setDateMonthly(String^);
		void setAmount(int);
		void setMeansOfPayment(String^);

		int getIdMonthlyPayment();
		int getIdPayment();
		String^ getDateMonthly();
		int getAmount();
		String^ getMeansOfPayment();

		void setParam(int);
		int getParam();
		void setModif(String^);
		String^ getModif();
		void setValeur(String^);
		String^ getValeur();

	};
}
