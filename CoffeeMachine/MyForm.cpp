#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

//Основная функция программы
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CoffeeMachine::MyForm form;
	Application::Run(%form);
	return 0;
}