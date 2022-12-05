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
	/// Description résumée de GuiCommandesCréer
	/// </summary>
	public ref class GuiCommandesCréer : public System::Windows::Forms::Form
	{
	public:
		GuiCommandesCréer(void)
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
		~GuiCommandesCréer()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ test;
	private: int^ calcul;

	private: SqlConnection^ cn;
	private: SqlCommand^ cmd;
	private: SqlDataReader^ dr;
	private: bool dragging;
	private: NS_Comp_Svc::StaffService^ oSvcc;
	private: System::Data::DataSet^ oDs;

	private: Point offset;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::ComboBox^ comboBox12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ComboBox^ comboBox13;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::ComboBox^ comboBox14;
	private: System::Windows::Forms::ComboBox^ comboBox15;










	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DataGridView^ dataGridView1;



















private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
private: System::Windows::Forms::NumericUpDown^ textBox1;
private: System::Windows::Forms::NumericUpDown^ textBox6;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiCommandesCréer::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(-65, -3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1173, 121);
			this->pictureBox2->TabIndex = 37;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiCommandesCréer::pictureBox2_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiCommandesCréer::pictureBox2_MouseMove);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiCommandesCréer::pictureBox2_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(12, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 49);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Créer commande";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox12->Location = System::Drawing::Point(-25, -48);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(174, 140);
			this->pictureBox12->TabIndex = 38;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(369, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(326, 141);
			this->pictureBox1->TabIndex = 40;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(12, 124);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(326, 177);
			this->pictureBox4->TabIndex = 42;
			this->pictureBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(373, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 36);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Adresse de Livraison:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(726, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 36);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Adresse de Facturation:";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(118, 186);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(203, 21);
			this->comboBox1->TabIndex = 45;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::comboBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(15, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 36);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Nom client:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(479, 228);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(207, 21);
			this->comboBox2->TabIndex = 47;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->checkBox1->Enabled = false;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->checkBox1->Location = System::Drawing::Point(895, 154);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(183, 17);
			this->checkBox1->TabIndex = 49;
			this->checkBox1->Text = L"Identique à adresse de factiration";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::checkBox1_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(451, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(235, 20);
			this->textBox2->TabIndex = 51;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(379, 228);
			this->textBox3->MaxLength = 5;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 20);
			this->textBox3->TabIndex = 52;
			this->textBox3->Leave += gcnew System::EventHandler(this, &GuiCommandesCréer::textBox3_Leave);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(732, 229);
			this->textBox4->MaxLength = 5;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(71, 20);
			this->textBox4->TabIndex = 56;
			this->textBox4->Leave += gcnew System::EventHandler(this, &GuiCommandesCréer::textBox4_Leave);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(802, 182);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(235, 20);
			this->textBox5->TabIndex = 55;
			// 
			// comboBox3
			// 
			this->comboBox3->Enabled = false;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(830, 228);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(207, 21);
			this->comboBox3->TabIndex = 53;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox5->Location = System::Drawing::Point(723, 124);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(364, 141);
			this->pictureBox5->TabIndex = 57;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(155, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 36);
			this->label5->TabIndex = 58;
			this->label5->Text = L"Cesitech";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(156, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 28);
			this->label6->TabIndex = 59;
			this->label6->Text = L"264, boulevard Godard";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(156, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 28);
			this->label7->TabIndex = 60;
			this->label7->Text = L"33000, Bordeaux";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(157, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 28);
			this->label8->TabIndex = 61;
			this->label8->Text = L"05 65 23 52 32";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(380, 159);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 28);
			this->label9->TabIndex = 62;
			this->label9->Text = L"n°";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(731, 161);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 28);
			this->label10->TabIndex = 63;
			this->label10->Text = L"n°";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(452, 160);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 28);
			this->label11->TabIndex = 64;
			this->label11->Text = L"nom de rue";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
			this->label12->Location = System::Drawing::Point(802, 160);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 28);
			this->label12->TabIndex = 65;
			this->label12->Text = L"nom de rue";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(377, 204);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 28);
			this->label13->TabIndex = 66;
			this->label13->Text = L"code postale";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
			this->label14->Location = System::Drawing::Point(727, 204);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 28);
			this->label14->TabIndex = 67;
			this->label14->Text = L"code postale";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
			this->label15->Location = System::Drawing::Point(481, 205);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 28);
			this->label15->TabIndex = 68;
			this->label15->Text = L"ville";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label16.Image")));
			this->label16->Location = System::Drawing::Point(834, 208);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 28);
			this->label16->TabIndex = 69;
			this->label16->Text = L"ville";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(131, 332);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(207, 21);
			this->comboBox4->TabIndex = 70;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(131, 359);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(207, 21);
			this->comboBox5->TabIndex = 71;
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(131, 386);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(207, 21);
			this->comboBox6->TabIndex = 72;
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(131, 413);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(207, 21);
			this->comboBox7->TabIndex = 73;
			// 
			// comboBox8
			// 
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(131, 440);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(207, 21);
			this->comboBox8->TabIndex = 74;
			// 
			// comboBox9
			// 
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(131, 467);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(207, 21);
			this->comboBox9->TabIndex = 75;
			// 
			// comboBox10
			// 
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(131, 494);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(207, 21);
			this->comboBox10->TabIndex = 76;
			// 
			// comboBox11
			// 
			this->comboBox11->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(131, 521);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(207, 21);
			this->comboBox11->TabIndex = 77;
			// 
			// comboBox12
			// 
			this->comboBox12->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox12->Enabled = false;
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(21, 242);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(151, 21);
			this->comboBox12->TabIndex = 78;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label17.Image")));
			this->label17->Location = System::Drawing::Point(36, 214);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(122, 26);
			this->label17->TabIndex = 79;
			this->label17->Text = L"Adresse de livraison:";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->checkBox2->Location = System::Drawing::Point(41, 269);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(108, 17);
			this->checkBox2->TabIndex = 80;
			this->checkBox2->Text = L"Nouvelle adresse";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::checkBox2_CheckedChanged);
			this->checkBox2->EnabledChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::checkBox2_EnabledChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label18.Image")));
			this->label18->Location = System::Drawing::Point(190, 214);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(122, 26);
			this->label18->TabIndex = 81;
			this->label18->Text = L"Adresse Facturation:";
			// 
			// comboBox13
			// 
			this->comboBox13->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox13->Enabled = false;
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(178, 242);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(151, 21);
			this->comboBox13->TabIndex = 82;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->checkBox3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->checkBox3->Location = System::Drawing::Point(195, 269);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(108, 17);
			this->checkBox3->TabIndex = 83;
			this->checkBox3->Text = L"Nouvelle adresse";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::checkBox3_CheckedChanged);
			// 
			// comboBox14
			// 
			this->comboBox14->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(131, 548);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(207, 21);
			this->comboBox14->TabIndex = 84;
			// 
			// comboBox15
			// 
			this->comboBox15->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Location = System::Drawing::Point(131, 575);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(207, 21);
			this->comboBox15->TabIndex = 85;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox3->Location = System::Drawing::Point(12, 302);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1066, 212);
			this->pictureBox3->TabIndex = 96;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox6->Location = System::Drawing::Point(12, 426);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(1066, 209);
			this->pictureBox6->TabIndex = 97;
			this->pictureBox6->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(67, 335);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 13);
			this->label20->TabIndex = 99;
			this->label20->Text = L"Produit 1:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(67, 362);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(52, 13);
			this->label19->TabIndex = 100;
			this->label19->Text = L"Produit 2:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(67, 390);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(52, 13);
			this->label21->TabIndex = 101;
			this->label21->Text = L"Produit 3:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(67, 497);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 13);
			this->label22->TabIndex = 102;
			this->label22->Text = L"Produit 7:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(67, 417);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(52, 13);
			this->label23->TabIndex = 102;
			this->label23->Text = L"Produit 4:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(67, 444);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(52, 13);
			this->label24->TabIndex = 103;
			this->label24->Text = L"Produit 5:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(67, 471);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 13);
			this->label25->TabIndex = 104;
			this->label25->Text = L"Produit 6:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(67, 524);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(52, 13);
			this->label26->TabIndex = 105;
			this->label26->Text = L"Produit 8:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(67, 552);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(52, 13);
			this->label27->TabIndex = 106;
			this->label27->Text = L"Produit 9:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(67, 579);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 13);
			this->label28->TabIndex = 107;
			this->label28->Text = L"Produit 10:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label29->Location = System::Drawing::Point(142, 307);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(174, 32);
			this->label29->TabIndex = 108;
			this->label29->Text = L"Choississez les produits:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->Location = System::Drawing::Point(373, 307);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(77, 32);
			this->label30->TabIndex = 109;
			this->label30->Text = L"Quantité:";
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
			this->button1->Location = System::Drawing::Point(960, 641);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(118, 39);
			this->button1->TabIndex = 110;
			this->button1->Text = L"Créer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(213, 641);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->ShowCellToolTips = false;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->ShowRowErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(102, 25);
			this->dataGridView1->TabIndex = 111;
			this->dataGridView1->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label32->Location = System::Drawing::Point(585, 305);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(72, 32);
			this->label32->TabIndex = 132;
			this->label32->Text = L"Prix HT:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(593, 330);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(18, 20);
			this->label33->TabIndex = 133;
			this->label33->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(593, 356);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(18, 20);
			this->label34->TabIndex = 134;
			this->label34->Text = L"0";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(593, 383);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(18, 20);
			this->label35->TabIndex = 135;
			this->label35->Text = L"0";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(593, 411);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(18, 20);
			this->label36->TabIndex = 136;
			this->label36->Text = L"0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(593, 521);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(18, 20);
			this->label37->TabIndex = 140;
			this->label37->Text = L"0";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(593, 493);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(18, 20);
			this->label38->TabIndex = 139;
			this->label38->Text = L"0";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(593, 466);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(18, 20);
			this->label39->TabIndex = 138;
			this->label39->Text = L"0";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(593, 438);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(18, 20);
			this->label40->TabIndex = 137;
			this->label40->Text = L"0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(593, 574);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(18, 20);
			this->label41->TabIndex = 142;
			this->label41->Text = L"0";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(593, 548);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(18, 20);
			this->label42->TabIndex = 141;
			this->label42->Text = L"0";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox7->Location = System::Drawing::Point(12, 602);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1066, 33);
			this->pictureBox7->TabIndex = 143;
			this->pictureBox7->TabStop = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label43.Image")));
			this->label43->Location = System::Drawing::Point(489, 605);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(57, 28);
			this->label43->TabIndex = 144;
			this->label43->Text = L"Totaux:";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::Chocolate;
			this->label44->Location = System::Drawing::Point(593, 607);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(18, 20);
			this->label44->TabIndex = 145;
			this->label44->Text = L"0";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(383, 332);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(55, 20);
			this->numericUpDown1->TabIndex = 146;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown2->Location = System::Drawing::Point(383, 361);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(55, 20);
			this->numericUpDown2->TabIndex = 147;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown3->Location = System::Drawing::Point(383, 387);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(55, 20);
			this->numericUpDown3->TabIndex = 148;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown4->Location = System::Drawing::Point(383, 415);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(55, 20);
			this->numericUpDown4->TabIndex = 149;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown5->Location = System::Drawing::Point(383, 441);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(55, 20);
			this->numericUpDown5->TabIndex = 150;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown6->Location = System::Drawing::Point(383, 469);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(55, 20);
			this->numericUpDown6->TabIndex = 151;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown7->Location = System::Drawing::Point(383, 496);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(55, 20);
			this->numericUpDown7->TabIndex = 152;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown7_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown8->Location = System::Drawing::Point(383, 523);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(55, 20);
			this->numericUpDown8->TabIndex = 153;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown8_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown9->Location = System::Drawing::Point(383, 549);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(55, 20);
			this->numericUpDown9->TabIndex = 154;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown9_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown10->Location = System::Drawing::Point(383, 576);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(55, 20);
			this->numericUpDown10->TabIndex = 155;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &GuiCommandesCréer::numericUpDown10_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Enabled = false;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(381, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 20);
			this->textBox1->TabIndex = 156;
			// 
			// textBox6
			// 
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox6->Enabled = false;
			this->textBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox6->Location = System::Drawing::Point(732, 182);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(57, 20);
			this->textBox6->TabIndex = 157;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox8->Location = System::Drawing::Point(1033, 9);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(45, 45);
			this->pictureBox8->TabIndex = 158;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &GuiCommandesCréer::pictureBox8_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label45->Location = System::Drawing::Point(684, 305);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(58, 32);
			this->label45->TabIndex = 159;
			this->label45->Text = L"T.V.A:";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(697, 574);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(18, 20);
			this->label46->TabIndex = 169;
			this->label46->Text = L"0";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(697, 548);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(18, 20);
			this->label47->TabIndex = 168;
			this->label47->Text = L"0";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(697, 521);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(18, 20);
			this->label48->TabIndex = 167;
			this->label48->Text = L"0";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(697, 493);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(18, 20);
			this->label49->TabIndex = 166;
			this->label49->Text = L"0";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(697, 466);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(18, 20);
			this->label50->TabIndex = 165;
			this->label50->Text = L"0";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(697, 438);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(18, 20);
			this->label51->TabIndex = 164;
			this->label51->Text = L"0";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(697, 411);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(18, 20);
			this->label52->TabIndex = 163;
			this->label52->Text = L"0";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(697, 383);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(18, 20);
			this->label53->TabIndex = 162;
			this->label53->Text = L"0";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(697, 356);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(18, 20);
			this->label54->TabIndex = 161;
			this->label54->Text = L"0";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(697, 330);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(18, 20);
			this->label55->TabIndex = 160;
			this->label55->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Chocolate;
			this->label31->Location = System::Drawing::Point(855, 609);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(18, 20);
			this->label31->TabIndex = 181;
			this->label31->Text = L"0";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(855, 576);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(18, 20);
			this->label56->TabIndex = 180;
			this->label56->Text = L"0";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(855, 550);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(18, 20);
			this->label57->TabIndex = 179;
			this->label57->Text = L"0";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(855, 523);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(18, 20);
			this->label58->TabIndex = 178;
			this->label58->Text = L"0";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(855, 495);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(18, 20);
			this->label59->TabIndex = 177;
			this->label59->Text = L"0";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(855, 468);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(18, 20);
			this->label60->TabIndex = 176;
			this->label60->Text = L"0";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(855, 440);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(18, 20);
			this->label61->TabIndex = 175;
			this->label61->Text = L"0";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(855, 413);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(18, 20);
			this->label62->TabIndex = 174;
			this->label62->Text = L"0";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(855, 385);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(18, 20);
			this->label63->TabIndex = 173;
			this->label63->Text = L"0";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(855, 358);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(18, 20);
			this->label64->TabIndex = 172;
			this->label64->Text = L"0";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(855, 332);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(18, 20);
			this->label65->TabIndex = 171;
			this->label65->Text = L"0";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label66->Location = System::Drawing::Point(847, 307);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(89, 32);
			this->label66->TabIndex = 170;
			this->label66->Text = L"Prix T.T.C:";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::Chocolate;
			this->label67->Location = System::Drawing::Point(1001, 609);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(67, 20);
			this->label67->TabIndex = 182;
			this->label67->Text = L"EUROS";
			// 
			// GuiCommandesCréer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1090, 690);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->comboBox15);
			this->Controls->Add(this->comboBox14);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->comboBox13);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->comboBox12);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GuiCommandesCréer";
			this->Text = L"GuiCommandesCréer";
			this->Load += gcnew System::EventHandler(this, &GuiCommandesCréer::GuiCommandesCréer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		public: void refreshData(System::Data::DataSet^ dataSet) { //FONCTION REFRESH AVEC DATASET
			this->dataGridView1->Refresh();
			this->oDs = dataSet;
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "rsl";
		}
#pragma endregion
private: System::Void GuiCommandesCréer_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oSvcc = gcnew NS_Comp_Svc::StaffService();

	if (checkBox2->Checked == true) {
		MessageBox::Show("Veuillez rentrez un ID", "Erreur ID NULL", MessageBoxButtons::OK, MessageBoxIcon::Error);
		comboBox13->Items->Clear();
		comboBox12->Items->Clear();
		comboBox12->Enabled == false;
		comboBox13->Enabled == false;
		textBox1->Enabled == true;
		textBox2->Enabled == true;
		textBox3->Enabled == true;
		comboBox1->Enabled == true;
	}

	comboBox1->Items->Clear();
	cn = gcnew SqlConnection("Data Source=ADAR-PC\\ADARITO;Initial Catalog=Projet_POO;User ID=Adarito;Password=azerty");
	cn->Open();

	cmd = gcnew SqlCommand("select Concat(customer_name, ' ', customer_first_name) from customer where Customer_name LIKE '%" + comboBox2->Text + "%'", cn);
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		comboBox1->Items->Add(dr[0]);
	}
	dr->Close();

	cmd = gcnew SqlCommand("select product_name from Product", cn);
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		comboBox4->Items->Add(dr[0]);
		comboBox5->Items->Add(dr[0]);
		comboBox6->Items->Add(dr[0]);
		comboBox7->Items->Add(dr[0]);
		comboBox8->Items->Add(dr[0]);
		comboBox9->Items->Add(dr[0]);
		comboBox10->Items->Add(dr[0]);
		comboBox11->Items->Add(dr[0]);

		comboBox14->Items->Add(dr[0]);
		comboBox15->Items->Add(dr[0]);
	}
	dr->Close();

}
private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox12->Items->Clear();
	cmd = gcnew SqlCommand("DECLARE @FullName VARCHAR(100) SET @FullName = '" + comboBox1->Text + "' select CONCAT(n_street, ' ', street_name, ' ', zip_code, ' ', city_name) as Adresse from Adress inner join Customer on Adress.FK_adress_customer = Customer.id_customer where customer_name = SUBSTRING(@FullName, 1, CHARINDEX(' ', @FullName) - 1) and customer_first_name = SUBSTRING(@FullName, CHARINDEX(' ', @FullName) + 1, LEN(@FullName))", cn);
	dr = cmd->ExecuteReader();

	while (dr->Read())
	{
		comboBox12->Items->Add(dr[0]);

	}
	dr->Close();

	comboBox13->Items->Clear();
	cmd = gcnew SqlCommand("DECLARE @FullName VARCHAR(100) SET @FullName = '" + comboBox1->Text + "' select CONCAT(n_street, ' ', street_name, ' ', zip_code, ' ', city_name) as Adresse from Adress inner join Customer on Adress.FK_adress_customer_invoice = Customer.id_customer where customer_name = SUBSTRING(@FullName, 1, CHARINDEX(' ', @FullName) - 1) and customer_first_name = SUBSTRING(@FullName, CHARINDEX(' ', @FullName) + 1, LEN(@FullName))", cn);
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		comboBox13->Items->Add(dr[0]);


	}
	dr->Close();


	comboBox12->Enabled = true;
	comboBox13->Enabled = true;
}


private: System::Void checkBox2_EnabledChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked == true)
	{
	comboBox12->Items->Clear();
	comboBox12->Enabled = false;
	textBox1->Enabled = true;
	textBox2->Enabled = true;
	textBox3->Enabled = true;
	comboBox2->Enabled = true;
	}
	if (checkBox2->Checked == false)
	{
		comboBox12->Items->Clear();
		comboBox12->Enabled = true;
		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;
		comboBox2->Enabled = false;
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked == true)
	{
		comboBox13->Items->Clear();
		comboBox13->Enabled = false;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		comboBox3->Enabled = true;
		checkBox1->Enabled = true;
	}
	if (checkBox3->Checked == false)
	{
		comboBox13->Items->Clear();
		comboBox13->Enabled = true;
		textBox4->Enabled = false;
		textBox5->Enabled = false;
		textBox6->Enabled = false;
		comboBox3->Enabled = false;
		checkBox1->Enabled = false;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		textBox4->Text = textBox3->Text;
		textBox5->Text = textBox2->Text;
		textBox6->Text = textBox1->Text;
		comboBox3->Text = comboBox2->Text;


		textBox4->Enabled = false;
		textBox5->Enabled = false;
		textBox6->Enabled = false;
		comboBox3->Enabled = false;
	}
	if (checkBox1->Checked == false)
	{
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		comboBox3->Enabled = true;
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	comboBox2->Items->Clear();

	cmd = gcnew SqlCommand("select city_name from Postal where postal_code LIKE '%" + textBox3->Text + "%'", cn);
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		comboBox2->Items->Add(dr[0]);
	}
	dr->Close();
}

private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown1->Text + " as test from Product where product_name = '" + comboBox4->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label33->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox4->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label55->Text = test;
	this->label65->Text = ((float::Parse(label33->Text)) * (((float::Parse(label55->Text))/100)+1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();
}

private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown2->Text + " as test from Product where product_name = '" + comboBox5->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label34->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox5->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label54->Text = test;
	this->label64->Text = ((float::Parse(label34->Text)) * (((float::Parse(label54->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown3->Text + " as test from Product where product_name = '" + comboBox6->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label35->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox6->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label53->Text = test;
	this->label63->Text = ((float::Parse(label35->Text)) * (((float::Parse(label53->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown4->Text + " as test from Product where product_name = '" + comboBox7->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label36->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox7->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label52->Text = test;
	this->label62->Text = ((float::Parse(label36->Text)) * (((float::Parse(label52->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown5->Text + " as test from Product where product_name = '" + comboBox8->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label40->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox8->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label51->Text = test;
	this->label61->Text = ((float::Parse(label40->Text)) * (((float::Parse(label51->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown6->Text + " as test from Product where product_name = '" + comboBox9->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label39->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox9->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label50->Text = test;
	this->label60->Text = ((float::Parse(label39->Text)) * (((float::Parse(label50->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown7->Text + " as test from Product where product_name = '" + comboBox10->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label38->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox10->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label49->Text = test;
	this->label59->Text = ((float::Parse(label38->Text)) * (((float::Parse(label49->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown8->Text + " as test from Product where product_name = '" + comboBox11->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label37->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox11->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label48->Text = test;
	this->label58->Text = ((float::Parse(label37->Text)) * (((float::Parse(label48->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown9_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown9->Text + " as test from Product where product_name = '" + comboBox14->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label42->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox14->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label47->Text = test;
	this->label57->Text = ((float::Parse(label42->Text)) * (((float::Parse(label47->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}
private: System::Void numericUpDown10_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	refreshData(this->oSvcc->FiltrerService("rsl", "select Price*" + numericUpDown10->Text + " as test from Product where product_name = '" + comboBox15->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label41->Text = test;
	this->label44->Text = (float::Parse(label33->Text) + float::Parse(label34->Text) + float::Parse(label35->Text) + float::Parse(label36->Text) + float::Parse(label40->Text) + float::Parse(label39->Text) + float::Parse(label38->Text) + float::Parse(label37->Text) + float::Parse(label42->Text) + float::Parse(label41->Text)).ToString();
	refreshData(this->oSvcc->FiltrerService("rsl", "select vat_cover as test from Product where product_name = '" + comboBox15->Text + "'"));
	test = dataGridView1->Rows[0]->Cells["test"]->Value->ToString();
	this->label46->Text = test;
	this->label56->Text = ((float::Parse(label41->Text)) * (((float::Parse(label46->Text)) / 100) + 1)).ToString();
	this->label31->Text = (float::Parse(label65->Text) + float::Parse(label64->Text) + float::Parse(label63->Text) + float::Parse(label62->Text) + float::Parse(label61->Text) + float::Parse(label60->Text) + float::Parse(label59->Text) + float::Parse(label58->Text) + float::Parse(label57->Text) + float::Parse(label56->Text)).ToString();

}

private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	comboBox3->Items->Clear();

	cmd = gcnew SqlCommand("select city_name from Postal where postal_code LIKE '%" + textBox4->Text + "%'", cn);
	dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		comboBox3->Items->Add(dr[0]);
	}
	dr->Close();
}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
