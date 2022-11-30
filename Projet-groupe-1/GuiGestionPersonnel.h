#pragma once
#include <string>
#include "StaffService.h"
#include "LinkDB.h"

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
			this->oSvcc = gcnew NS_Comp_Svc::StaffService();
			this->GrillePersonnal->Refresh();
			this->oDs = this->oSvcc->selectStaff("rsl");
			this->GrillePersonnal->DataSource = this->oDs;
			this->GrillePersonnal->DataMember = "rsl";

			GrillePersonnal->Columns["Id_staff"]->HeaderText = "Numéro du staff";
			GrillePersonnal->Columns["staff_name"]->HeaderText = "Nom du personnel";
			GrillePersonnal->Columns["staff_first_name"]->HeaderText = "Prénom du personnel";
			GrillePersonnal->Columns["hire_date"]->HeaderText = "Date d'embauche";
			GrillePersonnal->Columns["line_manager"]->HeaderText = "Numéro du résponsable";
			GrillePersonnal->Columns["n_street"]->HeaderText = "Numéro de rue";
			GrillePersonnal->Columns["street_name"]->HeaderText = "Nom de rue";
			GrillePersonnal->Columns["zip_code"]->HeaderText = "Code postale";
			GrillePersonnal->Columns["city_name"]->HeaderText = "Nom de ville";
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




	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ nomfiltre;
	private: System::Windows::Forms::DataGridView^ GrillePersonnal;



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
			this->nomfiltre = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->GrillePersonnal = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
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
			this->tabControl1->Size = System::Drawing::Size(1036, 68);
			this->tabControl1->TabIndex = 34;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->nomfiltre);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1028, 35);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Afficher";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// nomfiltre
			// 
			this->nomfiltre->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->nomfiltre->Location = System::Drawing::Point(6, 4);
			this->nomfiltre->Name = L"nomfiltre";
			this->nomfiltre->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nomfiltre->Size = System::Drawing::Size(257, 26);
			this->nomfiltre->TabIndex = 36;
			this->nomfiltre->Text = L"Entrer le nom";
			this->nomfiltre->TextChanged += gcnew System::EventHandler(this, &GuiGestionPersonnel::textBox1_TextChanged);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button6->Location = System::Drawing::Point(269, 4);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button6->Size = System::Drawing::Size(116, 31);
			this->button6->TabIndex = 35;
			this->button6->Text = L"Chercher";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &GuiGestionPersonnel::button6_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1028, 35);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modifier";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1028, 35);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Créer";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1028, 35);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Supprimer";
			this->tabPage4->UseVisualStyleBackColor = true;
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
			// GuiGestionPersonnel
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1042, 641);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GuiGestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nomfiltrez = this->nomfiltre->Text;
		this->GrillePersonnal->Refresh();
		this->oDs = this->oSvcc->selectStaff("test");
		this->GrillePersonnal->DataSource = this->oDs;
		this->GrillePersonnal->DataMember = "test";
	}
};
}
