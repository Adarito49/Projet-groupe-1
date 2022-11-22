#include "MenuPrincipal.h"

using namespace System; 
using namespace System::Windows::Forms;   
[STAThreadAttribute] void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Projetgroupe1::MenuPrincipal projetadar;
	Application::Run(% projetadar);
}