#pragma once
#include"panier.h"

namespace PooProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de catalogue
	/// </summary>
	public ref class catalogue : public System::Windows::Forms::Form
	{
	public:
		catalogue(void)
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
		~catalogue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ Ref_TxtBoxe;
	private: System::Windows::Forms::TextBox^ Color_TxtBoxe;


	private: System::Windows::Forms::TextBox^ TupeOf_TxtBoxe;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ GoTo_Panier;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Ref_TxtBoxe = (gcnew System::Windows::Forms::TextBox());
			this->Color_TxtBoxe = (gcnew System::Windows::Forms::TextBox());
			this->TupeOf_TxtBoxe = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->GoTo_Panier = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(534, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(818, 470);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &catalogue::dataGridView1_CellContentClick);
			// 
			// Ref_TxtBoxe
			// 
			this->Ref_TxtBoxe->Location = System::Drawing::Point(97, 85);
			this->Ref_TxtBoxe->Name = L"Ref_TxtBoxe";
			this->Ref_TxtBoxe->Size = System::Drawing::Size(100, 31);
			this->Ref_TxtBoxe->TabIndex = 1;
			// 
			// Color_TxtBoxe
			// 
			this->Color_TxtBoxe->Location = System::Drawing::Point(97, 216);
			this->Color_TxtBoxe->Name = L"Color_TxtBoxe";
			this->Color_TxtBoxe->Size = System::Drawing::Size(100, 31);
			this->Color_TxtBoxe->TabIndex = 2;
			// 
			// TupeOf_TxtBoxe
			// 
			this->TupeOf_TxtBoxe->Location = System::Drawing::Point(97, 358);
			this->TupeOf_TxtBoxe->Name = L"TupeOf_TxtBoxe";
			this->TupeOf_TxtBoxe->Size = System::Drawing::Size(100, 31);
			this->TupeOf_TxtBoxe->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Référence";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Couleur";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(287, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 62);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Rechercher";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(92, 330);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Catégorie";
			this->label3->Click += gcnew System::EventHandler(this, &catalogue::label3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(287, 342);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 62);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Rechercher";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(287, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 62);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Rechercher";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(276, 533);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 44);
			this->button4->TabIndex = 11;
			this->button4->Text = L">";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(122, 533);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 44);
			this->button5->TabIndex = 12;
			this->button5->Text = L"<";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(195, 481);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(82, 46);
			this->button8->TabIndex = 15;
			this->button8->Text = L"∧";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(195, 583);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 46);
			this->button6->TabIndex = 16;
			this->button6->Text = L"∨";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// GoTo_Panier
			// 
			this->GoTo_Panier->Location = System::Drawing::Point(1134, 560);
			this->GoTo_Panier->Name = L"GoTo_Panier";
			this->GoTo_Panier->Size = System::Drawing::Size(199, 57);
			this->GoTo_Panier->TabIndex = 17;
			this->GoTo_Panier->Text = L"Ajouter au panier";
			this->GoTo_Panier->UseVisualStyleBackColor = true;
			this->GoTo_Panier->Click += gcnew System::EventHandler(this, &catalogue::GoToPanier_Click);
			// 
			// catalogue
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(1365, 649);
			this->Controls->Add(this->GoTo_Panier);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TupeOf_TxtBoxe);
			this->Controls->Add(this->Color_TxtBoxe);
			this->Controls->Add(this->Ref_TxtBoxe);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"catalogue";
			this->Text = L"catalogue";
			this->Load += gcnew System::EventHandler(this, &catalogue::catalogue_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void GoToPanier_Click(System::Object^ sender, System::EventArgs^ e) {

		panier^ Panier = gcnew panier();
		Panier->Show();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void catalogue_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
