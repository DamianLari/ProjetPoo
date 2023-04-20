#pragma once
#include "pch.h"
#include "C_Person.h"
#include "S_Person.h"
#include "S_Global.h"


namespace PooProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Composants;
	using namespace Services;

	/// <summary>
	/// Description résumée de A_Staff
	/// </summary>
	

	public ref class A_Staff : public System::Windows::Forms::Form
	{
	public:
		A_Staff(void)
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
		~A_Staff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ Enregister;
	private: System::Windows::Forms::TabPage^ Afficher;
	private: System::Windows::Forms::TabPage^ Modifier;
	private: System::Windows::Forms::TabPage^ Commander;
	private: System::Windows::Forms::TabPage^ Détail;
	private: System::Windows::Forms::TabPage^ Historique;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Add_Birth;

	private: System::Windows::Forms::TextBox^ Add_Prenom;


	private: System::Windows::Forms::TextBox^ Add_Nom;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Afficher_Birth;

	private: System::Windows::Forms::TextBox^ Afficher_Prenom;

	private: System::Windows::Forms::TextBox^ Afficher_Nom;

	private: System::Windows::Forms::TextBox^ Afficher_IdClient;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::DataGridView^ Afficher_GridView;

	private: System::Windows::Forms::Button^ Afficher_Button;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Modifier_Birth;

	private: System::Windows::Forms::TextBox^ Modifier_Prenom;

	private: System::Windows::Forms::TextBox^ Modifier_Nom;
	private: System::Windows::Forms::Button^ Modifier_Button;


	private: System::Windows::Forms::TextBox^ Modifier_IdClient;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TabPage^ Catalogue;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Catalogue_Couleur;

	private: System::Windows::Forms::TextBox^ Catalogue_Categorie;

	private: System::Windows::Forms::TextBox^ Catalogue_Nom;

	private: System::Windows::Forms::TextBox^ Catalogue_Reference;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ Catalogue_GridView;


	private: System::Windows::Forms::TextBox^ Commander_IdClient;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ Commander_VilleL;

	private: System::Windows::Forms::TextBox^ Commander_ZipCodeL;
	private: System::Windows::Forms::TextBox^ Commander_NomRueL;

	private: System::Windows::Forms::TextBox^ Commander_NumRueL;



	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Commander_VilleF;
private: System::Windows::Forms::TextBox^ Commander_ZipCodeF;


private: System::Windows::Forms::TextBox^ Commander_NomRueF;

private: System::Windows::Forms::TextBox^ Commander_NumRueF;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ Add_Button;
private: System::Windows::Forms::TextBox^ Commander_TVA;



	private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::DataGridView^ Detail_GridView;

	private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::TextBox^ Historique_Fin;

private: System::Windows::Forms::TextBox^ Historique_Debut;

private: System::Windows::Forms::TextBox^ Historique_IdCommande;

	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;

	private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::DataGridView^ Commander_GridView;
private: System::Windows::Forms::Button^ Detail_Button;



	private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ Detail_IdItem;

	private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ Detail_IdCommande;
private: System::Windows::Forms::NumericUpDown^ Detail_Quantite;
private: System::Windows::Forms::Button^ Commander_Button;
private: System::Windows::Forms::Button^ Catalogue_Button;
private: System::Windows::Forms::Button^ Historique_Button;


	private: S_Global^ ServiceStaff;
	private: DataSet^ Ds;
private: System::Windows::Forms::TabPage^ Stats;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Enregister = (gcnew System::Windows::Forms::TabPage());
			this->Add_Button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Add_Birth = (gcnew System::Windows::Forms::TextBox());
			this->Add_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Add_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Afficher = (gcnew System::Windows::Forms::TabPage());
			this->Afficher_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->Afficher_Button = (gcnew System::Windows::Forms::Button());
			this->Afficher_IdClient = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Afficher_Birth = (gcnew System::Windows::Forms::TextBox());
			this->Afficher_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Afficher_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Modifier = (gcnew System::Windows::Forms::TabPage());
			this->Modifier_IdClient = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Modifier_Birth = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Modifier_Button = (gcnew System::Windows::Forms::Button());
			this->Catalogue = (gcnew System::Windows::Forms::TabPage());
			this->Catalogue_Button = (gcnew System::Windows::Forms::Button());
			this->Catalogue_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->Catalogue_Couleur = (gcnew System::Windows::Forms::TextBox());
			this->Catalogue_Categorie = (gcnew System::Windows::Forms::TextBox());
			this->Catalogue_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Catalogue_Reference = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Commander = (gcnew System::Windows::Forms::TabPage());
			this->Commander_Button = (gcnew System::Windows::Forms::Button());
			this->Commander_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->Commander_TVA = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Commander_VilleL = (gcnew System::Windows::Forms::TextBox());
			this->Commander_ZipCodeL = (gcnew System::Windows::Forms::TextBox());
			this->Commander_NomRueL = (gcnew System::Windows::Forms::TextBox());
			this->Commander_NumRueL = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Commander_VilleF = (gcnew System::Windows::Forms::TextBox());
			this->Commander_ZipCodeF = (gcnew System::Windows::Forms::TextBox());
			this->Commander_NomRueF = (gcnew System::Windows::Forms::TextBox());
			this->Commander_NumRueF = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Commander_IdClient = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Détail = (gcnew System::Windows::Forms::TabPage());
			this->Detail_Quantite = (gcnew System::Windows::Forms::NumericUpDown());
			this->Detail_Button = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->Detail_IdItem = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->Detail_IdCommande = (gcnew System::Windows::Forms::TextBox());
			this->Detail_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->Historique = (gcnew System::Windows::Forms::TabPage());
			this->Historique_Button = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Historique_Fin = (gcnew System::Windows::Forms::TextBox());
			this->Historique_Debut = (gcnew System::Windows::Forms::TextBox());
			this->Historique_IdCommande = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->Stats = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->Enregister->SuspendLayout();
			this->Afficher->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Afficher_GridView))->BeginInit();
			this->Modifier->SuspendLayout();
			this->Catalogue->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Catalogue_GridView))->BeginInit();
			this->Commander->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commander_GridView))->BeginInit();
			this->Détail->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Detail_Quantite))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Detail_GridView))->BeginInit();
			this->Historique->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->Stats->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Enregister);
			this->tabControl1->Controls->Add(this->Afficher);
			this->tabControl1->Controls->Add(this->Modifier);
			this->tabControl1->Controls->Add(this->Catalogue);
			this->tabControl1->Controls->Add(this->Commander);
			this->tabControl1->Controls->Add(this->Détail);
			this->tabControl1->Controls->Add(this->Historique);
			this->tabControl1->Controls->Add(this->Stats);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1205, 530);
			this->tabControl1->TabIndex = 0;
			// 
			// Enregister
			// 
			this->Enregister->Controls->Add(this->Add_Button);
			this->Enregister->Controls->Add(this->label3);
			this->Enregister->Controls->Add(this->label2);
			this->Enregister->Controls->Add(this->label1);
			this->Enregister->Controls->Add(this->Add_Birth);
			this->Enregister->Controls->Add(this->Add_Prenom);
			this->Enregister->Controls->Add(this->Add_Nom);
			this->Enregister->Location = System::Drawing::Point(8, 39);
			this->Enregister->Name = L"Enregister";
			this->Enregister->Padding = System::Windows::Forms::Padding(3);
			this->Enregister->Size = System::Drawing::Size(1189, 483);
			this->Enregister->TabIndex = 0;
			this->Enregister->Text = L"Enregister";
			this->Enregister->UseVisualStyleBackColor = true;
			// 
			// Add_Button
			// 
			this->Add_Button->Location = System::Drawing::Point(390, 177);
			this->Add_Button->Name = L"Add_Button";
			this->Add_Button->Size = System::Drawing::Size(147, 63);
			this->Add_Button->TabIndex = 14;
			this->Add_Button->Text = L"Enregister";
			this->Add_Button->UseVisualStyleBackColor = true;
			this->Add_Button->Click += gcnew System::EventHandler(this, &A_Staff::Add_Button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(397, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Date de naissance";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(211, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nom";
			// 
			// Add_Birth
			// 
			this->Add_Birth->Location = System::Drawing::Point(402, 56);
			this->Add_Birth->Name = L"Add_Birth";
			this->Add_Birth->Size = System::Drawing::Size(150, 31);
			this->Add_Birth->TabIndex = 10;
			// 
			// Add_Prenom
			// 
			this->Add_Prenom->Location = System::Drawing::Point(216, 61);
			this->Add_Prenom->Name = L"Add_Prenom";
			this->Add_Prenom->Size = System::Drawing::Size(100, 31);
			this->Add_Prenom->TabIndex = 9;
			// 
			// Add_Nom
			// 
			this->Add_Nom->Location = System::Drawing::Point(51, 61);
			this->Add_Nom->Name = L"Add_Nom";
			this->Add_Nom->Size = System::Drawing::Size(100, 31);
			this->Add_Nom->TabIndex = 8;
			// 
			// Afficher
			// 
			this->Afficher->Controls->Add(this->Afficher_GridView);
			this->Afficher->Controls->Add(this->Afficher_Button);
			this->Afficher->Controls->Add(this->Afficher_IdClient);
			this->Afficher->Controls->Add(this->label26);
			this->Afficher->Controls->Add(this->label4);
			this->Afficher->Controls->Add(this->label5);
			this->Afficher->Controls->Add(this->label6);
			this->Afficher->Controls->Add(this->Afficher_Birth);
			this->Afficher->Controls->Add(this->Afficher_Prenom);
			this->Afficher->Controls->Add(this->Afficher_Nom);
			this->Afficher->Location = System::Drawing::Point(8, 39);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Padding = System::Windows::Forms::Padding(3);
			this->Afficher->Size = System::Drawing::Size(1189, 483);
			this->Afficher->TabIndex = 1;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = true;
			// 
			// Afficher_GridView
			// 
			this->Afficher_GridView->AllowUserToAddRows = false;
			this->Afficher_GridView->AllowUserToDeleteRows = false;
			this->Afficher_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Afficher_GridView->Location = System::Drawing::Point(17, 133);
			this->Afficher_GridView->Name = L"Afficher_GridView";
			this->Afficher_GridView->ReadOnly = true;
			this->Afficher_GridView->RowHeadersWidth = 82;
			this->Afficher_GridView->RowTemplate->Height = 33;
			this->Afficher_GridView->Size = System::Drawing::Size(1154, 336);
			this->Afficher_GridView->TabIndex = 49;
			// 
			// Afficher_Button
			// 
			this->Afficher_Button->Location = System::Drawing::Point(971, 46);
			this->Afficher_Button->Name = L"Afficher_Button";
			this->Afficher_Button->Size = System::Drawing::Size(137, 47);
			this->Afficher_Button->TabIndex = 48;
			this->Afficher_Button->Text = L"Afficher";
			this->Afficher_Button->UseVisualStyleBackColor = true;
			this->Afficher_Button->Click += gcnew System::EventHandler(this, &A_Staff::Afficher_Button_Click);
			// 
			// Afficher_IdClient
			// 
			this->Afficher_IdClient->Location = System::Drawing::Point(46, 67);
			this->Afficher_IdClient->Name = L"Afficher_IdClient";
			this->Afficher_IdClient->Size = System::Drawing::Size(100, 31);
			this->Afficher_IdClient->TabIndex = 47;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(41, 34);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(32, 25);
			this->label26->TabIndex = 46;
			this->label26->Text = L"ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(564, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 25);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Date de naissance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(378, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Prénom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(213, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Nom";
			// 
			// Afficher_Birth
			// 
			this->Afficher_Birth->Location = System::Drawing::Point(569, 62);
			this->Afficher_Birth->Name = L"Afficher_Birth";
			this->Afficher_Birth->Size = System::Drawing::Size(150, 31);
			this->Afficher_Birth->TabIndex = 16;
			// 
			// Afficher_Prenom
			// 
			this->Afficher_Prenom->Location = System::Drawing::Point(383, 67);
			this->Afficher_Prenom->Name = L"Afficher_Prenom";
			this->Afficher_Prenom->Size = System::Drawing::Size(100, 31);
			this->Afficher_Prenom->TabIndex = 15;
			// 
			// Afficher_Nom
			// 
			this->Afficher_Nom->Location = System::Drawing::Point(218, 67);
			this->Afficher_Nom->Name = L"Afficher_Nom";
			this->Afficher_Nom->Size = System::Drawing::Size(100, 31);
			this->Afficher_Nom->TabIndex = 14;
			// 
			// Modifier
			// 
			this->Modifier->Controls->Add(this->Modifier_IdClient);
			this->Modifier->Controls->Add(this->label10);
			this->Modifier->Controls->Add(this->label7);
			this->Modifier->Controls->Add(this->label8);
			this->Modifier->Controls->Add(this->label9);
			this->Modifier->Controls->Add(this->Modifier_Birth);
			this->Modifier->Controls->Add(this->Modifier_Prenom);
			this->Modifier->Controls->Add(this->Modifier_Nom);
			this->Modifier->Controls->Add(this->Modifier_Button);
			this->Modifier->Location = System::Drawing::Point(8, 39);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Padding = System::Windows::Forms::Padding(3);
			this->Modifier->Size = System::Drawing::Size(1189, 483);
			this->Modifier->TabIndex = 2;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			// 
			// Modifier_IdClient
			// 
			this->Modifier_IdClient->Location = System::Drawing::Point(85, 60);
			this->Modifier_IdClient->Name = L"Modifier_IdClient";
			this->Modifier_IdClient->Size = System::Drawing::Size(100, 31);
			this->Modifier_IdClient->TabIndex = 49;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(80, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 25);
			this->label10->TabIndex = 48;
			this->label10->Text = L"ID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(593, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 25);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Date de naissance";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(407, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 25);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Prénom";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(242, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 25);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Nom";
			// 
			// Modifier_Birth
			// 
			this->Modifier_Birth->Location = System::Drawing::Point(598, 55);
			this->Modifier_Birth->Name = L"Modifier_Birth";
			this->Modifier_Birth->Size = System::Drawing::Size(150, 31);
			this->Modifier_Birth->TabIndex = 41;
			// 
			// Modifier_Prenom
			// 
			this->Modifier_Prenom->Location = System::Drawing::Point(412, 60);
			this->Modifier_Prenom->Name = L"Modifier_Prenom";
			this->Modifier_Prenom->Size = System::Drawing::Size(100, 31);
			this->Modifier_Prenom->TabIndex = 40;
			// 
			// Modifier_Nom
			// 
			this->Modifier_Nom->Location = System::Drawing::Point(247, 60);
			this->Modifier_Nom->Name = L"Modifier_Nom";
			this->Modifier_Nom->Size = System::Drawing::Size(100, 31);
			this->Modifier_Nom->TabIndex = 39;
			// 
			// Modifier_Button
			// 
			this->Modifier_Button->BackColor = System::Drawing::Color::White;
			this->Modifier_Button->Location = System::Drawing::Point(908, 19);
			this->Modifier_Button->Name = L"Modifier_Button";
			this->Modifier_Button->Size = System::Drawing::Size(196, 67);
			this->Modifier_Button->TabIndex = 38;
			this->Modifier_Button->Text = L"Mettre à jour";
			this->Modifier_Button->UseVisualStyleBackColor = false;
			this->Modifier_Button->Click += gcnew System::EventHandler(this, &A_Staff::Modifier_Button_Click);
			// 
			// Catalogue
			// 
			this->Catalogue->Controls->Add(this->Catalogue_Button);
			this->Catalogue->Controls->Add(this->Catalogue_GridView);
			this->Catalogue->Controls->Add(this->Catalogue_Couleur);
			this->Catalogue->Controls->Add(this->Catalogue_Categorie);
			this->Catalogue->Controls->Add(this->Catalogue_Nom);
			this->Catalogue->Controls->Add(this->Catalogue_Reference);
			this->Catalogue->Controls->Add(this->label14);
			this->Catalogue->Controls->Add(this->label13);
			this->Catalogue->Controls->Add(this->label12);
			this->Catalogue->Controls->Add(this->label11);
			this->Catalogue->Location = System::Drawing::Point(8, 39);
			this->Catalogue->Name = L"Catalogue";
			this->Catalogue->Padding = System::Windows::Forms::Padding(3);
			this->Catalogue->Size = System::Drawing::Size(1189, 483);
			this->Catalogue->TabIndex = 6;
			this->Catalogue->Text = L"Catalogue";
			this->Catalogue->UseVisualStyleBackColor = true;
			// 
			// Catalogue_Button
			// 
			this->Catalogue_Button->Location = System::Drawing::Point(918, 32);
			this->Catalogue_Button->Name = L"Catalogue_Button";
			this->Catalogue_Button->Size = System::Drawing::Size(142, 59);
			this->Catalogue_Button->TabIndex = 10;
			this->Catalogue_Button->Text = L"Actualiser";
			this->Catalogue_Button->UseVisualStyleBackColor = true;
			this->Catalogue_Button->Click += gcnew System::EventHandler(this, &A_Staff::Catalogue_Button_Click);
			// 
			// Catalogue_GridView
			// 
			this->Catalogue_GridView->AllowUserToAddRows = false;
			this->Catalogue_GridView->AllowUserToDeleteRows = false;
			this->Catalogue_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Catalogue_GridView->Location = System::Drawing::Point(15, 146);
			this->Catalogue_GridView->Name = L"Catalogue_GridView";
			this->Catalogue_GridView->ReadOnly = true;
			this->Catalogue_GridView->RowHeadersWidth = 82;
			this->Catalogue_GridView->RowTemplate->Height = 33;
			this->Catalogue_GridView->Size = System::Drawing::Size(1156, 325);
			this->Catalogue_GridView->TabIndex = 9;
			// 
			// Catalogue_Couleur
			// 
			this->Catalogue_Couleur->Location = System::Drawing::Point(577, 96);
			this->Catalogue_Couleur->Name = L"Catalogue_Couleur";
			this->Catalogue_Couleur->Size = System::Drawing::Size(100, 31);
			this->Catalogue_Couleur->TabIndex = 8;
			// 
			// Catalogue_Categorie
			// 
			this->Catalogue_Categorie->Location = System::Drawing::Point(405, 96);
			this->Catalogue_Categorie->Name = L"Catalogue_Categorie";
			this->Catalogue_Categorie->Size = System::Drawing::Size(100, 31);
			this->Catalogue_Categorie->TabIndex = 7;
			// 
			// Catalogue_Nom
			// 
			this->Catalogue_Nom->Location = System::Drawing::Point(229, 96);
			this->Catalogue_Nom->Name = L"Catalogue_Nom";
			this->Catalogue_Nom->Size = System::Drawing::Size(100, 31);
			this->Catalogue_Nom->TabIndex = 6;
			// 
			// Catalogue_Reference
			// 
			this->Catalogue_Reference->Location = System::Drawing::Point(55, 96);
			this->Catalogue_Reference->Name = L"Catalogue_Reference";
			this->Catalogue_Reference->Size = System::Drawing::Size(100, 31);
			this->Catalogue_Reference->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(572, 49);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(87, 25);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Couleur";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(400, 49);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(105, 25);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Catégorie";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(224, 49);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 25);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Nom";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(50, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 25);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Référence";
			// 
			// Commander
			// 
			this->Commander->Controls->Add(this->Commander_Button);
			this->Commander->Controls->Add(this->Commander_GridView);
			this->Commander->Controls->Add(this->Commander_TVA);
			this->Commander->Controls->Add(this->label32);
			this->Commander->Controls->Add(this->label25);
			this->Commander->Controls->Add(this->label24);
			this->Commander->Controls->Add(this->label20);
			this->Commander->Controls->Add(this->Commander_VilleL);
			this->Commander->Controls->Add(this->Commander_ZipCodeL);
			this->Commander->Controls->Add(this->Commander_NomRueL);
			this->Commander->Controls->Add(this->Commander_NumRueL);
			this->Commander->Controls->Add(this->label21);
			this->Commander->Controls->Add(this->label22);
			this->Commander->Controls->Add(this->label23);
			this->Commander->Controls->Add(this->label16);
			this->Commander->Controls->Add(this->Commander_VilleF);
			this->Commander->Controls->Add(this->Commander_ZipCodeF);
			this->Commander->Controls->Add(this->Commander_NomRueF);
			this->Commander->Controls->Add(this->Commander_NumRueF);
			this->Commander->Controls->Add(this->label17);
			this->Commander->Controls->Add(this->label18);
			this->Commander->Controls->Add(this->label19);
			this->Commander->Controls->Add(this->Commander_IdClient);
			this->Commander->Controls->Add(this->label15);
			this->Commander->Location = System::Drawing::Point(8, 39);
			this->Commander->Name = L"Commander";
			this->Commander->Padding = System::Windows::Forms::Padding(3);
			this->Commander->Size = System::Drawing::Size(1189, 483);
			this->Commander->TabIndex = 3;
			this->Commander->Text = L"Commander";
			this->Commander->UseVisualStyleBackColor = true;
			// 
			// Commander_Button
			// 
			this->Commander_Button->Location = System::Drawing::Point(656, 31);
			this->Commander_Button->Name = L"Commander_Button";
			this->Commander_Button->Size = System::Drawing::Size(141, 67);
			this->Commander_Button->TabIndex = 73;
			this->Commander_Button->Text = L"Confirmer la commande";
			this->Commander_Button->UseVisualStyleBackColor = true;
			this->Commander_Button->Click += gcnew System::EventHandler(this, &A_Staff::Commander_Button_Click);
			// 
			// Commander_GridView
			// 
			this->Commander_GridView->AllowUserToAddRows = false;
			this->Commander_GridView->AllowUserToDeleteRows = false;
			this->Commander_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Commander_GridView->Location = System::Drawing::Point(816, 6);
			this->Commander_GridView->Name = L"Commander_GridView";
			this->Commander_GridView->ReadOnly = true;
			this->Commander_GridView->RowHeadersWidth = 82;
			this->Commander_GridView->RowTemplate->Height = 33;
			this->Commander_GridView->Size = System::Drawing::Size(367, 471);
			this->Commander_GridView->TabIndex = 72;
			// 
			// Commander_TVA
			// 
			this->Commander_TVA->Location = System::Drawing::Point(488, 31);
			this->Commander_TVA->Name = L"Commander_TVA";
			this->Commander_TVA->Size = System::Drawing::Size(100, 31);
			this->Commander_TVA->TabIndex = 71;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(417, 31);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(65, 25);
			this->label32->TabIndex = 70;
			this->label32->Text = L"TVA :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(501, 150);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(207, 25);
			this->label25->TabIndex = 69;
			this->label25->Text = L"Adresse de livraison";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(79, 150);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(228, 25);
			this->label24->TabIndex = 68;
			this->label24->Text = L"Adresse de facturation";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(445, 332);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(65, 25);
			this->label20->TabIndex = 67;
			this->label20->Text = L"Ville :";
			// 
			// Commander_VilleL
			// 
			this->Commander_VilleL->Location = System::Drawing::Point(610, 326);
			this->Commander_VilleL->Name = L"Commander_VilleL";
			this->Commander_VilleL->Size = System::Drawing::Size(150, 31);
			this->Commander_VilleL->TabIndex = 66;
			// 
			// Commander_ZipCodeL
			// 
			this->Commander_ZipCodeL->Location = System::Drawing::Point(610, 394);
			this->Commander_ZipCodeL->Name = L"Commander_ZipCodeL";
			this->Commander_ZipCodeL->Size = System::Drawing::Size(100, 31);
			this->Commander_ZipCodeL->TabIndex = 65;
			// 
			// Commander_NomRueL
			// 
			this->Commander_NomRueL->Location = System::Drawing::Point(610, 265);
			this->Commander_NomRueL->Name = L"Commander_NomRueL";
			this->Commander_NomRueL->Size = System::Drawing::Size(200, 31);
			this->Commander_NomRueL->TabIndex = 64;
			// 
			// Commander_NumRueL
			// 
			this->Commander_NumRueL->Location = System::Drawing::Point(610, 201);
			this->Commander_NumRueL->Name = L"Commander_NumRueL";
			this->Commander_NumRueL->Size = System::Drawing::Size(100, 31);
			this->Commander_NumRueL->TabIndex = 63;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(445, 394);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(139, 25);
			this->label21->TabIndex = 62;
			this->label21->Text = L"Code postal :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(445, 265);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(158, 25);
			this->label22->TabIndex = 61;
			this->label22->Text = L"Nom de la rue :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(445, 201);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(99, 25);
			this->label23->TabIndex = 60;
			this->label23->Text = L"Numero :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(31, 332);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 25);
			this->label16->TabIndex = 59;
			this->label16->Text = L"Ville :";
			// 
			// Commander_VilleF
			// 
			this->Commander_VilleF->Location = System::Drawing::Point(196, 326);
			this->Commander_VilleF->Name = L"Commander_VilleF";
			this->Commander_VilleF->Size = System::Drawing::Size(150, 31);
			this->Commander_VilleF->TabIndex = 58;
			// 
			// Commander_ZipCodeF
			// 
			this->Commander_ZipCodeF->Location = System::Drawing::Point(196, 394);
			this->Commander_ZipCodeF->Name = L"Commander_ZipCodeF";
			this->Commander_ZipCodeF->Size = System::Drawing::Size(100, 31);
			this->Commander_ZipCodeF->TabIndex = 57;
			// 
			// Commander_NomRueF
			// 
			this->Commander_NomRueF->Location = System::Drawing::Point(196, 265);
			this->Commander_NomRueF->Name = L"Commander_NomRueF";
			this->Commander_NomRueF->Size = System::Drawing::Size(200, 31);
			this->Commander_NomRueF->TabIndex = 56;
			// 
			// Commander_NumRueF
			// 
			this->Commander_NumRueF->Location = System::Drawing::Point(196, 201);
			this->Commander_NumRueF->Name = L"Commander_NumRueF";
			this->Commander_NumRueF->Size = System::Drawing::Size(100, 31);
			this->Commander_NumRueF->TabIndex = 55;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(31, 394);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(139, 25);
			this->label17->TabIndex = 54;
			this->label17->Text = L"Code postal :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(31, 265);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(158, 25);
			this->label18->TabIndex = 53;
			this->label18->Text = L"Nom de la rue :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(31, 201);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(99, 25);
			this->label19->TabIndex = 52;
			this->label19->Text = L"Numero :";
			// 
			// Commander_IdClient
			// 
			this->Commander_IdClient->Location = System::Drawing::Point(195, 31);
			this->Commander_IdClient->Name = L"Commander_IdClient";
			this->Commander_IdClient->Size = System::Drawing::Size(100, 31);
			this->Commander_IdClient->TabIndex = 51;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(30, 31);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(156, 25);
			this->label15->TabIndex = 50;
			this->label15->Text = L"Numéro client :";
			// 
			// Détail
			// 
			this->Détail->Controls->Add(this->Detail_Quantite);
			this->Détail->Controls->Add(this->Detail_Button);
			this->Détail->Controls->Add(this->label34);
			this->Détail->Controls->Add(this->Detail_IdItem);
			this->Détail->Controls->Add(this->label33);
			this->Détail->Controls->Add(this->Detail_IdCommande);
			this->Détail->Controls->Add(this->Detail_GridView);
			this->Détail->Controls->Add(this->label27);
			this->Détail->Location = System::Drawing::Point(8, 39);
			this->Détail->Name = L"Détail";
			this->Détail->Size = System::Drawing::Size(1189, 483);
			this->Détail->TabIndex = 4;
			this->Détail->Text = L"Détail";
			this->Détail->UseVisualStyleBackColor = true;
			// 
			// Detail_Quantite
			// 
			this->Detail_Quantite->Location = System::Drawing::Point(844, 49);
			this->Detail_Quantite->Name = L"Detail_Quantite";
			this->Detail_Quantite->Size = System::Drawing::Size(120, 31);
			this->Detail_Quantite->TabIndex = 8;
			// 
			// Detail_Button
			// 
			this->Detail_Button->Location = System::Drawing::Point(1037, 31);
			this->Detail_Button->Name = L"Detail_Button";
			this->Detail_Button->Size = System::Drawing::Size(137, 64);
			this->Detail_Button->TabIndex = 7;
			this->Detail_Button->Text = L"Ajouter au panier";
			this->Detail_Button->UseVisualStyleBackColor = true;
			this->Detail_Button->Click += gcnew System::EventHandler(this, &A_Staff::Detail_Button_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(801, 51);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(26, 25);
			this->label34->TabIndex = 5;
			this->label34->Text = L"X";
			// 
			// Detail_IdItem
			// 
			this->Detail_IdItem->Location = System::Drawing::Point(686, 48);
			this->Detail_IdItem->Name = L"Detail_IdItem";
			this->Detail_IdItem->Size = System::Drawing::Size(100, 31);
			this->Detail_IdItem->TabIndex = 4;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(460, 51);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(220, 25);
			this->label33->TabIndex = 3;
			this->label33->Text = L"Référence de l\'artcile:";
			// 
			// Detail_IdCommande
			// 
			this->Detail_IdCommande->Location = System::Drawing::Point(294, 48);
			this->Detail_IdCommande->Name = L"Detail_IdCommande";
			this->Detail_IdCommande->Size = System::Drawing::Size(100, 31);
			this->Detail_IdCommande->TabIndex = 2;
			// 
			// Detail_GridView
			// 
			this->Detail_GridView->AllowUserToAddRows = false;
			this->Detail_GridView->AllowUserToDeleteRows = false;
			this->Detail_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Detail_GridView->Location = System::Drawing::Point(18, 151);
			this->Detail_GridView->Name = L"Detail_GridView";
			this->Detail_GridView->ReadOnly = true;
			this->Detail_GridView->RowHeadersWidth = 82;
			this->Detail_GridView->RowTemplate->Height = 33;
			this->Detail_GridView->Size = System::Drawing::Size(1156, 314);
			this->Detail_GridView->TabIndex = 1;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(48, 51);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(240, 25);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Numéro de commande :";
			// 
			// Historique
			// 
			this->Historique->Controls->Add(this->Historique_Button);
			this->Historique->Controls->Add(this->dataGridView3);
			this->Historique->Controls->Add(this->Historique_Fin);
			this->Historique->Controls->Add(this->Historique_Debut);
			this->Historique->Controls->Add(this->Historique_IdCommande);
			this->Historique->Controls->Add(this->label31);
			this->Historique->Controls->Add(this->label30);
			this->Historique->Controls->Add(this->label28);
			this->Historique->Location = System::Drawing::Point(8, 39);
			this->Historique->Name = L"Historique";
			this->Historique->Size = System::Drawing::Size(1189, 483);
			this->Historique->TabIndex = 5;
			this->Historique->Text = L"Historique";
			this->Historique->UseVisualStyleBackColor = true;
			// 
			// Historique_Button
			// 
			this->Historique_Button->Location = System::Drawing::Point(943, 53);
			this->Historique_Button->Name = L"Historique_Button";
			this->Historique_Button->Size = System::Drawing::Size(172, 68);
			this->Historique_Button->TabIndex = 8;
			this->Historique_Button->Text = L"Rechercher";
			this->Historique_Button->UseVisualStyleBackColor = true;
			this->Historique_Button->Click += gcnew System::EventHandler(this, &A_Staff::Historique_Button_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(18, 170);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->RowTemplate->Height = 33;
			this->dataGridView3->Size = System::Drawing::Size(1153, 296);
			this->dataGridView3->TabIndex = 7;
			// 
			// Historique_Fin
			// 
			this->Historique_Fin->Location = System::Drawing::Point(664, 86);
			this->Historique_Fin->Name = L"Historique_Fin";
			this->Historique_Fin->Size = System::Drawing::Size(150, 31);
			this->Historique_Fin->TabIndex = 6;
			// 
			// Historique_Debut
			// 
			this->Historique_Debut->Location = System::Drawing::Point(380, 86);
			this->Historique_Debut->Name = L"Historique_Debut";
			this->Historique_Debut->Size = System::Drawing::Size(150, 31);
			this->Historique_Debut->TabIndex = 5;
			// 
			// Historique_IdCommande
			// 
			this->Historique_IdCommande->Location = System::Drawing::Point(98, 86);
			this->Historique_IdCommande->Name = L"Historique_IdCommande";
			this->Historique_IdCommande->Size = System::Drawing::Size(100, 31);
			this->Historique_IdCommande->TabIndex = 4;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(650, 43);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(173, 25);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Fin de la période";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(349, 43);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(200, 25);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Début de la période";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(40, 43);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(228, 25);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Numéro de commande";
			// 
			// Stats
			// 
			this->Stats->Controls->Add(this->dataGridView1);
			this->Stats->Controls->Add(this->textBox3);
			this->Stats->Controls->Add(this->textBox2);
			this->Stats->Controls->Add(this->textBox1);
			this->Stats->Controls->Add(this->button8);
			this->Stats->Controls->Add(this->button7);
			this->Stats->Controls->Add(this->button6);
			this->Stats->Controls->Add(this->button5);
			this->Stats->Controls->Add(this->button4);
			this->Stats->Controls->Add(this->button3);
			this->Stats->Controls->Add(this->button2);
			this->Stats->Controls->Add(this->button1);
			this->Stats->Location = System::Drawing::Point(8, 39);
			this->Stats->Name = L"Stats";
			this->Stats->Padding = System::Windows::Forms::Padding(3);
			this->Stats->Size = System::Drawing::Size(1189, 483);
			this->Stats->TabIndex = 7;
			this->Stats->Text = L"Stats";
			this->Stats->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(615, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(557, 446);
			this->dataGridView1->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(191, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 31);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"Id du client";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(191, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 31);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"Mois";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"Année";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &A_Staff::textBox1_TextChanged);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(22, 367);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(142, 100);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Panier moyen";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(372, 202);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(214, 111);
			this->button7->TabIndex = 6;
			this->button7->Text = L"10 articles les moins vendus";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(372, 350);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(214, 117);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Afficher les produits sous seuil de réaprovisionnement";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(191, 367);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 100);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Valeur d\'achat du stock";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(22, 21);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 98);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Valeur commerciale du stock";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(372, 42);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(214, 115);
			this->button3->TabIndex = 2;
			this->button3->Text = L"10 articles les plus vendus";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 251);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 90);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Total des achats d\'un client";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Chiffre d\'affaire mensuel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// A_Staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1229, 554);
			this->Controls->Add(this->tabControl1);
			this->Name = L"A_Staff";
			this->Text = L"A_Staff";
			this->Load += gcnew System::EventHandler(this, &A_Staff::A_Staff_Load);
			this->tabControl1->ResumeLayout(false);
			this->Enregister->ResumeLayout(false);
			this->Enregister->PerformLayout();
			this->Afficher->ResumeLayout(false);
			this->Afficher->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Afficher_GridView))->EndInit();
			this->Modifier->ResumeLayout(false);
			this->Modifier->PerformLayout();
			this->Catalogue->ResumeLayout(false);
			this->Catalogue->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Catalogue_GridView))->EndInit();
			this->Commander->ResumeLayout(false);
			this->Commander->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commander_GridView))->EndInit();
			this->Détail->ResumeLayout(false);
			this->Détail->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Detail_Quantite))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Detail_GridView))->EndInit();
			this->Historique->ResumeLayout(false);
			this->Historique->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->Stats->ResumeLayout(false);
			this->Stats->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		//…………………………………………Ajouter………………………………………


private: System::Void Add_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	
}


		//…………………………………………Afficher………………………………………


private: System::Void Afficher_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

	   //…………………………………………Modifier………………………………………


private: System::Void Modifier_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	
}	


	   //…………………………………………Catalogue………………………………………


private: System::Void Catalogue_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Catalogue_GridView->Refresh();
	this->Ds = this->ServiceStaff->afficher("Rsl");
	this->Catalogue_GridView->DataSource = this->Ds;
	this->Catalogue_GridView->DataMember = "Rsl";
	
}

	   //…………………………………………Commander………………………………………

private: System::Void A_Staff_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Commander_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	this->S_Command::ajouter(this->Commander_Tva->Text,this->Commander_ID->Text)
	this->S_Adresse::ajouter(this->Commander_NumRueF->Text,this->Commander_NomRueF->Text,this->Commander_VilleF->Text,this->Commander_ZipCodeF->Texte,
	//						   this->Commander_NomRueL->Text,this->Commander_NomRueL->Text,this->Commander_VilleL->Text,this->Commander_ZipCodeL->Texte)*/
}

private: System::Void Detail_Button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Historique_Button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
