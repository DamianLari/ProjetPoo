#pragma once
#include "pch.h"
ref class C_Discount{
private:
	int idDiscount;
	int discountValue;
	int param;
	String^ modif;
	int valeur;
public:
	C_Discount();
	String^ select();
	String^ update();
	String^ delet();
	void setIdDiscount(int IdDiscount);
	void setDiscount(int Discount);
	int getIdDiscount();
	int getDiscountValue();

	void setParam(int);
	int getParam();
	void setModif(String^);
	String^ getModif();
	void setValeur(int);
	int getValeur();

};

