#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm form;
	Application::Run(% form);
}
