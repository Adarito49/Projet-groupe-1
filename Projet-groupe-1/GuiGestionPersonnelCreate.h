#include "StaffService.h"
#pragma once

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de GuiGestionPersonnelCreate
	/// </summary>
	public ref class GuiGestionPersonnelCreate : public System::Windows::Forms::Form
	{
	public:
		GuiGestionPersonnelCreate(void)
		{
			InitializeComponent();
			this->oSvcc = gcnew NS_Comp_Svc::StaffService();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GuiGestionPersonnelCreate()
		{
			if (components)
			{
				delete components;
			}
		}

	private: bool dragging;

	private: Point offset;
	private: NS_Comp_Svc::StaffService^ oSvcc;


	private: SqlConnection^ cn;
	private: SqlCommand^ cmd;
	private: SqlDataReader^ dr;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ComboBox^ comboBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiGestionPersonnelCreate::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(-240, -5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1066, 108);
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionPersonnelCreate::pictureBox2_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionPersonnelCreate::pictureBox2_MouseMove);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionPersonnelCreate::pictureBox2_MouseUp);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox5->Location = System::Drawing::Point(519, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(45, 45);
			this->pictureBox5->TabIndex = 60;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &GuiGestionPersonnelCreate::pictureBox5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 49);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Créer un personnel";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(21, 264);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 80;
			this->dateTimePicker1->Value = System::DateTime(2022, 12, 25, 23, 59, 59, 0);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(305, 287);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 26);
			this->label10->TabIndex = 79;
			this->label10->Text = L"Ville:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(305, 234);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 26);
			this->label9->TabIndex = 78;
			this->label9->Text = L"Code Postale";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(305, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 26);
			this->label8->TabIndex = 77;
			this->label8->Text = L"Nom de rue:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(305, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 26);
			this->label7->TabIndex = 76;
			this->label7->Text = L"Numéro de rue:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(22, 287);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 26);
			this->label6->TabIndex = 75;
			this->label6->Text = L"ID Manager";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(22, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 26);
			this->label5->TabIndex = 74;
			this->label5->Text = L"Date d\'embauche";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(22, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 26);
			this->label3->TabIndex = 73;
			this->label3->Text = L"Prénom personnel:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(22, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 26);
			this->label2->TabIndex = 72;
			this->label2->Text = L"Nom personnel:";
			// 
			// textBox8
			// 
			this->textBox8->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox8->Location = System::Drawing::Point(300, 264);
			this->textBox8->Name = L"textBox8";
			this->textBox8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox8->Size = System::Drawing::Size(257, 20);
			this->textBox8->TabIndex = 69;
			this->textBox8->Leave += gcnew System::EventHandler(this, &GuiGestionPersonnelCreate::textBox8_Leave);
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox7->Location = System::Drawing::Point(300, 211);
			this->textBox7->Name = L"textBox7";
			this->textBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox7->Size = System::Drawing::Size(257, 20);
			this->textBox7->TabIndex = 68;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox6->Location = System::Drawing::Point(300, 156);
			this->textBox6->Name = L"textBox6";
			this->textBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox6->Size = System::Drawing::Size(257, 20);
			this->textBox6->TabIndex = 67;
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox5->Location = System::Drawing::Point(19, 319);
			this->textBox5->Name = L"textBox5";
			this->textBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox5->Size = System::Drawing::Size(257, 20);
			this->textBox5->TabIndex = 66;
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox3->Location = System::Drawing::Point(19, 211);
			this->textBox3->Name = L"textBox3";
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox3->Size = System::Drawing::Size(257, 20);
			this->textBox3->TabIndex = 65;
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(21, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(257, 20);
			this->textBox1->TabIndex = 64;
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
			this->button1->Location = System::Drawing::Point(439, 373);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(118, 39);
			this->button1->TabIndex = 62;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GuiGestionPersonnelCreate::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(122, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 25);
			this->label4->TabIndex = 81;
			this->label4->Text = L"*";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(137, 180);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 25);
			this->label11->TabIndex = 82;
			this->label11->Text = L"*";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(129, 234);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 25);
			this->label12->TabIndex = 83;
			this->label12->Text = L"*";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(345, 287);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 25);
			this->label13->TabIndex = 84;
			this->label13->Text = L"*";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(388, 234);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 25);
			this->label14->TabIndex = 85;
			this->label14->Text = L"*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(386, 180);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 25);
			this->label15->TabIndex = 86;
			this->label15->Text = L"*";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(403, 127);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 25);
			this->label16->TabIndex = 87;
			this->label16->Text = L"*";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(22, 390);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 25);
			this->label17->TabIndex = 88;
			this->label17->Text = L"*";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(37, 386);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(134, 25);
			this->label18->TabIndex = 89;
			this->label18->Text = L"= Obligatoire";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(300, 319);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(257, 21);
			this->comboBox2->TabIndex = 93;
			// 
			// GuiGestionPersonnelCreate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 447);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GuiGestionPersonnelCreate";
			this->Text = L"GuiGestionPersonnelCreate";
			this->Load += gcnew System::EventHandler(this, &GuiGestionPersonnelCreate::GuiGestionPersonnelCreate_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void pictureBox2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { // LORSQUE ON CLICK
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void pictureBox2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { // DEPLACEMENT DE LA FORM EN FONCTION DE LA SOURIS
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void pictureBox2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { //LORSE QU'ON LACHE LE CLICK
		this->dragging = false;
	}
	private: System::Void GuiGestionPersonnelCreate_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		if (textBox1->Text->Length == 0 || textBox3->Text->Length == 0 || textBox6->Text->Length == 0 || textBox3->Text->Length == 0 || textBox7->Text->Length == 0 || textBox8->Text->Length == 0 || comboBox2->Text->Length == 0) {
			MessageBox::Show("Veuillez remplir toutes les champs obligatoires", "Erreur NULL", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			this->oSvcc->Envoyer("insert into adress(n_street, street_name, zip_code, city_name) values('" + int::Parse(textBox6->Text) + "', '" + textBox7->Text + "', '" + int::Parse(textBox8->Text) + "', '" + comboBox2->Text + "')");
			this->oSvcc->Envoyer("insert into Staff (staff_name, staff_first_name, hire_date, FK_staff_adress) values ('" + textBox1->Text + "', '" + textBox3->Text + "', '"+ dateTimePicker1->Value.ToString("yyyy-MM-dd") +"', (select id_adress from adress where n_street = '" + int::Parse(textBox6->Text) + "' and street_name = '" + textBox7->Text + "' ))");
			if (textBox5->Text->Length > 0) {
				this->oSvcc->Envoyer("UPDATE Staff SET line_manager = '" + int::Parse(this->textBox5->Text) + "' where staff_name = '"+ textBox1->Text+"' and staff_first_name = '" + textBox3->Text + "'");
			}
			MessageBox::Show("Ajout réussi", "Create", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
	}
private: System::Void textBox8_Leave(System::Object^ sender, System::EventArgs^ e) {
	comboBox2->Items->Clear();
	cn = gcnew SqlConnection("Data Source=ADAR-PC\\ADARITO;Initial Catalog=Projet_POO;User ID=Adarito;Password=azerty");
	cn->Open();

	cmd = gcnew SqlCommand("select city_name from Postal where postal_code LIKE '%" + textBox8->Text + "%'", cn);
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		comboBox2->Items->Add(dr[0]);
	}
	dr->Close();
}
};
}
