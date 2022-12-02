#include "ProductService.h"
#pragma once

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GuiGestionStocksUpdate
	/// </summary>
	public ref class GuiGestionStocksUpdate : public System::Windows::Forms::Form
	{
	public:
		GuiGestionStocksUpdate(void)
		{
			InitializeComponent();
			this->oSvcc = gcnew NS_Comp_Svc::ProductService();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GuiGestionStocksUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool dragging;

	private: Point offset;
	private: NS_Comp_Svc::ProductService^ oSvcc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox9;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;


	private:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GuiGestionStocksUpdate::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->pictureBox2->Location = System::Drawing::Point(-246, -3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1066, 108);
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionStocksUpdate::pictureBox2_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionStocksUpdate::pictureBox2_MouseMove);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GuiGestionStocksUpdate::pictureBox2_MouseUp);
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
			this->pictureBox5->Click += gcnew System::EventHandler(this, &GuiGestionStocksUpdate::pictureBox5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 49);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Modifier un produit";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(305, 303);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 26);
			this->label10->TabIndex = 77;
			this->label10->Text = L"Prix d\'achat";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(305, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 26);
			this->label9->TabIndex = 76;
			this->label9->Text = L"T.V.A";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(305, 147);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 26);
			this->label8->TabIndex = 75;
			this->label8->Text = L"Quantité produit:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(22, 303);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 26);
			this->label7->TabIndex = 74;
			this->label7->Text = L"Prix:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(305, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 26);
			this->label6->TabIndex = 73;
			this->label6->Text = L"Seuil de réapprovisionement:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(22, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 26);
			this->label3->TabIndex = 72;
			this->label3->Text = L"Unité du produit:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(22, 199);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 26);
			this->label2->TabIndex = 71;
			this->label2->Text = L"Nom du produit:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(22, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 26);
			this->label4->TabIndex = 70;
			this->label4->Text = L"ID:";
			// 
			// textBox9
			// 
			this->textBox9->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox9->Location = System::Drawing::Point(300, 332);
			this->textBox9->Name = L"textBox9";
			this->textBox9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox9->Size = System::Drawing::Size(257, 20);
			this->textBox9->TabIndex = 69;
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox7->Location = System::Drawing::Point(300, 228);
			this->textBox7->Name = L"textBox7";
			this->textBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox7->Size = System::Drawing::Size(257, 20);
			this->textBox7->TabIndex = 67;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox6->Location = System::Drawing::Point(300, 176);
			this->textBox6->Name = L"textBox6";
			this->textBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox6->Size = System::Drawing::Size(257, 20);
			this->textBox6->TabIndex = 66;
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox5->Location = System::Drawing::Point(21, 332);
			this->textBox5->Name = L"textBox5";
			this->textBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox5->Size = System::Drawing::Size(257, 20);
			this->textBox5->TabIndex = 65;
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->Location = System::Drawing::Point(19, 228);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(257, 20);
			this->textBox1->TabIndex = 63;
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox2->Location = System::Drawing::Point(19, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(257, 20);
			this->textBox2->TabIndex = 62;
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
			this->button1->Location = System::Drawing::Point(439, 396);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(118, 39);
			this->button1->TabIndex = 78;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GuiGestionStocksUpdate::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"unite", L"lot de 2", L"lot de 3", L"lot de 4",
					L"lot de 5"
			});
			this->comboBox1->Location = System::Drawing::Point(21, 279);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 79;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"20" });
			this->comboBox2->Location = System::Drawing::Point(300, 280);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 80;
			// 
			// GuiGestionStocksUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 447);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GuiGestionStocksUpdate";
			this->Text = L"GuiGestionStocksUpdate";
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
		if (textBox2->Text->Length == 0) {
			MessageBox::Show("Veuillez rentrez un ID", "Erreur ID NULL", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (textBox1->Text->Length != 0) {
				this->oSvcc->Envoyer("update Product set product_name = '" + textBox1->Text + "' WHERE id_product='" + int::Parse(textBox2->Text) + "'");
			}
			if (comboBox1->Text->Length != 0) {
				this->oSvcc->Envoyer("update Product set product_type = '" + comboBox1->Text + "' WHERE id_product='" + int::Parse(textBox2->Text) + "'");
			}
			if (textBox5->Text->Length != 0) {
				this->oSvcc->Envoyer("update Product set price = '" + int::Parse(textBox5->Text) + "' WHERE id_product='" + int::Parse(textBox2->Text) + "'");
			}
			if (textBox6->Text->Length != 0) {
				this->oSvcc->Envoyer("update Product set product_quantity = '" + int::Parse(textBox6->Text) + "' WHERE id_product='" + int::Parse(textBox2->Text) + "'");
			}
			if (textBox7->Text->Length != 0) {
				this->oSvcc->Envoyer("update Product set resupply_threshold = '" + int::Parse(textBox7->Text) + "' WHERE id_product='" + int::Parse(textBox2->Text) + "'");
			}
			if (comboBox2->Text->Length != 0) {
				this->oSvcc->Envoyer("update Product set vat_cover = '" + int::Parse(comboBox2->Text) + "' WHERE id_product='" + int::Parse(textBox2->Text) + "'");
			}
			if (textBox9->Text->Length != 0) {
				this->oSvcc->Envoyer("update Product set buying_price = '" + float::Parse(textBox9->Text) + "' WHERE id_product='" + int::Parse(textBox2->Text) + "'");
			}

			MessageBox::Show("Changement effectué avec succès", "Update", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
	}
};
}
