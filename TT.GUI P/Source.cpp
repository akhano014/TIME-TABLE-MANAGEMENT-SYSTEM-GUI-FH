#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create and run the main form
    TTGUIP::MyForm^ form = gcnew TTGUIP::MyForm();
    Application::Run(form);
  
    return 0;
}