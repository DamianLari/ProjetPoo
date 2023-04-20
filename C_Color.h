#pragma once
#include "pch.h"
namespace Composants {
	ref class C_Color {
	private:
		String^ paramColor;
		double increase;
		int param;
		String^ modif;
		String^ valeur;
	public:
		C_Color();
		
		String^ insert();
		String^ select();
		String^ delet();
		String^ update();

		void setParamColor(String^ ParamColor);
		String^ getParamColor();
		void setIncrease(double Increase);
		double getIncrease();

		void setParam(int);
		int getParam();
		void setModif(String^);
		String^ getModif();
		void setValeur(String^);
		String^ getValeur();

	};
}

