#pragma once
#include "StaffService.h"
#include <string>

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class GuiStatistiques : public System::Windows::Forms::Form
	{
	public:
		GuiStatistiques(void)
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
		~GuiStatistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: NS_Comp_Svc::StaffService^ oSvcc;
	private: System::Data::DataSet^ oDs;
	private: SqlConnection^ cn;
	private: SqlCommand^ cmd;
	private: SqlDataReader^ dr;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::DataGridView^ GrillePersonnal;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiStatistiques::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->GrillePersonnal = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(-203, -5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1255, 95);
			this->pictureBox2->TabIndex = 33;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox12->Location = System::Drawing::Point(-24, -50);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(174, 140);
			this->pictureBox12->TabIndex = 36;
			this->pictureBox12->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(156, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 49);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Statistiques";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(250, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 73);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Les moins vendus";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GuiStatistiques::moinsvendus_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->Location = System::Drawing::Point(12, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(232, 73);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Les plus vendus";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GuiStatistiques::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button3->Location = System::Drawing::Point(250, 592);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(232, 73);
			this->button3->TabIndex = 41;
			this->button3->Text = L"Chiffre d\'affaire";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GuiStatistiques::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button4->Location = System::Drawing::Point(12, 513);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(232, 73);
			this->button4->TabIndex = 42;
			this->button4->Text = L"Panier moyen";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GuiStatistiques::paniermoyen_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button5->Location = System::Drawing::Point(12, 401);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(232, 73);
			this->button5->TabIndex = 43;
			this->button5->Text = L"Produit(s) réapro";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &GuiStatistiques::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button6->Location = System::Drawing::Point(249, 126);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(232, 73);
			this->button6->TabIndex = 44;
			this->button6->Text = L"Total achat client";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &GuiStatistiques::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button7->Location = System::Drawing::Point(12, 322);
			this->button7->Name = L"button7";
			this->button7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button7->Size = System::Drawing::Size(232, 73);
			this->button7->TabIndex = 45;
			this->button7->Text = L"Valeurs commerciale \r\n(stock)";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &GuiStatistiques::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->Location = System::Drawing::Point(250, 322);
			this->button8->Name = L"button8";
			this->button8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button8->Size = System::Drawing::Size(232, 73);
			this->button8->TabIndex = 46;
			this->button8->Text = L"Valeurs achats \r\n(stock)";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &GuiStatistiques::button8_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button9->Location = System::Drawing::Point(250, 513);
			this->button9->Name = L"button9";
			this->button9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button9->Size = System::Drawing::Size(232, 73);
			this->button9->TabIndex = 47;
			this->button9->Text = L"Variations \rde valeurs";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(200, 287);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 32);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Entrepôt";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(202, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 32);
			this->label3->TabIndex = 50;
			this->label3->Text = L"Statistiques";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(201, 477);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 32);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Chiffres clés";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(12, 92);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(470, 32);
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox3->Location = System::Drawing::Point(12, 287);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(470, 32);
			this->pictureBox3->TabIndex = 53;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(12, 477);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(470, 32);
			this->pictureBox4->TabIndex = 54;
			this->pictureBox4->TabStop = false;
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
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
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
			this->GrillePersonnal->Location = System::Drawing::Point(487, 92);
			this->GrillePersonnal->Name = L"GrillePersonnal";
			this->GrillePersonnal->ReadOnly = true;
			this->GrillePersonnal->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->GrillePersonnal->RowHeadersVisible = false;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->GrillePersonnal->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->GrillePersonnal->Size = System::Drawing::Size(321, 573);
			this->GrillePersonnal->TabIndex = 55;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox5->Location = System::Drawing::Point(12, 592);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(470, 73);
			this->pictureBox5->TabIndex = 56;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(25, 592);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 32);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Selectionnez le mois et l\'année";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dateTimePicker1->CustomFormat = L"MMMM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->dateTimePicker1->Location = System::Drawing::Point(41, 622);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(176, 31);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox6->Location = System::Drawing::Point(12, 126);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(469, 73);
			this->pictureBox6->TabIndex = 58;
			this->pictureBox6->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(47, 155);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 32);
			this->comboBox1->TabIndex = 59;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(52, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 32);
			this->label6->TabIndex = 60;
			this->label6->Text = L"Selectionnez le client";
			// 
			// GuiStatistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 670);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->GrillePersonnal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GuiStatistiques";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &GuiStatistiques::GuiStatistiques_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GrillePersonnal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		public: void refreshData(String^ rsl2,System::Data::DataSet^ dataSet) { //FONCTION REFRESH AVEC DATASET
			this->GrillePersonnal->Refresh();
			this->oDs = dataSet;
			this->GrillePersonnal->DataSource = this->oDs;
			this->GrillePersonnal->DataMember = rsl2;
		}
#pragma endregion
	private: System::Void GuiStatistiques_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvcc = gcnew NS_Comp_Svc::StaffService();

		cn = gcnew SqlConnection("Data Source=ADAR-PC\\ADARITO;Initial Catalog=Projet_POO;User ID=Adarito;Password=azerty");
		cn->Open();
		comboBox1->Items->Clear();
		cmd = gcnew SqlCommand("select Concat(customer_name, ' ', customer_first_name) from customer", cn);

		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			comboBox1->Items->Add(dr[0]);
		}
		dr->Close();




	}
	private: System::Void paniermoyen_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData("rsl",this->oSvcc->FiltrerService("rsl", "select Round(AVG(amount),2) as panier_moyen from Bill"));
		GrillePersonnal->Columns["panier_moyen"]->HeaderText = "Panier moyen";
	}
	private: System::Void moinsvendus_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData("rsl2", this->oSvcc->FiltrerService("rsl2", "SELECT FK_hold_product,COUNT(*)as nombre_article_vendu INTO temporary_table FROM Hold GROUP BY FK_hold_product SELECT top 10 Product_name, nombre_article_vendu FROM Product FULL JOIN temporary_table ON Product.id_product = temporary_table.FK_hold_product order by nombre_article_vendu asc drop table temporary_table"));
		GrillePersonnal->Columns["Product_name"]->HeaderText = "Nom du produit";
		GrillePersonnal->Columns["nombre_article_vendu"]->HeaderText = "Nombre d'articles vendus";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData("rsl3", this->oSvcc->FiltrerService("rsl3", "SELECT FK_hold_product,COUNT(*)as nombre_article_vendu INTO temporary_table FROM Hold GROUP BY FK_hold_product SELECT top 10 product_name, nombre_article_vendu FROM Product FULL JOIN temporary_table ON Product.id_product = temporary_table.FK_hold_product order by nombre_article_vendu desc drop table temporary_table"));
		GrillePersonnal->Columns["Product_name"]->HeaderText = "Nom du produit";
		GrillePersonnal->Columns["nombre_article_vendu"]->HeaderText = "Nombre d'articles vendus";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData("rsl4", this->oSvcc->FiltrerService("rsl4", "select sum(amount) as chiffre_affaire from Bill where (month(payment_date)) = '" + dateTimePicker1->Value.ToString("MM") + "' AND (year(payment_date)) = '"+ dateTimePicker1->Value.ToString("yyyy") +"'"));
		GrillePersonnal->Columns["chiffre_affaire"]->HeaderText = "Chiffre d'affaire du mois de "+dateTimePicker1->Value.ToString("MMMM-yyyy")+"";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData("rsl5", this->oSvcc->FiltrerService("rsl5", "select product_name as need_to_be_refill from Product where product_quantity <= resupply_threshold"));
		GrillePersonnal->Columns["need_to_be_refill"]->HeaderText = "Produits à racheter";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData("rsl6", this->oSvcc->FiltrerService("rsl6", "select Round(sum(price * product_quantity),2) as valeur_commercial_stock from Product"));
		GrillePersonnal->Columns["valeur_commercial_stock"]->HeaderText = "Valeur commerciale du stock";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshData("rsl7", this->oSvcc->FiltrerService("rsl7", "select Round(sum(buying_price * product_quantity),2) as valeur_achat_stock from Product"));
		GrillePersonnal->Columns["valeur_achat_stock"]->HeaderText = "Valeur d'achat du stock";

	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
	refreshData("rsl8", this->oSvcc->FiltrerService("rsl8", "DECLARE @FullName VARCHAR(100) SET @FullName = '"+comboBox1->Text+"' select customer_name, customer_first_name, amount into somme from bill full join orders on bill.FK_bill_order=Orders.id_order full join customer on orders.fk_order_customer = customer.id_customer where FK_order_customer = (select id_customer from customer where customer_name = SUBSTRING(@FullName, 1, CHARINDEX(' ', @FullName) - 1) and customer_first_name = SUBSTRING(@FullName, CHARINDEX(' ', @FullName) + 1, LEN(@FullName)))  select sum(amount) as total_achat from somme  drop table somme"));
	GrillePersonnal->Columns["total_achat"]->HeaderText = "Total achat de "+ comboBox1->Text +"";
	}
	catch(Exception^ e) {
		MessageBox::Show("Nom de client incorrect", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
