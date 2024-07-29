#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	/*
    std::cout << "This works" << std::endl;
	Console::WriteLine("Shutting down.");

    SYSTEMTIME st, lt;

    GetSystemTime(&st);
    GetLocalTime(&lt);

    printf("The system time is: %02d:%02d\n", st.wHour, st.wMinute);
    printf(" The local time is: %02d:%02d\n", lt.wHour, lt.wMinute);
    */
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TreyClock2::MyForm form;
	Application::Run(% form);   
    
   
    //system("Pause");
    return 0;
}


