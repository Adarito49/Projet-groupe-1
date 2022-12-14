#include "ProductService.h"
#include "GuiGestionStocksUpdate.h"
#include "GuiGestionStocksCreate.h"
#pragma once

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r?sum?e de MyForm
	/// </summary>
	public ref class GuiGestionStocks : public System::Windows::Forms::Form
	{
	public:
		GuiGestionStocks(void)
		{
			InitializeComponent();
			this->oSvcc = gcnew NS_Comp_Svc::ProductService();
			this->GrillePersonnal->Refresh();
			this->oDs = this->oSvcc->selectProduct("rsl");
			this->GrillePersonnal->DataSource = this->oDs;
			this->GrillePersonnal->DataMember = "rsl";
			//
			//TODO: ajoutez ici le code du constructeur
			//
			GrillePersonnal->Columns["id_product"]->HeaderText = "Num?ro du produit";
			GrillePersonnal->Columns["product_name"]->HeaderText = "Nom du produit";
			GrillePersonnal->Columns["product_type"]->HeaderText = "Unit? du produit";
			GrillePersonnal->Columns["price"]->HeaderText = "Prix ?";
			GrillePersonnal->Columns["product_quantity"]->HeaderText = "Quantit? du produit";
			GrillePersonnal->Columns["resupply_threshold"]->HeaderText = "Seuil de r?approvisionement";
			GrillePersonnal->Columns["vat_cover"]->HeaderText = "T.V.A %";
			GrillePersonnal->Columns["buying_price"]->HeaderText = "Prix d'achat ?";
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis?es.
		/// </summary>
		~GuiGestionStocks()
		{
			if (components)
			{
				delete components;
			}
		}


	private: NS_Comp_Svc::ProductService^ oSvcc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nomfiltre;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ GrillePersonnal;
	protected:

	private:
		/// <summary>
		/// Variable n?cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m?thode avec l'?diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiGestionStocks::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nomfiltre = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->GrillePersonnal = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(140, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 49);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Gestion des stocks";
			this->label1->Click += gcnew System::EventHandler(this, &GuiGestionStocks::label1_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox12->Location = System::Drawing::Point(-40, -49);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(174, 140);
			this->pictureBox12->TabIndex = 35;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(-9, -8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1066, 108);
			this->pictureBox1->TabIndex = 36;
			this->pictureBox1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(2, 104);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(957, 68);
			this->tabControl1->TabIndex = 37;
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
			this->label2->Size = System::Drawing::Size(100, 26);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Nom du produit";
			// 
			// nomfiltre
			// 
			this->nomfiltre->ForeColor = System::Drawing::SystemColors::ControlText;
			this->nomfiltre->Location = System::Drawing::Point(107, 6);
			this->nomfiltre->Name = L"nomfiltre";
			this->nomfiltre->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nomfiltre->Size = System::Drawing::Size(257, 26);
			this->nomfiltre->TabIndex = 36;
			this->nomfiltre->TextChanged += gcnew System::EventHandler(this, &GuiGestionStocks::nomfiltre_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(949, 35);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modifier";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(-4, 3);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(949, 29);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GuiGestionStocks::button1_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(949, 35);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Cr?er";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button3->Location = System::Drawing::Point(0, 3);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button3->Size = System::Drawing::Size(946, 29);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Cr?er";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GuiGestionStocks::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(949, 35);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Supprimer";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::OrangeRed;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button6->Location = System::Drawing::Point(298, 0);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button6->Size = System::Drawing::Size(118, 39);
			this->button6->TabIndex = 36;
			this->button6->Text = L"Supprimer";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &GuiGestionStocks::button6_Click);
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
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(959, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 72);
			this->button2->TabIndex = 38;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GuiGestionStocks::button2_Click);
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
			this->GrillePersonnal->Location = System::Drawing::Point(6, 178);
			this->GrillePersonnal->Name = L"GrillePersonnal";
			this->GrillePersonnal->ReadOnly = true;
			this->GrillePersonnal->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->GrillePersonnal->RowHeadersVisible = false;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->GrillePersonnal->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->GrillePersonnal->Size = System::Drawing::Size(1028, 457);
			this->GrillePersonnal->TabIndex = 39;
			// 
			// GuiGestionStocks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(1042, 641);
			this->Controls->Add(this->GrillePersonnal);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GuiGestionStocks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestions des stocks";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void nomfiltre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->GrillePersonnal->Refresh();
		this->oDs = this->oSvcc->FiltrerService("rsl", "SELECT * from Product where id_product is not null AND product_name LIKE '%" + nomfiltre->Text + "%' ;");
		this->GrillePersonnal->DataSource = this->oDs;
		this->GrillePersonnal->DataMember = "rsl";
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length == 0) {
		MessageBox::Show("Veuillez rentrez un ID", "Erreur ID NULL", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		MessageBox::Show("Suppression r?ussi", "F?licitations", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->oSvcc->Envoyer("DELETE from Product where id_product = '" + int::Parse(textBox1->Text) + "'");
		this->GrillePersonnal->Refresh();
		this->oDs = this->oSvcc->FiltrerService("rsl", "SELECT * from product");
		this->GrillePersonnal->DataSource = this->oDs;
		this->GrillePersonnal->DataMember = "rsl";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->GrillePersonnal->Refresh();
	this->oDs = this->oSvcc->FiltrerService("rsl", "SELECT * from product");
	this->GrillePersonnal->DataSource = this->oDs;
	this->GrillePersonnal->DataMember = "rsl";
	MessageBox::Show("Base de donn?es rafra?chi avec succ?s !", "OK", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	GuiGestionStocksUpdate^ GuiUpdate = gcnew GuiGestionStocksUpdate();
	GuiUpdate->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	GuiGestionStocksCreate^ GuiUpdate = gcnew GuiGestionStocksCreate();
	GuiUpdate->ShowDialog();
}
};
}
