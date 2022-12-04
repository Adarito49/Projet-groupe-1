#pragma once
#include "GuiGestionPersonnel.h"
#include "GuiGestionClients.h"
#include "GuiCommandes.h"
#include "GuiGestionStocks.h"
#include "GuiStatistiques.h"
#include "StaffService.h"

namespace Projetgroupe1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: NS_Comp_Svc::StaffService^ oSvc;
	private: System::Data::DataSet^ oDs;


	private: System::ComponentModel::IContainer^ components;


	private: bool dragging;

	private: Point offset;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuPrincipal::pictureBox2_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuPrincipal::pictureBox2_MouseMove);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MenuPrincipal::pictureBox2_MouseUp);
			this->pictureBox2->Move += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MenuPrincipal::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MenuPrincipal::pictureBox5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MenuPrincipal::button6_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuPrincipal::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuPrincipal::button2_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuPrincipal::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MenuPrincipal::button5_Click);
			// 
			// pictureBox7
			// 
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox9
			// 
			resources->ApplyResources(this->pictureBox9, L"pictureBox9");
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			resources->ApplyResources(this->pictureBox10, L"pictureBox10");
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox8
			// 
			resources->ApplyResources(this->pictureBox8, L"pictureBox8");
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox12
			// 
			resources->ApplyResources(this->pictureBox12, L"pictureBox12");
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->TabStop = false;
			// 
			// MenuPrincipal
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {

		this->dragging = false;
	}
	// ROLE DES BOUTONS MENUPRINCIPAL ////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) { // Bouton réduire l'application
		WindowState = FormWindowState::Minimized;


	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) { // Bouton fermer l'application
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {  // BOUTON GESTION PERSONNEL
		this->Hide();
		GuiGestionPersonnel^ GestionPersonelForm = gcnew GuiGestionPersonnel();
		GestionPersonelForm->ShowDialog();
		this->Show();

	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // BOUTONS GESTION CLIENTS
		this->Hide();
		GuiGestionClients^ GestionClientsForm = gcnew GuiGestionClients();
		GestionClientsForm->ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // BOUTONS GESTIONS COMMANDES
		this->Hide();
			GuiCommandes^ GestionCommandesForm = gcnew GuiCommandes();
			GestionCommandesForm->ShowDialog();
			this->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // BOUTONS GESTIONS DES STOCKS
		this->Hide();
			GuiGestionStocks^ GestionStocks = gcnew GuiGestionStocks();
			GestionStocks->ShowDialog();
			this->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {  // BOUTONS STATISTIQUES
		this->Hide();
		GuiStatistiques^ GestionStats = gcnew GuiStatistiques();
		GestionStats->ShowDialog();
		this->Show();
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// DEPLACEMENT FORM EN CLIQUANT SUR LA PICTUREBOX 2 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
};
}
