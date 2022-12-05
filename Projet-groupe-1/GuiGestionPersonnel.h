#pragma once
#include <string>
#include "StaffService.h"
#include "LinkDB.h"
#include "GuiGestionPersonnelUpdate.h"
#include "GuiGestionPersonnelCreate.h"

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class GuiGestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		GuiGestionPersonnel(void)
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
		~GuiGestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: NS_Comp_Svc::StaffService^ oSvcc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TextBox^ nomfiltre;
	private: System::Windows::Forms::DataGridView^ GrillePersonnal;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonsupprimer;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ buttoncreer;
	private: System::Windows::Forms::Button^ buttonmodifier;


	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiGestionPersonnel::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nomfiltre = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonmodifier = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttoncreer = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->buttonsupprimer = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->GrillePersonnal = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox12->Location = System::Drawing::Point(-29, -44);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(174, 140);
			this->pictureBox12->TabIndex = 27;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(-7, -12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1066, 108);
			this->pictureBox2->TabIndex = 32;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(151, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 49);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Gestion du personnel";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(3, 102);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(957, 68);
			this->tabControl1->TabIndex = 34;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->nomfiltre);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(949, 35);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Afficher";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(1, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 26);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Nom:";
			// 
			// nomfiltre
			// 
			this->nomfiltre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->nomfiltre->Location = System::Drawing::Point(50, 6);
			this->nomfiltre->Name = L"nomfiltre";
			this->nomfiltre->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nomfiltre->Size = System::Drawing::Size(257, 26);
			this->nomfiltre->TabIndex = 36;
			this->nomfiltre->TextChanged += gcnew System::EventHandler(this, &GuiGestionPersonnel::nomfiltre_TextChanged);
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
			this->buttonmodifier->Click += gcnew System::EventHandler(this, &GuiGestionPersonnel::buttonmodifier_Click);
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
			this->buttoncreer->Click += gcnew System::EventHandler(this, &GuiGestionPersonnel::buttoncreer_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->buttonsupprimer);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(949, 35);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Supprimer";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// buttonsupprimer
			// 
			this->buttonsupprimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonsupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonsupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonsupprimer->ForeColor = System::Drawing::Color::OrangeRed;
			this->buttonsupprimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonsupprimer.Image")));
			this->buttonsupprimer->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->buttonsupprimer->Location = System::Drawing::Point(298, 0);
			this->buttonsupprimer->Name = L"buttonsupprimer";
			this->buttonsupprimer->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->buttonsupprimer->Size = System::Drawing::Size(118, 39);
			this->buttonsupprimer->TabIndex = 36;
			this->buttonsupprimer->Text = L"Supprimer";
			this->buttonsupprimer->UseVisualStyleBackColor = true;
			this->buttonsupprimer->Click += gcnew System::EventHandler(this, &GuiGestionPersonnel::buttonsupprimer_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(35, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(257, 26);
			this->textBox1->TabIndex = 37;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(0, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 26);
			this->label3->TabIndex = 37;
			this->label3->Text = L"ID:";
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
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->GrillePersonnal->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->GrillePersonnal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->GrillePersonnal->DefaultCellStyle = dataGridViewCellStyle2;
			this->GrillePersonnal->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->GrillePersonnal->GridColor = System::Drawing::SystemColors::ButtonFace;
			this->GrillePersonnal->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->GrillePersonnal->Location = System::Drawing::Point(7, 172);
			this->GrillePersonnal->Name = L"GrillePersonnal";
			this->GrillePersonnal->ReadOnly = true;
			this->GrillePersonnal->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->GrillePersonnal->RowHeadersVisible = false;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->GrillePersonnal->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->GrillePersonnal->Size = System::Drawing::Size(1028, 457);
			this->GrillePersonnal->TabIndex = 35;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(958, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 72);
			this->button2->TabIndex = 37;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GuiGestionPersonnel::refresh_Click);
			// 
			// GuiGestionPersonnel
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1042, 641);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->GrillePersonnal);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GuiGestionPersonnel";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion du personnel";
			this->Load += gcnew System::EventHandler(this, &GuiGestionPersonnel::GuiGestionPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		public : void refreshData(System::Data::DataSet^ dataSet) { //FONCTION REFRESH AVEC DATASET
			this->GrillePersonnal->Refresh();
			this->oDs = dataSet;
			this->GrillePersonnal->DataSource = this->oDs;
			this->GrillePersonnal->DataMember = "rsl";
		}


#pragma endregion
	private: System::Void GuiGestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) { // Ce qui s'effectue lors du lancement de la formm
		this->oSvcc = gcnew NS_Comp_Svc::StaffService();
		refreshData(this->oSvcc->selectStaff("rsl"));
		GrillePersonnal->Columns["Id_staff"]->HeaderText = "Numéro du staff";
		GrillePersonnal->Columns["staff_name"]->HeaderText = "Nom du personnel";
		GrillePersonnal->Columns["staff_first_name"]->HeaderText = "Prénom du personnel";
		GrillePersonnal->Columns["hire_date"]->HeaderText = "Date d'embauche";
		GrillePersonnal->Columns["line_manager"]->HeaderText = "Numéro du résponsable";
		GrillePersonnal->Columns["n_street"]->HeaderText = "Numéro de rue";
		GrillePersonnal->Columns["street_name"]->HeaderText = "Nom de rue";
		GrillePersonnal->Columns["zip_code"]->HeaderText = "Code postale";
		GrillePersonnal->Columns["city_name"]->HeaderText = "Nom de ville";
	}
	private: System::Void nomfiltre_TextChanged(System::Object^ sender, System::EventArgs^ e) { //Action lors d'ajout d'un caractere dans la textBox permettant de filtrer la database
		refreshData(this->oSvcc->FiltrerService("rsl", "SELECT id_staff, staff_name, staff_first_name, hire_date, line_manager, n_street, street_name, zip_code, city_name FROM staff RIGHT JOIN Adress ON staff.FK_staff_adress = Adress.id_adress  where id_staff is not null AND staff_name LIKE '%" + nomfiltre->Text + "%' ;"));
	}

	private: System::Void buttonsupprimer_Click(System::Object^ sender, System::EventArgs^ e) { //BUTTON SUPPRIMER
		if (textBox1->Text->Length == 0) {
			MessageBox::Show("Veuillez rentrez un ID", "Erreur ID NULL", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}else{
		MessageBox::Show("Suppression réussi", "Félicitations", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->oSvcc->Envoyer("alter table Staff nocheck constraint all");
		this->oSvcc->Envoyer("DELETE from Adress where id_adress = (select FK_staff_adress from Staff where id_staff = '" + int::Parse(textBox1->Text) + "')");
		this->oSvcc->Envoyer("alter table Staff check constraint all");
		this->oSvcc->Envoyer("DELETE from Staff where id_staff = '" + int::Parse(textBox1->Text) + "'");
		refreshData(this->oSvcc->selectStaff("rsl"));
		}
	}

private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) { // BOUTTON REFRESH (form)
	refreshData(this->oSvcc->selectStaff("rsl"));
	//this->label4->Text = "test de ta mère la pute";
	MessageBox::Show("Base de données rafraîchi avec succès !", "OK", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void buttoncreer_Click(System::Object^ sender, System::EventArgs^ e) { // BOUTTON CREER (form)
	GuiGestionPersonnelCreate^ GuiCreate = gcnew GuiGestionPersonnelCreate();
	GuiCreate->ShowDialog();
}

private: System::Void buttonmodifier_Click(System::Object^ sender, System::EventArgs^ e) { // BOUTTON MODIFIER (form)
	GuiGestionPersonnelUpdate^ GuiModifier = gcnew GuiGestionPersonnelUpdate();
	GuiModifier->ShowDialog();
}
};
}
