#include "pch.h"
#include "Connexionh.h"
#include "A_Rh.h"
#include "A_Staff.h"

using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PooProjet::Connexionh monFormulaire;
	Application::Run(% monFormulaire);
}


