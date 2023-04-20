#pragma once
#include "A_Rh.h"
#include "A_Staff.h"
#include "S_Global.h"
#include "C_Global.h"
#include "C_Staff.h"

namespace PooProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace Services;
	using namespace Composants;

	/// <summary>
	/// Description résumée de Connexionh
	/// </summary>
	public ref class Connexionh : public System::Windows::Forms::Form
	{
	public:
		Connexionh(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Connexionh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ B_Login;
	private: System::Windows::Forms::TextBox^ InPass;
	private: System::Windows::Forms::TextBox^ InMail;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: S_Global^ ServiceConnexion;
	private: DataSet^ Ds;
	private: System::Windows::Forms::Button^ AccederClient;
	private: System::Windows::Forms::Button^ AccederStaff;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->B_Login = (gcnew System::Windows::Forms::Button());
			this->InPass = (gcnew System::Windows::Forms::TextBox());
			this->InMail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AccederClient = (gcnew System::Windows::Forms::Button());
			this->AccederStaff = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Location = System::Drawing::Point(349, 138);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(530, 31);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"Identifiez-vous";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// B_Login
			// 
			this->B_Login->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->B_Login->Location = System::Drawing::Point(519, 331);
			this->B_Login->Name = L"B_Login";
			this->B_Login->Size = System::Drawing::Size(188, 85);
			this->B_Login->TabIndex = 13;
			this->B_Login->Text = L"Se connecter";
			this->B_Login->UseVisualStyleBackColor = true;
			this->B_Login->Click += gcnew System::EventHandler(this, &Connexionh::B_Login_Click);
			// 
			// InPass
			// 
			this->InPass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InPass->Location = System::Drawing::Point(679, 244);
			this->InPass->Name = L"InPass";
			this->InPass->Size = System::Drawing::Size(200, 31);
			this->InPass->TabIndex = 12;
			this->InPass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->InPass->TextChanged += gcnew System::EventHandler(this, &Connexionh::InPass_TextChanged);
			// 
			// InMail
			// 
			this->InMail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InMail->Location = System::Drawing::Point(349, 244);
			this->InMail->Name = L"InMail";
			this->InMail->Size = System::Drawing::Size(200, 31);
			this->InMail->TabIndex = 11;
			this->InMail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->InMail->TextChanged += gcnew System::EventHandler(this, &Connexionh::InMail_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(727, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 25);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Password:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(422, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 25);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Mail:";
			// 
			// AccederClient
			// 
			this->AccederClient->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->AccederClient->Location = System::Drawing::Point(250, 331);
			this->AccederClient->Name = L"AccederClient";
			this->AccederClient->Size = System::Drawing::Size(208, 108);
			this->AccederClient->TabIndex = 17;
			this->AccederClient->Text = L"Acceder à l\'espace client";
			this->AccederClient->UseVisualStyleBackColor = true;
			this->AccederClient->Click += gcnew System::EventHandler(this, &Connexionh::AccederClient_Click);
			// 
			// AccederStaff
			// 
			this->AccederStaff->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->AccederStaff->Location = System::Drawing::Point(772, 331);
			this->AccederStaff->Name = L"AccederStaff";
			this->AccederStaff->Size = System::Drawing::Size(214, 108);
			this->AccederStaff->TabIndex = 18;
			this->AccederStaff->Text = L"Acceder à l\'espace employé";
			this->AccederStaff->UseVisualStyleBackColor = true;
			this->AccederStaff->Click += gcnew System::EventHandler(this, &Connexionh::AccederStaff_Click);
			// 
			// Connexionh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1229, 554);
			this->Controls->Add(this->AccederStaff);
			this->Controls->Add(this->AccederClient);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->B_Login);
			this->Controls->Add(this->InPass);
			this->Controls->Add(this->InMail);
			this->Name = L"Connexionh";
			this->Text = L"Connexionh";
			this->Load += gcnew System::EventHandler(this, &Connexionh::Connexionh_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: A_Staff^ staf = nullptr;
	
	private: System::Void B_Login_Click(System::Object^ sender, System::EventArgs^ e) {

	this->ServiceConnexion->setMail(this->InMail->Text);
	this->ServiceConnexion->setPassword(this->InPass->Text);
	//this->Ds = this->ServiceConnexion->checkType();
	if (this->ServiceConnexion->checkType() == "manager") {
		A_Rh^ a_rh = gcnew A_Rh();
		a_rh->Show();

	}
	else {
		A_Staff^ a_staff = gcnew A_Staff();
		a_staff->Show();
	}
	/*
	
	//int a = this->mailVerif() + this->MailPassword();
	
	if (this->ServiceConnexion->mailVerif() == "1") {
		if (this->ServiceConnexion->MailPassword() == "1") {
			if (this->ServiceConnexion->checkType() == "manager") {
				A_Rh^ a_rh = gcnew A_Rh();
				a_rh->Show();
				
			}
			else {
				A_Staff^ a_staff = gcnew A_Staff();
				a_staff->Show();
			}
			Connexionh^ FermerConnexion = gcnew Connexionh();
			FermerConnexion->Close();
		}
	}*/
	/*
	String^ email = this->InMail->Text;
	String^ password = this->InPass->Text;

	try {
		String^ connString = "Data Source=34.163.214.4;Initial Catalog=Exode;Persist Security Info=True;User ID=sqlserver;Password=mdpgpr5";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		//"SELECT(typeOf) FROM staff WHERE staff.mail = @email ;";
		String^ sqlQuery = "SELECT * FROM staff WHERE mail=@email AND password=@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			staff = gcnew Staff;x@
			this->Close();
		}
		else {
			MessageBox::Show("ca va pas être possible désolé","", MessageBoxButtons::OK);
		}

	}
	catch(Exception^ e)
	*/
}
private: System::Void InMail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void InPass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Connexionh_Load(System::Object^ sender, System::EventArgs^ e) {
	this->ServiceConnexion = gcnew S_Global();
}
private: System::Void AccederClient_Click(System::Object^ sender, System::EventArgs^ e) {
	A_Staff^ a_staff = gcnew A_Staff();
	a_staff->Show();
}
private: System::Void AccederStaff_Click(System::Object^ sender, System::EventArgs^ e) {
	A_Rh^ a_rh = gcnew A_Rh();
	a_rh->Show();
}
};
}
