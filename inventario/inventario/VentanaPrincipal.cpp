#include "VentanaPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace inventario; // Use the same namespace as in your .h file

[STAThreadAttribute]
int main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Create the main window and run it
    inventario::VentanaPrincipal ^formulario = gcnew VentanaPrincipal();
    formulario->read_persistent_data();
    Application::Run(formulario);
    return 0;
}
