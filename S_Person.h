#pragma once
#include "C_Person.h"
using namespace Composants;
namespace Services {
	ref class S_Person :public C_Person {
	private:
		void modifier(String^ Table, int Param, String^ Modif, String^ Valeur);
		void supprimer(String^ Table, int Param);
		void afficher(String^ Table, int Param);
		void afficherTout(String^ Table);

	};
}

