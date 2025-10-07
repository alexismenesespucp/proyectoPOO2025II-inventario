#pragma once

namespace inventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class VentanaPrincipal : public System::Windows::Forms::Form
	{
	public:
		List<List<String^>^>^ data = gcnew List<List<String^>^>();
		VentanaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VentanaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1129, 49);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exitToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(141, 45);
			this->fileToolStripMenuItem->Text = L"Archivo";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::G));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(379, 54);
			this->exitToolStripMenuItem->Text = L"Grabar";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::exitToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->salirToolStripMenuItem->Size = System::Drawing::Size(379, 54);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaPrincipal::salirToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(117, 45);
			this->editToolStripMenuItem->Text = L"Editar";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(384, 99);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(297, 150);
			this->textBox1->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 31;
			this->listBox1->Location = System::Drawing::Point(359, 432);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(219, 252);
			this->listBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(753, 469);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 76);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Leer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaPrincipal::button1_Click);
			// 
			// VentanaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1129, 751);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"VentanaPrincipal";
			this->Text = L"VentanaPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: System::Void read_persistent_data() {
			FileStream^ archivo;
			archivo = gcnew FileStream("archivo.txt", FileMode::Open, FileAccess::Read);
			StreamReader^ lector = gcnew StreamReader(archivo);
			while (true) {
				String^ linea = lector->ReadLine();
				if (linea == nullptr) break;
				Console::WriteLine("Se ha leído la información: " + linea);
				array<String^>^ values = linea->Split(',');
				
				List<String^>^ stringvalues = gcnew List<String^>();
				bool firstitem = true;
				for each (String ^val in values) {
					if (firstitem) {
						this->listBox1->Items->Add(val);
						firstitem = false;
					}
					stringvalues->Add(val);
				}
				data->Add(stringvalues);
				this->textBox1->Text += "\n" + linea;
			}
			lector->Close();
			archivo->Close();
		}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	

	FileStream^ archivo;
	archivo = gcnew FileStream("archivo.txt", FileMode::Create, FileAccess::Write);
	StreamWriter^ escritor = gcnew StreamWriter(archivo);
	escritor->WriteLine(this->textBox1->Text);
	escritor->Close();
	archivo->Close();
	Console::WriteLine("Información grabada: " + this->textBox1->Text);
	MessageBox::Show("Se ha grabado la información.");

}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String ^SelectedValue = this->listBox1->Items[this->listBox1->SelectedIndex]->ToString();
	for each (List<String^> ^specificData in data) {
		String^ number = specificData[0];
		if (number == SelectedValue) {
			Console::WriteLine("Los valores seleccionados: " + SelectedValue);
			for each (String ^ value in specificData) {
				Console::WriteLine(value);
			}

		}
	}

}
};
}
