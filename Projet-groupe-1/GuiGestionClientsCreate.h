#pragma once
#include "CustomerService.h"

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GuiGestionClientsCreate
	/// </summary>
	public ref class GuiGestionClientsCreate : public System::Windows::Forms::Form
	{
	public:
		GuiGestionClientsCreate(void)
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
		~GuiGestionClientsCreate()
		{
			if (components)
			{
				delete components;
			}
		}

	private: bool dragging;

	private: Point offset;
	private: NS_Comp_Svc::CustomerService^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiGestionClientsCreate::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(-340, -2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1066, 108);
			this->pictureBox2->TabIndex = 41;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionClientsCreate::pictureBox2_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionClientsCreate::pictureBox2_MouseMove);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionClientsCreate::pictureBox2_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 49);
			this->label1->TabIndex = 62;
			this->label1->Text = L"Créer un client";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox5->Location = System::Drawing::Point(326, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(45, 45);
			this->pictureBox5->TabIndex = 63;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &GuiGestionClientsCreate::pictureBox5_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(38, 384);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(134, 25);
			this->label18->TabIndex = 106;
			this->label18->Text = L"= Obligatoire";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(21, 384);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 25);
			this->label17->TabIndex = 105;
			this->label17->Text = L"*";
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
			this->button1->Location = System::Drawing::Point(253, 384);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(118, 39);
			this->button1->TabIndex = 104;
			this->button1->Text = L"Créer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GuiGestionClientsCreate::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(62, 264);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 26);
			this->label5->TabIndex = 101;
			this->label5->Text = L"Date de naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(62, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 26);
			this->label3->TabIndex = 100;
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
			this->label2->Location = System::Drawing::Point(62, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 26);
			this->label2->TabIndex = 99;
			this->label2->Text = L"Nom personnel:";
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox3->Location = System::Drawing::Point(59, 241);
			this->textBox3->Name = L"textBox3";
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox3->Size = System::Drawing::Size(257, 20);
			this->textBox3->TabIndex = 97;
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(59, 189);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(257, 20);
			this->textBox1->TabIndex = 96;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(163, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 25);
			this->label6->TabIndex = 107;
			this->label6->Text = L"*";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(177, 212);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 25);
			this->label7->TabIndex = 108;
			this->label7->Text = L"*";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(171, 264);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 25);
			this->label8->TabIndex = 109;
			this->label8->Text = L"*";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(62, 295);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 110;
			// 
			// GuiGestionClientsCreate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(383, 447);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GuiGestionClientsCreate";
			this->Text = L"GuiGestionClientsCreate";
			this->Load += gcnew System::EventHandler(this, &GuiGestionClientsCreate::GuiGestionClientsCreate_Load);
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0 || textBox3->Text->Length == 0) {
			MessageBox::Show("Veuillez remplir toutes les champs obligatoires", "Erreur NULL", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			this->oSvc->Envoyer("insert into customer values ('" + textBox1->Text + "', '" + textBox3->Text + "', '"+ dateTimePicker1->Value.ToString("yyyy-MM-dd")  +"')");
			MessageBox::Show("Ajout réussi", "Create", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
	}
private: System::Void GuiGestionClientsCreate_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CustomerService();
}
};
}
