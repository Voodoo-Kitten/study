#include "StartWindow.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThread]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CourseWorkAndreevAM::StartWindow form;
	Application::Run(% form);
}
