#pragma once
#include "CustomerService.h"
#include "LinkDB.h"
#include "GuiGestionClientsUpdate.h"
#include "GuiGestionClientsCreate.h"

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class GuiGestionClients : public System::Windows::Forms::Form
	{
	public:
		GuiGestionClients(void)
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
		~GuiGestionClients()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::PictureBox^ pictureBox12;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::DataGridView^ GrillePersonnal;

	private: NS_Comp_Svc::CustomerService^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ nomfiltre;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ buttonmodifier;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ buttoncreer;




	private: System::Windows::Forms::Button^ button2;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiGestionClients::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GrillePersonnal = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nomfiltre = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonmodifier = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttoncreer = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox12->Location = System::Drawing::Point(-29, -45);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(174, 140);
			this->pictureBox12->TabIndex = 28;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(-1, -10);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1066, 105);
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(151, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 49);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Gestion des clients";
			// 
			// GrillePersonnal
			// 
			this->GrillePersonnal->AllowUserToAddRows = false;
			this->GrillePersonnal->AllowUserToDeleteRows = false;
			this->GrillePersonnal->AllowUserToResizeColumns = false;
			this->GrillePersonnal->AllowUserToResizeRows = false;
			this->GrillePersonnal->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->GrillePersonnal->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->GrillePersonnal->BackgroundColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->GrillePersonnal->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->GrillePersonnal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GrillePersonnal->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->GrillePersonnal->GridColor = System::Drawing::SystemColors::ButtonFace;
			this->GrillePersonnal->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->GrillePersonnal->Location = System::Drawing::Point(7, 214);
			this->GrillePersonnal->Name = L"GrillePersonnal";
			this->GrillePersonnal->ReadOnly = true;
			this->GrillePersonnal->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->GrillePersonnal->RowHeadersVisible = false;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->GrillePersonnal->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->GrillePersonnal->Size = System::Drawing::Size(1028, 457);
			this->GrillePersonnal->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(422, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 36);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Adresse de livraison";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(769, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 36);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Adresse de facturation";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(350, 176);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(340, 53);
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox3->Location = System::Drawing::Point(692, 176);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(344, 43);
			this->pictureBox3->TabIndex = 40;
			this->pictureBox3->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(2, 103);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(957, 68);
			this->tabControl1->TabIndex = 41;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->nomfiltre);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(949, 35);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Afficher";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(1, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 26);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Nom:";
			// 
			// nomfiltre
			// 
			this->nomfiltre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->nomfiltre->Location = System::Drawing::Point(50, 6);
			this->nomfiltre->Name = L"nomfiltre";
			this->nomfiltre->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nomfiltre->Size = System::Drawing::Size(257, 26);
			this->nomfiltre->TabIndex = 36;
			this->nomfiltre->TextChanged += gcnew System::EventHandler(this, &GuiGestionClients::nomfiltre_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonmodifier);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(949, 35);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modifier";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttonmodifier
			// 
			this->buttonmodifier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonmodifier->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonmodifier->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonmodifier->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonmodifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonmodifier.Image")));
			this->buttonmodifier->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonmodifier->Location = System::Drawing::Point(0, 3);
			this->buttonmodifier->Name = L"buttonmodifier";
			this->buttonmodifier->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->buttonmodifier->Size = System::Drawing::Size(946, 29);
			this->buttonmodifier->TabIndex = 39;
			this->buttonmodifier->Text = L"Modifier";
			this->buttonmodifier->UseVisualStyleBackColor = true;
			this->buttonmodifier->Click += gcnew System::EventHandler(this, &GuiGestionClients::buttonmodifier_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->buttoncreer);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(949, 35);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Créer";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// buttoncreer
			// 
			this->buttoncreer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttoncreer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttoncreer->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttoncreer->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttoncreer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttoncreer.Image")));
			this->buttoncreer->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttoncreer->Location = System::Drawing::Point(0, 3);
			this->buttoncreer->Name = L"buttoncreer";
			this->buttoncreer->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->buttoncreer->Size = System::Drawing::Size(946, 29);
			this->buttoncreer->TabIndex = 38;
			this->buttoncreer->Text = L"Créer";
			this->buttoncreer->UseVisualStyleBackColor = true;
			this->buttoncreer->Click += gcnew System::EventHandler(this, &GuiGestionClients::buttoncreer_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(958, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 72);
			this->button2->TabIndex = 42;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GuiGestionClients::button2_Click);
			// 
			// GuiGestionClients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1042, 675);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GrillePersonnal);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GuiGestionClients";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"²";
			this->Load += gcnew System::EventHandler(this, &GuiGestionClients::GuiGestionClients_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: void refreshData(System::Data::DataSet^ dataSet) { //FONCTION REFRESH AVEC DATASET
			this->GrillePersonnal->Refresh();
			this->oDs = dataSet;
			this->GrillePersonnal->DataSource = this->oDs;
			this->GrillePersonnal->DataMember = "rsl";
		}

#pragma endregion
	private: System::Void GuiGestionClients_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CustomerService();
		refreshData(this->oSvc->selectCustomer("rsl"));

		GrillePersonnal->Columns["Id_customer"]->HeaderText = "Numéro du client";
		GrillePersonnal->Columns["customer_name"]->HeaderText = "Nom du client";
		GrillePersonnal->Columns["customer_first_name"]->HeaderText = "Prénom du client";
		GrillePersonnal->Columns["birth_date"]->HeaderText = "Date de naissance";

		GrillePersonnal->Columns["n_street"]->HeaderText = "Numéro de rue";
		GrillePersonnal->Columns["street_name"]->HeaderText = "Nom de rue";
		GrillePersonnal->Columns["zip_code"]->HeaderText = "Code Postale";
		GrillePersonnal->Columns["city_name"]->HeaderText = "Ville";

		GrillePersonnal->Columns["n_street1"]->HeaderText = "Numéro de rue";
		GrillePersonnal->Columns["street_name1"]->HeaderText = "Nom de rue";
		GrillePersonnal->Columns["zip_code1"]->HeaderText = "Code Postale";
		GrillePersonnal->Columns["city_name1"]->HeaderText = "Ville";

	}
	private: System::Void nomfiltre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		refreshData(this->oSvc->FiltrerService("rsl", "select id_customer, customer_name, customer_first_name, birth_date, t1.n_street, t1.street_name, t1.zip_code, t1.city_name, t2.n_street, t2.street_name, t2.zip_code, t2.city_name from Customer left join Adress as t1 on Customer.id_customer = t1.FK_adress_customer LEFT OUTER JOIN Adress as t2 ON Customer.id_customer = t2.FK_adress_customer_invoice where id_customer is not null AND customer_name LIKE '%" + nomfiltre->Text + "%' ;"));
	}
	private: System::Void buttonmodifier_Click(System::Object^ sender, System::EventArgs^ e) {
		GuiGestionClientsUpdate^ GuiModifier = gcnew GuiGestionClientsUpdate();
		GuiModifier->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData(this->oSvc->selectCustomer("rsl"));
		MessageBox::Show("Base de données rafraîchi avec succès !", "OK", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void buttoncreer_Click(System::Object^ sender, System::EventArgs^ e) {
		GuiGestionClientsCreate^ GuiModifier = gcnew GuiGestionClientsCreate();
		GuiModifier->ShowDialog();
	}
};
}
