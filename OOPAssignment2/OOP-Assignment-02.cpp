#include "OOP-Assignment-02.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of the form
    OOPAssignment2::OOPAssignment02^ form = gcnew OOPAssignment2::OOPAssignment02();

    // Run the application
    Application::Run(form);

    return 0;
}
