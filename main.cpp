
#include "Form1.h";
#include "Serial.h"
//#define _WIN64

using namespace component_placer;

[STAThread]
int main(array<System::String^>^ args)
{   
    
    
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1());
    return 0;
}
