#pragma once
#include "S_Staff.h"
#include "S_Global.h"
#include "S_Adresse.h"

namespace PooProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Services;
	using namespace Composants;

	/// <summary>
	/// Description résumée de A_Rh
	/// </summary>
	/// 
	public ref class A_Rh : public System::Windows::Forms::Form
	{
	public:
		A_Rh(void)
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
		~A_Rh()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Enregister;
	private: System::Windows::Forms::Button^ Enregister_Button;

	private: System::Windows::Forms::TabPage^ Modifier;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Enregistrer_Hiring;

	private: System::Windows::Forms::TextBox^ Enregistrer_Mail;
	private: System::Windows::Forms::TextBox^ Enregistrer_Prenom;


	private: System::Windows::Forms::TextBox^ Enregistrer_Nom;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TabPage^ Search;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label9;




	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ Rechercher_Hiring;
	private: System::Windows::Forms::TextBox^ Rechercher_Mail;


	private: System::Windows::Forms::TextBox^ Rechercher_Prenom;

	private: System::Windows::Forms::TextBox^ Rechercher_Nom;
	private: System::Windows::Forms::Button^ Rechercher_Button;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ Enregistrer_Ville;
	private: System::Windows::Forms::TextBox^ Enregistrer_Zip;


	private: System::Windows::Forms::TextBox^ Enregistrer_NomRue;
	private: System::Windows::Forms::TextBox^ Enregistrer_NumRue;



	private: System::Windows::Forms::TabPage^ Supprimer;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Modifier_Ville;

	private: System::Windows::Forms::TextBox^ Modifier_Zip;
	private: System::Windows::Forms::TextBox^ Modifier_NomRue;


	private: System::Windows::Forms::TextBox^ Modifier_NumRue;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ Modifier_Hiring;

	private: System::Windows::Forms::TextBox^ Modifier_Mail;

	private: System::Windows::Forms::TextBox^ Modifier_Prenom;

	private: System::Windows::Forms::TextBox^ Modifier_Nom;

	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ Modifier_Button;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ Modifier_Id;

	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::TextBox^ Rechercher_Id;

	private: System::Windows::Forms::Label^ label26;



private: System::Windows::Forms::TextBox^ Modifier_Mdp1;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ Rechercher_TypeOf;

	private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ Enregistrer_TypeOf;


private: System::Windows::Forms::Label^ label31;

private: System::Windows::Forms::TextBox^ Enregistrer_Mdp1;




	private: System::ComponentModel::IContainer^ components;

	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Search = (gcnew System::Windows::Forms::TabPage());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->Rechercher_TypeOf = (gcnew System::Windows::Forms::TextBox());
			this->Rechercher_Id = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Rechercher_Hiring = (gcnew System::Windows::Forms::TextBox());
			this->Rechercher_Mail = (gcnew System::Windows::Forms::TextBox());
			this->Rechercher_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Rechercher_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Rechercher_Button = (gcnew System::Windows::Forms::Button());
			this->Enregister = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->Enregistrer_Mdp1 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->Enregistrer_TypeOf = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Enregistrer_Ville = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer_Zip = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer_NomRue = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer_NumRue = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Enregistrer_Hiring = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer_Mail = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Enregistrer_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Enregister_Button = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::TabPage());
			this->Modifier_Mdp1 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->Modifier_Button = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Modifier_Id = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Modifier_Ville = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_Zip = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_NomRue = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_NumRue = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Modifier_Hiring = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_Mail = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Supprimer = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->Search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Enregister->SuspendLayout();
			this->Modifier->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->Supprimer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->Search);
			this->tabControl1->Controls->Add(this->Enregister);
			this->tabControl1->Controls->Add(this->Modifier);
			this->tabControl1->Controls->Add(this->Supprimer);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1205, 530);
			this->tabControl1->TabIndex = 2;
			// 
			// Search
			// 
			this->Search->Controls->Add(this->label29);
			this->Search->Controls->Add(this->Rechercher_TypeOf);
			this->Search->Controls->Add(this->Rechercher_Id);
			this->Search->Controls->Add(this->label26);
			this->Search->Controls->Add(this->dataGridView1);
			this->Search->Controls->Add(this->label9);
			this->Search->Controls->Add(this->label11);
			this->Search->Controls->Add(this->label12);
			this->Search->Controls->Add(this->label13);
			this->Search->Controls->Add(this->Rechercher_Hiring);
			this->Search->Controls->Add(this->Rechercher_Mail);
			this->Search->Controls->Add(this->Rechercher_Prenom);
			this->Search->Controls->Add(this->Rechercher_Nom);
			this->Search->Controls->Add(this->Rechercher_Button);
			this->Search->Location = System::Drawing::Point(8, 39);
			this->Search->Name = L"Search";
			this->Search->Padding = System::Windows::Forms::Padding(3);
			this->Search->Size = System::Drawing::Size(1189, 483);
			this->Search->TabIndex = 3;
			this->Search->Text = L"Rechercher";
			this->Search->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(938, 23);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(143, 25);
			this->label29->TabIndex = 47;
			this->label29->Text = L"Poste occupé";
			// 
			// Rechercher_TypeOf
			// 
			this->Rechercher_TypeOf->Location = System::Drawing::Point(914, 51);
			this->Rechercher_TypeOf->Name = L"Rechercher_TypeOf";
			this->Rechercher_TypeOf->Size = System::Drawing::Size(200, 31);
			this->Rechercher_TypeOf->TabIndex = 46;
			// 
			// Rechercher_Id
			// 
			this->Rechercher_Id->Location = System::Drawing::Point(39, 51);
			this->Rechercher_Id->Name = L"Rechercher_Id";
			this->Rechercher_Id->Size = System::Drawing::Size(100, 31);
			this->Rechercher_Id->TabIndex = 45;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(70, 28);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(32, 25);
			this->label26->TabIndex = 44;
			this->label26->Text = L"ID";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 136);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1151, 329);
			this->dataGridView1->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(751, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 25);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Mail";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(485, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(179, 25);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Date d\'embauche";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(344, 28);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 25);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Prénom";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(201, 28);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 25);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Nom";
			// 
			// Rechercher_Hiring
			// 
			this->Rechercher_Hiring->Location = System::Drawing::Point(490, 51);
			this->Rechercher_Hiring->Name = L"Rechercher_Hiring";
			this->Rechercher_Hiring->Size = System::Drawing::Size(150, 31);
			this->Rechercher_Hiring->TabIndex = 4;
			// 
			// Rechercher_Mail
			// 
			this->Rechercher_Mail->Location = System::Drawing::Point(683, 51);
			this->Rechercher_Mail->Name = L"Rechercher_Mail";
			this->Rechercher_Mail->Size = System::Drawing::Size(200, 31);
			this->Rechercher_Mail->TabIndex = 3;
			// 
			// Rechercher_Prenom
			// 
			this->Rechercher_Prenom->Location = System::Drawing::Point(340, 51);
			this->Rechercher_Prenom->Name = L"Rechercher_Prenom";
			this->Rechercher_Prenom->Size = System::Drawing::Size(100, 31);
			this->Rechercher_Prenom->TabIndex = 2;
			// 
			// Rechercher_Nom
			// 
			this->Rechercher_Nom->Location = System::Drawing::Point(178, 51);
			this->Rechercher_Nom->Name = L"Rechercher_Nom";
			this->Rechercher_Nom->Size = System::Drawing::Size(100, 31);
			this->Rechercher_Nom->TabIndex = 1;
			// 
			// Rechercher_Button
			// 
			this->Rechercher_Button->Location = System::Drawing::Point(1049, 88);
			this->Rechercher_Button->Name = L"Rechercher_Button";
			this->Rechercher_Button->Size = System::Drawing::Size(134, 42);
			this->Rechercher_Button->TabIndex = 0;
			this->Rechercher_Button->Text = L"Afficher";
			this->Rechercher_Button->UseVisualStyleBackColor = true;
			this->Rechercher_Button->Click += gcnew System::EventHandler(this, &A_Rh::Rechercher_Button_Click);
			// 
			// Enregister
			// 
			this->Enregister->Controls->Add(this->label31);
			this->Enregister->Controls->Add(this->Enregistrer_Mdp1);
			this->Enregister->Controls->Add(this->label30);
			this->Enregister->Controls->Add(this->Enregistrer_TypeOf);
			this->Enregister->Controls->Add(this->label17);
			this->Enregister->Controls->Add(this->Enregistrer_Ville);
			this->Enregister->Controls->Add(this->Enregistrer_Zip);
			this->Enregister->Controls->Add(this->Enregistrer_NomRue);
			this->Enregister->Controls->Add(this->Enregistrer_NumRue);
			this->Enregister->Controls->Add(this->label8);
			this->Enregister->Controls->Add(this->label6);
			this->Enregister->Controls->Add(this->label5);
			this->Enregister->Controls->Add(this->label4);
			this->Enregister->Controls->Add(this->label3);
			this->Enregister->Controls->Add(this->label2);
			this->Enregister->Controls->Add(this->label1);
			this->Enregister->Controls->Add(this->Enregistrer_Hiring);
			this->Enregister->Controls->Add(this->Enregistrer_Mail);
			this->Enregister->Controls->Add(this->Enregistrer_Prenom);
			this->Enregister->Controls->Add(this->Enregistrer_Nom);
			this->Enregister->Controls->Add(this->Enregister_Button);
			this->Enregister->Location = System::Drawing::Point(8, 39);
			this->Enregister->Name = L"Enregister";
			this->Enregister->Padding = System::Windows::Forms::Padding(3);
			this->Enregister->Size = System::Drawing::Size(1189, 483);
			this->Enregister->TabIndex = 0;
			this->Enregister->Text = L"Enregister";
			this->Enregister->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(366, 319);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(147, 25);
			this->label31->TabIndex = 52;
			this->label31->Text = L"Mot De Passe";
			// 
			// Enregistrer_Mdp1
			// 
			this->Enregistrer_Mdp1->Location = System::Drawing::Point(336, 361);
			this->Enregistrer_Mdp1->Name = L"Enregistrer_Mdp1";
			this->Enregistrer_Mdp1->Size = System::Drawing::Size(200, 31);
			this->Enregistrer_Mdp1->TabIndex = 50;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(283, 190);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(143, 25);
			this->label30->TabIndex = 49;
			this->label30->Text = L"Poste occupé";
			// 
			// Enregistrer_TypeOf
			// 
			this->Enregistrer_TypeOf->Location = System::Drawing::Point(259, 232);
			this->Enregistrer_TypeOf->Name = L"Enregistrer_TypeOf";
			this->Enregistrer_TypeOf->Size = System::Drawing::Size(200, 31);
			this->Enregistrer_TypeOf->TabIndex = 48;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(716, 202);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 25);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Ville";
			// 
			// Enregistrer_Ville
			// 
			this->Enregistrer_Ville->Location = System::Drawing::Point(669, 230);
			this->Enregistrer_Ville->Name = L"Enregistrer_Ville";
			this->Enregistrer_Ville->Size = System::Drawing::Size(150, 31);
			this->Enregistrer_Ville->TabIndex = 16;
			// 
			// Enregistrer_Zip
			// 
			this->Enregistrer_Zip->Location = System::Drawing::Point(889, 230);
			this->Enregistrer_Zip->Name = L"Enregistrer_Zip";
			this->Enregistrer_Zip->Size = System::Drawing::Size(100, 31);
			this->Enregistrer_Zip->TabIndex = 15;
			// 
			// Enregistrer_NomRue
			// 
			this->Enregistrer_NomRue->Location = System::Drawing::Point(854, 70);
			this->Enregistrer_NomRue->Name = L"Enregistrer_NomRue";
			this->Enregistrer_NomRue->Size = System::Drawing::Size(200, 31);
			this->Enregistrer_NomRue->TabIndex = 14;
			// 
			// Enregistrer_NumRue
			// 
			this->Enregistrer_NumRue->Location = System::Drawing::Point(669, 70);
			this->Enregistrer_NumRue->Name = L"Enregistrer_NumRue";
			this->Enregistrer_NumRue->Size = System::Drawing::Size(100, 31);
			this->Enregistrer_NumRue->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(120, 319);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Mail";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(874, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Code postal";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(884, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nom de la rue";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(673, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Numero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Date d\'embauche";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(263, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nom";
			// 
			// Enregistrer_Hiring
			// 
			this->Enregistrer_Hiring->Location = System::Drawing::Point(48, 232);
			this->Enregistrer_Hiring->Name = L"Enregistrer_Hiring";
			this->Enregistrer_Hiring->Size = System::Drawing::Size(150, 31);
			this->Enregistrer_Hiring->TabIndex = 4;
			// 
			// Enregistrer_Mail
			// 
			this->Enregistrer_Mail->Location = System::Drawing::Point(45, 361);
			this->Enregistrer_Mail->Name = L"Enregistrer_Mail";
			this->Enregistrer_Mail->Size = System::Drawing::Size(200, 31);
			this->Enregistrer_Mail->TabIndex = 3;
			// 
			// Enregistrer_Prenom
			// 
			this->Enregistrer_Prenom->Location = System::Drawing::Point(259, 72);
			this->Enregistrer_Prenom->Name = L"Enregistrer_Prenom";
			this->Enregistrer_Prenom->Size = System::Drawing::Size(100, 31);
			this->Enregistrer_Prenom->TabIndex = 2;
			// 
			// Enregistrer_Nom
			// 
			this->Enregistrer_Nom->Location = System::Drawing::Point(48, 72);
			this->Enregistrer_Nom->Name = L"Enregistrer_Nom";
			this->Enregistrer_Nom->Size = System::Drawing::Size(100, 31);
			this->Enregistrer_Nom->TabIndex = 1;
			// 
			// Enregister_Button
			// 
			this->Enregister_Button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Enregister_Button->Location = System::Drawing::Point(909, 386);
			this->Enregister_Button->Name = L"Enregister_Button";
			this->Enregister_Button->Size = System::Drawing::Size(134, 42);
			this->Enregister_Button->TabIndex = 0;
			this->Enregister_Button->Text = L"Enregister";
			this->Enregister_Button->UseVisualStyleBackColor = true;
			this->Enregister_Button->Click += gcnew System::EventHandler(this, &A_Rh::Enregister_Button_Click);
			// 
			// Modifier
			// 
			this->Modifier->Controls->Add(this->Modifier_Mdp1);
			this->Modifier->Controls->Add(this->label27);
			this->Modifier->Controls->Add(this->Modifier_Button);
			this->Modifier->Controls->Add(this->dataGridView2);
			this->Modifier->Controls->Add(this->Modifier_Id);
			this->Modifier->Controls->Add(this->label21);
			this->Modifier->Controls->Add(this->label7);
			this->Modifier->Controls->Add(this->Modifier_Ville);
			this->Modifier->Controls->Add(this->Modifier_Zip);
			this->Modifier->Controls->Add(this->Modifier_NomRue);
			this->Modifier->Controls->Add(this->Modifier_NumRue);
			this->Modifier->Controls->Add(this->label10);
			this->Modifier->Controls->Add(this->label14);
			this->Modifier->Controls->Add(this->label15);
			this->Modifier->Controls->Add(this->label16);
			this->Modifier->Controls->Add(this->label18);
			this->Modifier->Controls->Add(this->label19);
			this->Modifier->Controls->Add(this->label20);
			this->Modifier->Controls->Add(this->Modifier_Hiring);
			this->Modifier->Controls->Add(this->Modifier_Mail);
			this->Modifier->Controls->Add(this->Modifier_Prenom);
			this->Modifier->Controls->Add(this->Modifier_Nom);
			this->Modifier->Location = System::Drawing::Point(8, 39);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Padding = System::Windows::Forms::Padding(3);
			this->Modifier->Size = System::Drawing::Size(1189, 483);
			this->Modifier->TabIndex = 1;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			// 
			// Modifier_Mdp1
			// 
			this->Modifier_Mdp1->Location = System::Drawing::Point(500, 64);
			this->Modifier_Mdp1->Name = L"Modifier_Mdp1";
			this->Modifier_Mdp1->Size = System::Drawing::Size(200, 31);
			this->Modifier_Mdp1->TabIndex = 39;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(528, 31);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(147, 25);
			this->label27->TabIndex = 38;
			this->label27->Text = L"Mot De Passe";
			// 
			// Modifier_Button
			// 
			this->Modifier_Button->BackColor = System::Drawing::Color::White;
			this->Modifier_Button->Location = System::Drawing::Point(1047, 127);
			this->Modifier_Button->Name = L"Modifier_Button";
			this->Modifier_Button->Size = System::Drawing::Size(121, 67);
			this->Modifier_Button->TabIndex = 37;
			this->Modifier_Button->Text = L"Mettre à jour";
			this->Modifier_Button->UseVisualStyleBackColor = false;
			this->Modifier_Button->Click += gcnew System::EventHandler(this, &A_Rh::Modifier_Button_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(24, 262);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->Size = System::Drawing::Size(1144, 201);
			this->dataGridView2->TabIndex = 36;
			// 
			// Modifier_Id
			// 
			this->Modifier_Id->Location = System::Drawing::Point(31, 64);
			this->Modifier_Id->Name = L"Modifier_Id";
			this->Modifier_Id->Size = System::Drawing::Size(100, 31);
			this->Modifier_Id->TabIndex = 35;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(64, 31);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(32, 25);
			this->label21->TabIndex = 34;
			this->label21->Text = L"ID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(929, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 25);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Ville";
			// 
			// Modifier_Ville
			// 
			this->Modifier_Ville->Location = System::Drawing::Point(879, 187);
			this->Modifier_Ville->Name = L"Modifier_Ville";
			this->Modifier_Ville->Size = System::Drawing::Size(150, 31);
			this->Modifier_Ville->TabIndex = 32;
			// 
			// Modifier_Zip
			// 
			this->Modifier_Zip->Location = System::Drawing::Point(750, 187);
			this->Modifier_Zip->Name = L"Modifier_Zip";
			this->Modifier_Zip->Size = System::Drawing::Size(100, 31);
			this->Modifier_Zip->TabIndex = 31;
			// 
			// Modifier_NomRue
			// 
			this->Modifier_NomRue->Location = System::Drawing::Point(968, 49);
			this->Modifier_NomRue->Name = L"Modifier_NomRue";
			this->Modifier_NomRue->Size = System::Drawing::Size(200, 31);
			this->Modifier_NomRue->TabIndex = 30;
			// 
			// Modifier_NumRue
			// 
			this->Modifier_NumRue->Location = System::Drawing::Point(802, 49);
			this->Modifier_NumRue->Name = L"Modifier_NumRue";
			this->Modifier_NumRue->Size = System::Drawing::Size(100, 31);
			this->Modifier_NumRue->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(322, 148);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 25);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Mail";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(734, 148);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(127, 25);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Code postal";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(994, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(146, 25);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Nom de la rue";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(815, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 25);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Numero";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(26, 148);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(179, 25);
			this->label18->TabIndex = 24;
			this->label18->Text = L"Date d\'embauche";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(347, 31);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(86, 25);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Prénom";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(210, 31);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(56, 25);
			this->label20->TabIndex = 22;
			this->label20->Text = L"Nom";
			// 
			// Modifier_Hiring
			// 
			this->Modifier_Hiring->Location = System::Drawing::Point(31, 190);
			this->Modifier_Hiring->Name = L"Modifier_Hiring";
			this->Modifier_Hiring->Size = System::Drawing::Size(150, 31);
			this->Modifier_Hiring->TabIndex = 21;
			// 
			// Modifier_Mail
			// 
			this->Modifier_Mail->Location = System::Drawing::Point(242, 187);
			this->Modifier_Mail->Name = L"Modifier_Mail";
			this->Modifier_Mail->Size = System::Drawing::Size(200, 31);
			this->Modifier_Mail->TabIndex = 20;
			// 
			// Modifier_Prenom
			// 
			this->Modifier_Prenom->Location = System::Drawing::Point(342, 64);
			this->Modifier_Prenom->Name = L"Modifier_Prenom";
			this->Modifier_Prenom->Size = System::Drawing::Size(100, 31);
			this->Modifier_Prenom->TabIndex = 19;
			// 
			// Modifier_Nom
			// 
			this->Modifier_Nom->Location = System::Drawing::Point(189, 62);
			this->Modifier_Nom->Name = L"Modifier_Nom";
			this->Modifier_Nom->Size = System::Drawing::Size(100, 31);
			this->Modifier_Nom->TabIndex = 18;
			// 
			// Supprimer
			// 
			this->Supprimer->Controls->Add(this->dataGridView3);
			this->Supprimer->Controls->Add(this->button4);
			this->Supprimer->Controls->Add(this->textBox22);
			this->Supprimer->Controls->Add(this->label22);
			this->Supprimer->Controls->Add(this->label23);
			this->Supprimer->Controls->Add(this->label24);
			this->Supprimer->Controls->Add(this->label25);
			this->Supprimer->Controls->Add(this->textBox23);
			this->Supprimer->Controls->Add(this->textBox24);
			this->Supprimer->Controls->Add(this->textBox25);
			this->Supprimer->Location = System::Drawing::Point(8, 39);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(1189, 483);
			this->Supprimer->TabIndex = 4;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(18, 135);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->RowTemplate->Height = 33;
			this->dataGridView3->Size = System::Drawing::Size(1150, 222);
			this->dataGridView3->TabIndex = 45;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(1002, 407);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 52);
			this->button4->TabIndex = 44;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &A_Rh::button4_Click);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(840, 418);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 31);
			this->textBox22->TabIndex = 43;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(873, 390);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(32, 25);
			this->label22->TabIndex = 42;
			this->label22->Text = L"ID";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(572, 29);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(52, 25);
			this->label23->TabIndex = 41;
			this->label23->Text = L"Mail";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(266, 29);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(86, 25);
			this->label24->TabIndex = 40;
			this->label24->Text = L"Prénom";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(63, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 25);
			this->label25->TabIndex = 39;
			this->label25->Text = L"Nom";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(500, 62);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(200, 31);
			this->textBox23->TabIndex = 38;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(261, 62);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 31);
			this->textBox24->TabIndex = 37;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(44, 62);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 31);
			this->textBox25->TabIndex = 36;
			// 
			// A_Rh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1229, 554);
			this->Controls->Add(this->tabControl1);
			this->Name = L"A_Rh";
			this->Text = L"A_Rh";
			this->Load += gcnew System::EventHandler(this, &A_Rh::A_Rh_Load);
			this->tabControl1->ResumeLayout(false);
			this->Search->ResumeLayout(false);
			this->Search->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Enregister->ResumeLayout(false);
			this->Enregister->PerformLayout();
			this->Modifier->ResumeLayout(false);
			this->Modifier->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->Supprimer->ResumeLayout(false);
			this->Supprimer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		};


	private: S_Staff^ ServiceRh;
	private: S_Adresse^ ServiceAdresse;
	private: DataSet^ Ds;


	private: System::Void A_Rh_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ServiceRh = gcnew S_Staff();
		this->ServiceAdresse = gcnew S_Adresse();
	}
private: System::Void Rechercher_Button_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Enregister_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ServiceRh->ajouter(this->Enregistrer_Nom->Text, this->Enregistrer_Prenom->Text, this->Enregistrer_Hiring->Text, this->Enregistrer_Mail->Text, this->Enregistrer_Mdp1->Text, this->Enregistrer_TypeOf->Text);
	String^ TypeOf = "sta";
	//this->ServiceAdresse->ajouterAdresse(this->Enregistrer_NumRue->Text, this->Enregistrer_NomRue->Text, this->Enregistrer_Ville->Text, this->Enregistrer_Zip->Text, TypeOf, 1, 1);
}
private: System::Void Modifier_Button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};
