#pragma once
#include "C_Person.h"
#include "pch.h"


namespace Composants {
	ref class C_Client:public C_Person{
	private:
		String^ Prenom;
		String^ Nom;
		String^ Birth;
		String^ FirstOrder;
		int idPerson;


	public:
		C_Client();

		String^ insert();

		void setBirth(String^);
		void setFirstOrder(String^);

		String^ getBirth();
		String^ getFirstOrder();

	};
}

