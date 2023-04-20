#pragma once
#include "pch.h"
#include "AccederAuxDonnées.h"
namespace Composants {
	ref class C_Item :public AccederAuxDonnées{
	private:
		int idItem;
		String^ idColor;
		String^ typeOf;
		String^ nom;
		double prixVente;
		double prixAchat;
		int stock;
		int seuil;
		int param;
		String^ modif;
		String^ valeur;

	public:
		C_Item();
		String^ insert();
		String^ delet();
		String^ select();
		String^ update();
;
		void setParam(int);
		int getParam();
		void setModif(String^);
		String^ getModif();
		void setValeur(String^);
		String^ getValeur();

		void setIdItem(int);
		void setIdColor(String^);
		void setNom(String^);
		void setTypeOf(String^);
		void setPrixAchat(double);
		void setPrixVente(double);
		void setStock(int);
		void setSeuil(int);

		int getIdItem();
		String^ getIdColor();
		String^ getNom();
		String^ getTypeOf();
		double getPrixAchat();
		double getPrixVente();
		int getStock();
		int getSeuil();
	};
}

