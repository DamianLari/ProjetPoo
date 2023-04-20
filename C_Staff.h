#pragma once
#include "pch.h"
#include "C_Person.h"

namespace Composants {
	ref class C_Staff : public C_Person {
	private:

		String^ hiring;
		String^ password;
		String^ mail;
		int boss;
		String^ typeOf;


	public:
		C_Staff();

		String^ insert();
		String^ select();
		String^ selectParam(String^ Param,String^ Valeur);

		void setHiring(String^);
		void setPassword(String^);
		void setMail(String^);
		void setBoss(int);
		void setTypeOf(String^);

		String^ getMail();
		String^ getPassword();
		String^ getHiring();
		int getBoss();
		String^ getTypeOf();
	};
}



