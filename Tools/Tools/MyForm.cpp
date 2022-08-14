#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Tools;
[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm form;
	Control1 ctrl;
	Application::Run(% form);
}