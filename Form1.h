#pragma once
//#include "CNC.h"

namespace component_placer {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::IO::Ports::SerialPort^ serialPort1;

	private: System::Windows::Forms::ComboBox^ COM_PORT_Select;
	private: System::Windows::Forms::Button^ Y_p;

	private: System::Windows::Forms::Button^ Y_m;

	private: System::Windows::Forms::Button^ X_p;
	private: System::Windows::Forms::Button^ X_m;
	private: System::Windows::Forms::Button^ Next_BTN;
	private: System::Windows::Forms::Button^ Set_ORGN;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Ref;
	private: System::Windows::Forms::Label^ Value;
	private: System::Windows::Forms::Label^ Pkg;
	private: System::Windows::Forms::Label^ REF_Var;
	private: System::Windows::Forms::Label^ Value_Var;
	private: System::Windows::Forms::Label^ PKG_Var;






	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->COM_PORT_Select = (gcnew System::Windows::Forms::ComboBox());
			this->Y_p = (gcnew System::Windows::Forms::Button());
			this->Y_m = (gcnew System::Windows::Forms::Button());
			this->X_p = (gcnew System::Windows::Forms::Button());
			this->X_m = (gcnew System::Windows::Forms::Button());
			this->Next_BTN = (gcnew System::Windows::Forms::Button());
			this->Set_ORGN = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Ref = (gcnew System::Windows::Forms::Label());
			this->Value = (gcnew System::Windows::Forms::Label());
			this->Pkg = (gcnew System::Windows::Forms::Label());
			this->REF_Var = (gcnew System::Windows::Forms::Label());
			this->Value_Var = (gcnew System::Windows::Forms::Label());
			this->PKG_Var = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 115200;
			// 
			// COM_PORT_Select
			// 
			this->COM_PORT_Select->BackColor = System::Drawing::Color::Gainsboro;
			this->COM_PORT_Select->Cursor = System::Windows::Forms::Cursors::Hand;
			this->COM_PORT_Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->COM_PORT_Select->FormattingEnabled = true;
			this->COM_PORT_Select->Location = System::Drawing::Point(12, 37);
			this->COM_PORT_Select->Name = L"COM_PORT_Select";
			this->COM_PORT_Select->Size = System::Drawing::Size(124, 28);
			this->COM_PORT_Select->TabIndex = 2;
			this->COM_PORT_Select->Text = L"set COM Port";
			this->COM_PORT_Select->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			this->COM_PORT_Select->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::COM_PORT_Select_MouseClick);
			// 
			// Y_p
			// 
			this->Y_p->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Y_p->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Y_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Y_p->Location = System::Drawing::Point(93, 245);
			this->Y_p->Name = L"Y_p";
			this->Y_p->Size = System::Drawing::Size(75, 75);
			this->Y_p->TabIndex = 3;
			this->Y_p->Text = L"Y+";
			this->Y_p->UseVisualStyleBackColor = true;
			this->Y_p->Click += gcnew System::EventHandler(this, &Form1::Y_p_Click);
			// 
			// Y_m
			// 
			this->Y_m->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Y_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Y_m->Location = System::Drawing::Point(93, 326);
			this->Y_m->Name = L"Y_m";
			this->Y_m->Size = System::Drawing::Size(75, 75);
			this->Y_m->TabIndex = 4;
			this->Y_m->Text = L"Y-";
			this->Y_m->UseVisualStyleBackColor = true;
			this->Y_m->Click += gcnew System::EventHandler(this, &Form1::Y_m_Click);
			// 
			// X_p
			// 
			this->X_p->Cursor = System::Windows::Forms::Cursors::Hand;
			this->X_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X_p->Location = System::Drawing::Point(174, 326);
			this->X_p->Name = L"X_p";
			this->X_p->Size = System::Drawing::Size(75, 75);
			this->X_p->TabIndex = 5;
			this->X_p->Text = L"X+";
			this->X_p->UseVisualStyleBackColor = true;
			this->X_p->Click += gcnew System::EventHandler(this, &Form1::X_p_Click);
			// 
			// X_m
			// 
			this->X_m->Cursor = System::Windows::Forms::Cursors::Hand;
			this->X_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X_m->Location = System::Drawing::Point(12, 326);
			this->X_m->Name = L"X_m";
			this->X_m->Size = System::Drawing::Size(75, 75);
			this->X_m->TabIndex = 6;
			this->X_m->Text = L"X-";
			this->X_m->UseVisualStyleBackColor = true;
			this->X_m->Click += gcnew System::EventHandler(this, &Form1::X_m_Click);
			// 
			// Next_BTN
			// 
			this->Next_BTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Next_BTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Next_BTN->Location = System::Drawing::Point(406, 343);
			this->Next_BTN->Name = L"Next_BTN";
			this->Next_BTN->Size = System::Drawing::Size(182, 44);
			this->Next_BTN->TabIndex = 7;
			this->Next_BTN->Text = L"next";
			this->Next_BTN->UseVisualStyleBackColor = true;
			this->Next_BTN->Click += gcnew System::EventHandler(this, &Form1::Next_BTN_Click);
			// 
			// Set_ORGN
			// 
			this->Set_ORGN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Set_ORGN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Set_ORGN->Location = System::Drawing::Point(12, 78);
			this->Set_ORGN->Name = L"Set_ORGN";
			this->Set_ORGN->Size = System::Drawing::Size(116, 37);
			this->Set_ORGN->TabIndex = 8;
			this->Set_ORGN->Text = L"set Origin";
			this->Set_ORGN->UseVisualStyleBackColor = true;
			this->Set_ORGN->Click += gcnew System::EventHandler(this, &Form1::Set_ORGN_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Fichier de Position | *.csv";
			this->openFileDialog1->Title = L"selectionnez le fichier de position";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(134, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"open pos file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Ref
			// 
			this->Ref->AutoSize = true;
			this->Ref->BackColor = System::Drawing::Color::Transparent;
			this->Ref->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ref->ForeColor = System::Drawing::Color::White;
			this->Ref->Location = System::Drawing::Point(336, 37);
			this->Ref->Name = L"Ref";
			this->Ref->Size = System::Drawing::Size(105, 39);
			this->Ref->TabIndex = 10;
			this->Ref->Text = L"REF :";
			// 
			// Value
			// 
			this->Value->AutoSize = true;
			this->Value->BackColor = System::Drawing::Color::Transparent;
			this->Value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Value->ForeColor = System::Drawing::Color::White;
			this->Value->Location = System::Drawing::Point(317, 93);
			this->Value->Name = L"Value";
			this->Value->Size = System::Drawing::Size(124, 39);
			this->Value->TabIndex = 11;
			this->Value->Text = L"Value :";
			// 
			// Pkg
			// 
			this->Pkg->AutoSize = true;
			this->Pkg->BackColor = System::Drawing::Color::Transparent;
			this->Pkg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pkg->ForeColor = System::Drawing::Color::White;
			this->Pkg->Location = System::Drawing::Point(270, 151);
			this->Pkg->Name = L"Pkg";
			this->Pkg->Size = System::Drawing::Size(171, 39);
			this->Pkg->TabIndex = 12;
			this->Pkg->Text = L"Package :";
			// 
			// REF_Var
			// 
			this->REF_Var->AutoSize = true;
			this->REF_Var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REF_Var->ForeColor = System::Drawing::Color::White;
			this->REF_Var->Location = System::Drawing::Point(447, 45);
			this->REF_Var->Name = L"REF_Var";
			this->REF_Var->Size = System::Drawing::Size(0, 31);
			this->REF_Var->TabIndex = 13;
			// 
			// Value_Var
			// 
			this->Value_Var->AutoSize = true;
			this->Value_Var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Value_Var->ForeColor = System::Drawing::Color::White;
			this->Value_Var->Location = System::Drawing::Point(447, 99);
			this->Value_Var->Name = L"Value_Var";
			this->Value_Var->Size = System::Drawing::Size(0, 31);
			this->Value_Var->TabIndex = 14;
			// 
			// PKG_Var
			// 
			this->PKG_Var->AutoSize = true;
			this->PKG_Var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PKG_Var->ForeColor = System::Drawing::Color::White;
			this->PKG_Var->Location = System::Drawing::Point(447, 159);
			this->PKG_Var->Name = L"PKG_Var";
			this->PKG_Var->Size = System::Drawing::Size(0, 31);
			this->PKG_Var->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 411);
			this->Controls->Add(this->PKG_Var);
			this->Controls->Add(this->Value_Var);
			this->Controls->Add(this->REF_Var);
			this->Controls->Add(this->Pkg);
			this->Controls->Add(this->Value);
			this->Controls->Add(this->Ref);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Set_ORGN);
			this->Controls->Add(this->Next_BTN);
			this->Controls->Add(this->X_m);
			this->Controls->Add(this->X_p);
			this->Controls->Add(this->Y_m);
			this->Controls->Add(this->Y_p);
			this->Controls->Add(this->COM_PORT_Select);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1200, 450);
			this->Name = L"Form1";
			this->Text = L"Component Placer";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ COM_PORT="";
		double X0=0;
		double Y0=0;
		float Z0;
		double current_x=0;
		double current_y=0;
		int currentLine = 0;
		array<String^>^ csv;
		void move(double x, double y) {
			if (COM_PORT != "") {
				this->serialPort1->PortName = COM_PORT;

				this->serialPort1->Open();
				String^ toSend = "G0 X" + Convert::ToString(x) + " Y" + Convert::ToString(y) + "\n";
				this->serialPort1->Write(toSend);
				#ifdef _DEBUG
 // _DEBUG
					Console::WriteLine(toSend);
#endif
				this->serialPort1->Close();
			}
			else {
				this->COM_PORT_Select->Text = L"Empty";
			
			}
		}
		void moveRel(double x, double y) {
			move(x + X0, y + Y0);
		}
		const int AccessArray(int y, int x) {
			return 7 * y + x;
		}
		const double StringToDouble(String^ input) {
			double output = 0;
			bool pointPassed = false;
			int pointRank = 0;
			int rank = 0;
			int value = 0;
			array<char>^ reference = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9','.' };
			for (int i = 1; i <= input->Length; i++) {
				for (int j = 0; j < 11; j++) {
					if (reference[j] == input[input->Length-i]) {
						value = j;
						break;
					}
				}
				if (value != 10) {
					
					output += value * Math::Pow(10, rank);
					rank++;
				}
				else {
					pointPassed = true;
					pointRank = rank;
				}



			}
			output = output / Math::Pow(10, pointRank);
			return output;
		}

#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	COM_PORT = this->COM_PORT_Select->SelectedItem->ToString();
	

}
private: System::Void Set_ORGN_Click(System::Object^ sender, System::EventArgs^ e) {
	X0 = current_x;
	Y0 = current_y;
}
private: System::Void Next_BTN_Click(System::Object^ sender, System::EventArgs^ e) {
	if (csv!= nullptr&&AccessArray(currentLine,0)<csv->Length) {
		if (this->Next_BTN->Text != "Next") {
			this->Next_BTN->Text = "Next";
		}
		this->REF_Var->Text = csv[AccessArray(currentLine, 0)];
		this->Value_Var->Text = csv[AccessArray(currentLine, 1)];
		this->PKG_Var->Text = csv[AccessArray(currentLine, 2)];
		//double value = Convert::ToDouble(csv[AccessArray(currentLine, 3)]);
		
		//double value3 = StringToDouble(csv[AccessArray(currentLine, 3)]);
		moveRel(StringToDouble(csv[AccessArray(currentLine, 3)]), StringToDouble(csv[AccessArray(currentLine, 3)]));
		currentLine++;
	}
	else {
		this->REF_Var->Text = "";
			this->Value_Var->Text = "";
			this->PKG_Var->Text = "";
	}





}
private: System::Void Y_p_Click(System::Object^ sender, System::EventArgs^ e) {
	current_y++;
	move(current_x, current_y);
}
private: System::Void Y_m_Click(System::Object^ sender, System::EventArgs^ e) {
	current_y--;
	move(current_x, current_y);
}
private: System::Void X_p_Click(System::Object^ sender, System::EventArgs^ e) {
	current_x++;
	move(current_x, current_y);
}
private: System::Void X_m_Click(System::Object^ sender, System::EventArgs^ e) {
	current_x--;
	move(current_x, current_y);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		currentLine = 1;
		//String^ filename = openFileDialog1->FileName;
		System::IO::Stream^ myStream = this->openFileDialog1->OpenFile();
		String^ file = "";
		if (myStream != nullptr) {
			char reading = myStream->ReadByte();
			_int64 length = myStream->Length;
			for (int i=0; i< myStream->Length-1;i++) {
				file += gcnew String(reading,1);
				reading = myStream->ReadByte();
			}
			file = file->Replace("\"", "");
			//file = file->Replace("top", "");
			file = file->Replace("\r", "");
			file = file->Replace("\n", ",");
			//file = file->Replace('\r', ' ');
			

			
			csv = file->Split(','/*, StringSplitOptions::RemoveEmptyEntries*/);
			
			this->Next_BTN->Text = "Start";
		}
	}
}
private: System::Void COM_PORT_Select_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->COM_PORT_Select->Items->Clear();
	this->COM_PORT_Select->Items->AddRange(this->serialPort1->GetPortNames());
	this->COM_PORT_Select->Text = L"";
}
};
}
