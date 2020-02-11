#pragma once
#include "node.h"
#include "graph.h"
#include "trieNode.h"
#include <Windows.h>
#include <MMSystem.h>
#include <msclr\marshal_cppstd.h>

int totalWords = 0, totalPoints = 0 ;
node n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;
std::string config4x4[17] = { "AAEEGN", "ABBJOO", "ACHOPS", "AFFKPS", "AOOTTW","AOOTTW","CIMOTU","DEILRX","DELRVY",
	"DISTTY","EEGHNW","EEINSU","EHRTVW","EIOSST","ELRTTY","HIMNQU","HLNNRZ" };
std::string config3x3[10] = { "AAEEGN", "ABBJOO", "ACHOPS", "AFFKPS", "AOOTTW","AOOTTW","CIMOTU","DEILRX","DELRVY",
	"DISTTY" };
node nodes[17] = { n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15 };
Tipografo<node> g3x3(nodes, 9);
trieNode* root = new trieNode;
namespace Boogle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for boogleForm
	/// </summary>
	public ref class boogleForm : public System::Windows::Forms::Form
	{
	public:
		boogleForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~boogleForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Panel^ pnl_game;

	private: System::Windows::Forms::PictureBox^ img_boggle;

	private: System::Windows::Forms::Label^ label;




	private: System::Windows::Forms::TextBox^ txtbox;

	private: System::Windows::Forms::ListView^ list_words;



	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::GroupBox^ gbox_33;

	private: System::Windows::Forms::Label^ label_933;

	private: System::Windows::Forms::Label^ label_833;

	private: System::Windows::Forms::Label^ label_733;


	private: System::Windows::Forms::Label^ label_633;


	private: System::Windows::Forms::Label^ label_533;


	private: System::Windows::Forms::Label^ label_433;


	private: System::Windows::Forms::Label^ label_333;


	private: System::Windows::Forms::Label^ label_233;


	private: System::Windows::Forms::Label^ label_133;



	private: System::Windows::Forms::GroupBox^ box_control33;
	private: System::Windows::Forms::Button^ btn_rotate;


	private: System::Windows::Forms::Button^ btn_giveup;


	private: System::Windows::Forms::Button^ btn_clear;


	private: System::Windows::Forms::Button^ btn_submit;



	private: System::Windows::Forms::GroupBox^ gbox_44;

	private: System::Windows::Forms::Label^ label_1644;
	private: System::Windows::Forms::Label^ label_1544;
	private: System::Windows::Forms::Label^ label_1444;
	private: System::Windows::Forms::Label^ label_1344;
	private: System::Windows::Forms::Label^ label_1244;
	private: System::Windows::Forms::Label^ label_1144;
	private: System::Windows::Forms::Label^ label_1044;
	private: System::Windows::Forms::Label^ label_944;
	private: System::Windows::Forms::Label^ label_844;
	private: System::Windows::Forms::Label^ label_744;
	private: System::Windows::Forms::Label^ label_644;
	private: System::Windows::Forms::Label^ label_544;
	private: System::Windows::Forms::Label^ label_444;
	private: System::Windows::Forms::Label^ label_344;
	private: System::Windows::Forms::Label^ label_244;
	private: System::Windows::Forms::Label^ label_144;
	private: System::Windows::Forms::Panel^ pnl_welcome;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_4x4;
	private: System::Windows::Forms::Button^ btn_3x3;

private: System::Windows::Forms::BindingSource^ bindingSource1;
private: System::Windows::Forms::Label^ lbl_wordsLeft;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ lbl_points;
private: System::Windows::Forms::Label^ lbl_loading;
private: System::Windows::Forms::Panel^ pnl_loading;



private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void update4x4Board();
		void update3x3Board();
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(boogleForm::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->pnl_game = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_points = (gcnew System::Windows::Forms::Label());
			this->lbl_wordsLeft = (gcnew System::Windows::Forms::Label());
			this->gbox_44 = (gcnew System::Windows::Forms::GroupBox());
			this->label_1644 = (gcnew System::Windows::Forms::Label());
			this->label_1544 = (gcnew System::Windows::Forms::Label());
			this->label_1444 = (gcnew System::Windows::Forms::Label());
			this->label_1344 = (gcnew System::Windows::Forms::Label());
			this->label_1244 = (gcnew System::Windows::Forms::Label());
			this->label_1144 = (gcnew System::Windows::Forms::Label());
			this->label_1044 = (gcnew System::Windows::Forms::Label());
			this->label_944 = (gcnew System::Windows::Forms::Label());
			this->label_844 = (gcnew System::Windows::Forms::Label());
			this->label_744 = (gcnew System::Windows::Forms::Label());
			this->label_644 = (gcnew System::Windows::Forms::Label());
			this->label_544 = (gcnew System::Windows::Forms::Label());
			this->label_444 = (gcnew System::Windows::Forms::Label());
			this->label_344 = (gcnew System::Windows::Forms::Label());
			this->label_244 = (gcnew System::Windows::Forms::Label());
			this->label_144 = (gcnew System::Windows::Forms::Label());
			this->img_boggle = (gcnew System::Windows::Forms::PictureBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->txtbox = (gcnew System::Windows::Forms::TextBox());
			this->list_words = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->gbox_33 = (gcnew System::Windows::Forms::GroupBox());
			this->label_933 = (gcnew System::Windows::Forms::Label());
			this->label_833 = (gcnew System::Windows::Forms::Label());
			this->label_733 = (gcnew System::Windows::Forms::Label());
			this->label_633 = (gcnew System::Windows::Forms::Label());
			this->label_533 = (gcnew System::Windows::Forms::Label());
			this->label_433 = (gcnew System::Windows::Forms::Label());
			this->label_333 = (gcnew System::Windows::Forms::Label());
			this->label_233 = (gcnew System::Windows::Forms::Label());
			this->label_133 = (gcnew System::Windows::Forms::Label());
			this->box_control33 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_rotate = (gcnew System::Windows::Forms::Button());
			this->btn_giveup = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->pnl_welcome = (gcnew System::Windows::Forms::Panel());
			this->btn_4x4 = (gcnew System::Windows::Forms::Button());
			this->btn_3x3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->lbl_loading = (gcnew System::Windows::Forms::Label());
			this->pnl_loading = (gcnew System::Windows::Forms::Panel());
			this->pnl_game->SuspendLayout();
			this->gbox_44->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_boggle))->BeginInit();
			this->gbox_33->SuspendLayout();
			this->box_control33->SuspendLayout();
			this->pnl_welcome->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->pnl_loading->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_game
			// 
			this->pnl_game->Controls->Add(this->label3);
			this->pnl_game->Controls->Add(this->label2);
			this->pnl_game->Controls->Add(this->lbl_points);
			this->pnl_game->Controls->Add(this->lbl_wordsLeft);
			this->pnl_game->Controls->Add(this->gbox_44);
			this->pnl_game->Controls->Add(this->img_boggle);
			this->pnl_game->Controls->Add(this->label);
			this->pnl_game->Controls->Add(this->txtbox);
			this->pnl_game->Controls->Add(this->list_words);
			this->pnl_game->Controls->Add(this->gbox_33);
			this->pnl_game->Controls->Add(this->box_control33);
			this->pnl_game->Location = System::Drawing::Point(1, 3);
			this->pnl_game->Name = L"pnl_game";
			this->pnl_game->Size = System::Drawing::Size(609, 396);
			this->pnl_game->TabIndex = 0;
			this->pnl_game->Visible = false;
			this->pnl_game->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &boogleForm::pnl_game_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(492, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(480, 322);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"xx";
			// 
			// lbl_points
			// 
			this->lbl_points->AutoSize = true;
			this->lbl_points->Location = System::Drawing::Point(421, 340);
			this->lbl_points->Name = L"lbl_points";
			this->lbl_points->Size = System::Drawing::Size(76, 13);
			this->lbl_points->TabIndex = 14;
			this->lbl_points->Text = L"Current Points:";
			// 
			// lbl_wordsLeft
			// 
			this->lbl_wordsLeft->AutoSize = true;
			this->lbl_wordsLeft->Location = System::Drawing::Point(421, 322);
			this->lbl_wordsLeft->Name = L"lbl_wordsLeft";
			this->lbl_wordsLeft->Size = System::Drawing::Size(62, 13);
			this->lbl_wordsLeft->TabIndex = 13;
			this->lbl_wordsLeft->Text = L"Words Left:";
			// 
			// gbox_44
			// 
			this->gbox_44->Controls->Add(this->label_1644);
			this->gbox_44->Controls->Add(this->label_1544);
			this->gbox_44->Controls->Add(this->label_1444);
			this->gbox_44->Controls->Add(this->label_1344);
			this->gbox_44->Controls->Add(this->label_1244);
			this->gbox_44->Controls->Add(this->label_1144);
			this->gbox_44->Controls->Add(this->label_1044);
			this->gbox_44->Controls->Add(this->label_944);
			this->gbox_44->Controls->Add(this->label_844);
			this->gbox_44->Controls->Add(this->label_744);
			this->gbox_44->Controls->Add(this->label_644);
			this->gbox_44->Controls->Add(this->label_544);
			this->gbox_44->Controls->Add(this->label_444);
			this->gbox_44->Controls->Add(this->label_344);
			this->gbox_44->Controls->Add(this->label_244);
			this->gbox_44->Controls->Add(this->label_144);
			this->gbox_44->Location = System::Drawing::Point(60, 179);
			this->gbox_44->Name = L"gbox_44";
			this->gbox_44->Size = System::Drawing::Size(185, 178);
			this->gbox_44->TabIndex = 9;
			this->gbox_44->TabStop = false;
			this->gbox_44->Text = L"Board";
			this->gbox_44->Visible = false;
			// 
			// label_1644
			// 
			this->label_1644->AutoSize = true;
			this->label_1644->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_1644->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1644->Location = System::Drawing::Point(140, 130);
			this->label_1644->Name = L"label_1644";
			this->label_1644->Size = System::Drawing::Size(39, 38);
			this->label_1644->TabIndex = 15;
			this->label_1644->Text = L"A";
			// 
			// label_1544
			// 
			this->label_1544->AutoSize = true;
			this->label_1544->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_1544->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1544->Location = System::Drawing::Point(96, 130);
			this->label_1544->Name = L"label_1544";
			this->label_1544->Size = System::Drawing::Size(39, 38);
			this->label_1544->TabIndex = 14;
			this->label_1544->Text = L"A";
			// 
			// label_1444
			// 
			this->label_1444->AutoSize = true;
			this->label_1444->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_1444->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1444->Location = System::Drawing::Point(51, 130);
			this->label_1444->Name = L"label_1444";
			this->label_1444->Size = System::Drawing::Size(39, 38);
			this->label_1444->TabIndex = 13;
			this->label_1444->Text = L"A";
			// 
			// label_1344
			// 
			this->label_1344->AutoSize = true;
			this->label_1344->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_1344->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1344->Location = System::Drawing::Point(6, 130);
			this->label_1344->Name = L"label_1344";
			this->label_1344->Size = System::Drawing::Size(39, 38);
			this->label_1344->TabIndex = 12;
			this->label_1344->Text = L"A";
			// 
			// label_1244
			// 
			this->label_1244->AutoSize = true;
			this->label_1244->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_1244->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1244->Location = System::Drawing::Point(140, 92);
			this->label_1244->Name = L"label_1244";
			this->label_1244->Size = System::Drawing::Size(39, 38);
			this->label_1244->TabIndex = 11;
			this->label_1244->Text = L"A";
			// 
			// label_1144
			// 
			this->label_1144->AutoSize = true;
			this->label_1144->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_1144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1144->Location = System::Drawing::Point(96, 92);
			this->label_1144->Name = L"label_1144";
			this->label_1144->Size = System::Drawing::Size(39, 38);
			this->label_1144->TabIndex = 10;
			this->label_1144->Text = L"A";
			// 
			// label_1044
			// 
			this->label_1044->AutoSize = true;
			this->label_1044->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_1044->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1044->Location = System::Drawing::Point(51, 92);
			this->label_1044->Name = L"label_1044";
			this->label_1044->Size = System::Drawing::Size(39, 38);
			this->label_1044->TabIndex = 9;
			this->label_1044->Text = L"A";
			// 
			// label_944
			// 
			this->label_944->AutoSize = true;
			this->label_944->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_944->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_944->Location = System::Drawing::Point(6, 92);
			this->label_944->Name = L"label_944";
			this->label_944->Size = System::Drawing::Size(39, 38);
			this->label_944->TabIndex = 8;
			this->label_944->Text = L"A";
			// 
			// label_844
			// 
			this->label_844->AutoSize = true;
			this->label_844->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_844->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_844->Location = System::Drawing::Point(140, 54);
			this->label_844->Name = L"label_844";
			this->label_844->Size = System::Drawing::Size(39, 38);
			this->label_844->TabIndex = 7;
			this->label_844->Text = L"A";
			// 
			// label_744
			// 
			this->label_744->AutoSize = true;
			this->label_744->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_744->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_744->Location = System::Drawing::Point(96, 54);
			this->label_744->Name = L"label_744";
			this->label_744->Size = System::Drawing::Size(39, 38);
			this->label_744->TabIndex = 6;
			this->label_744->Text = L"A";
			// 
			// label_644
			// 
			this->label_644->AutoSize = true;
			this->label_644->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_644->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_644->Location = System::Drawing::Point(51, 54);
			this->label_644->Name = L"label_644";
			this->label_644->Size = System::Drawing::Size(39, 38);
			this->label_644->TabIndex = 5;
			this->label_644->Text = L"A";
			// 
			// label_544
			// 
			this->label_544->AutoSize = true;
			this->label_544->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_544->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_544->Location = System::Drawing::Point(6, 54);
			this->label_544->Name = L"label_544";
			this->label_544->Size = System::Drawing::Size(39, 38);
			this->label_544->TabIndex = 4;
			this->label_544->Text = L"A";
			// 
			// label_444
			// 
			this->label_444->AutoSize = true;
			this->label_444->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_444->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_444->Location = System::Drawing::Point(140, 16);
			this->label_444->Name = L"label_444";
			this->label_444->Size = System::Drawing::Size(39, 38);
			this->label_444->TabIndex = 3;
			this->label_444->Text = L"A";
			// 
			// label_344
			// 
			this->label_344->AutoSize = true;
			this->label_344->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_344->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_344->Location = System::Drawing::Point(96, 16);
			this->label_344->Name = L"label_344";
			this->label_344->Size = System::Drawing::Size(39, 38);
			this->label_344->TabIndex = 2;
			this->label_344->Text = L"A";
			// 
			// label_244
			// 
			this->label_244->AutoSize = true;
			this->label_244->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_244->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_244->Location = System::Drawing::Point(51, 16);
			this->label_244->Name = L"label_244";
			this->label_244->Size = System::Drawing::Size(39, 38);
			this->label_244->TabIndex = 1;
			this->label_244->Text = L"A";
			// 
			// label_144
			// 
			this->label_144->AutoSize = true;
			this->label_144->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_144->Location = System::Drawing::Point(6, 16);
			this->label_144->Name = L"label_144";
			this->label_144->Size = System::Drawing::Size(39, 38);
			this->label_144->TabIndex = 0;
			this->label_144->Text = L"A";
			// 
			// img_boggle
			// 
			this->img_boggle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_boggle.Image")));
			this->img_boggle->Location = System::Drawing::Point(26, 32);
			this->img_boggle->Name = L"img_boggle";
			this->img_boggle->Size = System::Drawing::Size(389, 101);
			this->img_boggle->TabIndex = 12;
			this->img_boggle->TabStop = false;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(57, 137);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(113, 13);
			this->label->TabIndex = 11;
			this->label->Text = L"Enter the desired word";
			// 
			// txtbox
			// 
			this->txtbox->Location = System::Drawing::Point(60, 153);
			this->txtbox->Name = L"txtbox";
			this->txtbox->Size = System::Drawing::Size(185, 20);
			this->txtbox->TabIndex = 10;
			// 
			// list_words
			// 
			this->list_words->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->list_words->FullRowSelect = true;
			this->list_words->HideSelection = false;
			this->list_words->Location = System::Drawing::Point(421, 32);
			this->list_words->Name = L"list_words";
			this->list_words->Size = System::Drawing::Size(161, 277);
			this->list_words->TabIndex = 9;
			this->list_words->UseCompatibleStateImageBehavior = false;
			this->list_words->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Word";
			this->columnHeader1->Width = 95;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Points";
			this->columnHeader2->Width = 62;
			// 
			// gbox_33
			// 
			this->gbox_33->Controls->Add(this->label_933);
			this->gbox_33->Controls->Add(this->label_833);
			this->gbox_33->Controls->Add(this->label_733);
			this->gbox_33->Controls->Add(this->label_633);
			this->gbox_33->Controls->Add(this->label_533);
			this->gbox_33->Controls->Add(this->label_433);
			this->gbox_33->Controls->Add(this->label_333);
			this->gbox_33->Controls->Add(this->label_233);
			this->gbox_33->Controls->Add(this->label_133);
			this->gbox_33->Location = System::Drawing::Point(60, 179);
			this->gbox_33->Name = L"gbox_33";
			this->gbox_33->Size = System::Drawing::Size(185, 178);
			this->gbox_33->TabIndex = 8;
			this->gbox_33->TabStop = false;
			this->gbox_33->Text = L"Board";
			this->gbox_33->Visible = false;
			// 
			// label_933
			// 
			this->label_933->AutoSize = true;
			this->label_933->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_933->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_933->Location = System::Drawing::Point(124, 120);
			this->label_933->Name = L"label_933";
			this->label_933->Size = System::Drawing::Size(55, 54);
			this->label_933->TabIndex = 8;
			this->label_933->Text = L"A";
			// 
			// label_833
			// 
			this->label_833->AutoSize = true;
			this->label_833->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_833->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_833->Location = System::Drawing::Point(65, 120);
			this->label_833->Name = L"label_833";
			this->label_833->Size = System::Drawing::Size(55, 54);
			this->label_833->TabIndex = 7;
			this->label_833->Text = L"A";
			// 
			// label_733
			// 
			this->label_733->AutoSize = true;
			this->label_733->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_733->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_733->Location = System::Drawing::Point(6, 120);
			this->label_733->Name = L"label_733";
			this->label_733->Size = System::Drawing::Size(55, 54);
			this->label_733->TabIndex = 6;
			this->label_733->Text = L"A";
			// 
			// label_633
			// 
			this->label_633->AutoSize = true;
			this->label_633->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_633->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_633->Location = System::Drawing::Point(124, 68);
			this->label_633->Name = L"label_633";
			this->label_633->Size = System::Drawing::Size(55, 54);
			this->label_633->TabIndex = 5;
			this->label_633->Text = L"A";
			// 
			// label_533
			// 
			this->label_533->AutoSize = true;
			this->label_533->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_533->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_533->Location = System::Drawing::Point(65, 68);
			this->label_533->Name = L"label_533";
			this->label_533->Size = System::Drawing::Size(55, 54);
			this->label_533->TabIndex = 4;
			this->label_533->Text = L"A";
			// 
			// label_433
			// 
			this->label_433->AutoSize = true;
			this->label_433->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_433->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_433->Location = System::Drawing::Point(6, 68);
			this->label_433->Name = L"label_433";
			this->label_433->Size = System::Drawing::Size(55, 54);
			this->label_433->TabIndex = 3;
			this->label_433->Text = L"A";
			// 
			// label_333
			// 
			this->label_333->AutoSize = true;
			this->label_333->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_333->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_333->Location = System::Drawing::Point(124, 16);
			this->label_333->Name = L"label_333";
			this->label_333->Size = System::Drawing::Size(55, 54);
			this->label_333->TabIndex = 2;
			this->label_333->Text = L"A";
			// 
			// label_233
			// 
			this->label_233->AutoSize = true;
			this->label_233->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_233->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_233->Location = System::Drawing::Point(65, 16);
			this->label_233->Name = L"label_233";
			this->label_233->Size = System::Drawing::Size(55, 54);
			this->label_233->TabIndex = 1;
			this->label_233->Text = L"A";
			// 
			// label_133
			// 
			this->label_133->AutoSize = true;
			this->label_133->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label_133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_133->Location = System::Drawing::Point(6, 16);
			this->label_133->Name = L"label_133";
			this->label_133->Size = System::Drawing::Size(55, 54);
			this->label_133->TabIndex = 0;
			this->label_133->Text = L"A";
			// 
			// box_control33
			// 
			this->box_control33->Controls->Add(this->btn_rotate);
			this->box_control33->Controls->Add(this->btn_giveup);
			this->box_control33->Controls->Add(this->btn_clear);
			this->box_control33->Controls->Add(this->btn_submit);
			this->box_control33->Location = System::Drawing::Point(251, 179);
			this->box_control33->Name = L"box_control33";
			this->box_control33->Size = System::Drawing::Size(101, 178);
			this->box_control33->TabIndex = 7;
			this->box_control33->TabStop = false;
			this->box_control33->Text = L"Controls";
			// 
			// btn_rotate
			// 
			this->btn_rotate->Location = System::Drawing::Point(7, 136);
			this->btn_rotate->Name = L"btn_rotate";
			this->btn_rotate->Size = System::Drawing::Size(88, 33);
			this->btn_rotate->TabIndex = 3;
			this->btn_rotate->Text = L"Rotate";
			this->btn_rotate->UseVisualStyleBackColor = true;
			this->btn_rotate->Click += gcnew System::EventHandler(this, &boogleForm::btn_rotate_Click);
			// 
			// btn_giveup
			// 
			this->btn_giveup->Location = System::Drawing::Point(7, 97);
			this->btn_giveup->Name = L"btn_giveup";
			this->btn_giveup->Size = System::Drawing::Size(88, 33);
			this->btn_giveup->TabIndex = 2;
			this->btn_giveup->Text = L"Give Up";
			this->btn_giveup->UseVisualStyleBackColor = true;
			this->btn_giveup->Click += gcnew System::EventHandler(this, &boogleForm::btn_giveup_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(7, 58);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(88, 33);
			this->btn_clear->TabIndex = 1;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &boogleForm::btn_clear_Click);
			// 
			// btn_submit
			// 
			this->btn_submit->Location = System::Drawing::Point(7, 19);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(88, 33);
			this->btn_submit->TabIndex = 0;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = true;
			this->btn_submit->Click += gcnew System::EventHandler(this, &boogleForm::btn_submit_Click);
			// 
			// pnl_welcome
			// 
			this->pnl_welcome->Controls->Add(this->btn_4x4);
			this->pnl_welcome->Controls->Add(this->btn_3x3);
			this->pnl_welcome->Controls->Add(this->label1);
			this->pnl_welcome->Location = System::Drawing::Point(1, 0);
			this->pnl_welcome->Name = L"pnl_welcome";
			this->pnl_welcome->Size = System::Drawing::Size(609, 396);
			this->pnl_welcome->TabIndex = 13;
			// 
			// btn_4x4
			// 
			this->btn_4x4->Location = System::Drawing::Point(368, 276);
			this->btn_4x4->Name = L"btn_4x4";
			this->btn_4x4->Size = System::Drawing::Size(124, 36);
			this->btn_4x4->TabIndex = 2;
			this->btn_4x4->Text = L"4x4";
			this->btn_4x4->UseVisualStyleBackColor = true;
			this->btn_4x4->Click += gcnew System::EventHandler(this, &boogleForm::btn_4x4_Click);
			// 
			// btn_3x3
			// 
			this->btn_3x3->Location = System::Drawing::Point(114, 276);
			this->btn_3x3->Name = L"btn_3x3";
			this->btn_3x3->Size = System::Drawing::Size(124, 36);
			this->btn_3x3->TabIndex = 1;
			this->btn_3x3->Text = L"3x3";
			this->btn_3x3->UseVisualStyleBackColor = true;
			this->btn_3x3->Click += gcnew System::EventHandler(this, &boogleForm::btn_3x3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(531, 107);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME";
			// 
			// lbl_loading
			// 
			this->lbl_loading->AutoSize = true;
			this->lbl_loading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_loading->Location = System::Drawing::Point(98, 134);
			this->lbl_loading->Name = L"lbl_loading";
			this->lbl_loading->Size = System::Drawing::Size(456, 107);
			this->lbl_loading->TabIndex = 0;
			this->lbl_loading->Text = L"Loading...";
			// 
			// pnl_loading
			// 
			this->pnl_loading->Controls->Add(this->lbl_loading);
			this->pnl_loading->Location = System::Drawing::Point(787, 3);
			this->pnl_loading->Name = L"pnl_loading";
			this->pnl_loading->Size = System::Drawing::Size(614, 397);
			this->pnl_loading->TabIndex = 14;
			this->pnl_loading->Visible = false;
			// 
			// boogleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 397);
			this->Controls->Add(this->pnl_loading);
			this->Controls->Add(this->pnl_welcome);
			this->Controls->Add(this->pnl_game);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"boogleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Boggle";
			this->Load += gcnew System::EventHandler(this, &boogleForm::boogleForm_Load);
			this->pnl_game->ResumeLayout(false);
			this->pnl_game->PerformLayout();
			this->gbox_44->ResumeLayout(false);
			this->gbox_44->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_boggle))->EndInit();
			this->gbox_33->ResumeLayout(false);
			this->gbox_33->PerformLayout();
			this->box_control33->ResumeLayout(false);
			this->pnl_welcome->ResumeLayout(false);
			this->pnl_welcome->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->pnl_loading->ResumeLayout(false);
			this->pnl_loading->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool is3x3 = false;
		

	private: System::Void boogleForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_submit_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string word = msclr::interop::marshal_as<std::string>(txtbox->Text);
		int points = word.size();
		bool found = false;
		if (is3x3) {
			std::transform(word.begin(), word.end(), word.begin(), ::tolower);
			found = g3x3.wordIsInBoard(word);
		}
		else {
			std::transform(word.begin(), word.end(), word.begin(), ::toupper);
			found = root->wordIsInBoard(word);
		}

		if (found) {
			ListViewItem^ lvWord = gcnew ListViewItem(txtbox->Text->ToLower());
			
			// Calculate points
			// Display correct number of words found and words to be found
			lvWord->SubItems->Add(System::Convert::ToString(points));
			list_words->Items->Add(lvWord);
			totalWords--;
			label2->Text = System::Convert::ToString(totalWords);
			totalPoints += points;
			label3->Text = System::Convert::ToString(totalPoints);
			
		}
		txtbox->Clear();
		
	}
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		txtbox->Clear();
		
	}
	private: System::Void btn_giveup_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> notFound;
		if (is3x3) {
			notFound = g3x3.sendRemaining();
		}
		else {
			notFound = root->sendRemaining();
		}
		for each (std::string w in notFound){
			std::transform(w.begin(), w.end(), w.begin(), ::tolower);
			ListViewItem^ lvWord = gcnew ListViewItem(gcnew String(w.c_str()));
			list_words->Items->Add(lvWord);
			lvWord->SubItems->Add(System::Convert::ToString("NA"));
			label2->Text = System::Convert::ToString(0);
			
		}
	}
	private: System::Void btn_rotate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (is3x3) {
			update3x3Board();
		}
		else {
			update4x4Board();
		}
		label3->Text = "0";
		totalPoints = 0;
		list_words->Items->Clear();
		txtbox->Clear();
	}

	private: System::Void btn_3x3_Click(System::Object^ sender, System::EventArgs^ e) {
		//pnl_loading->Visible = true;
		pnl_welcome->Visible = false;
		gbox_33->Visible = true;
		pnl_game->Visible = true;
		is3x3 = true;
		update3x3Board();
		label3->Text = "0";
		totalPoints = 0;
		list_words->Items->Clear();
		txtbox->Clear();

	}
	private: System::Void btn_4x4_Click(System::Object^ sender, System::EventArgs^ e) {
		gbox_44->Visible = true;
		pnl_game->Visible = true;
		pnl_welcome->Visible = false;
		is3x3 = false;
		update4x4Board();
		label3->Text = "0";
		totalPoints = 0;
		list_words->Items->Clear();
		txtbox->Clear();
	}





private: System::Void pnl_game_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};

		void boogleForm::update4x4Board() {
			std::string letter;
			for (int i = 0; i < 17; i++) {
				int random = rand() % 6;
				letter = config4x4[i].at(random);
				nodes[i].setData(letter);
			}
			label_144->Text = gcnew String(nodes[0].getData().c_str());
			label_244->Text = gcnew String(nodes[1].getData().c_str());
			label_344->Text = gcnew String(nodes[2].getData().c_str());
			label_444->Text = gcnew String(nodes[3].getData().c_str());
			label_544->Text = gcnew String(nodes[4].getData().c_str());
			label_644->Text = gcnew String(nodes[5].getData().c_str());
			label_744->Text = gcnew String(nodes[6].getData().c_str());
			label_844->Text = gcnew String(nodes[7].getData().c_str());
			label_944->Text = gcnew String(nodes[8].getData().c_str());
			label_1044->Text = gcnew String(nodes[9].getData().c_str());
			label_1144->Text = gcnew String(nodes[10].getData().c_str());
			label_1244->Text = gcnew String(nodes[11].getData().c_str());
			label_1344->Text = gcnew String(nodes[12].getData().c_str());
			label_1444->Text = gcnew String(nodes[13].getData().c_str());
			label_1544->Text = gcnew String(nodes[14].getData().c_str());
			label_1644->Text = gcnew String(nodes[15].getData().c_str());
			
			char* charArray = new char[16];
			for (int i = 0; i < 16; i++) {
				std::string str = nodes[i].getData();
				const char* cstr = str.c_str();
				char c = cstr[0];

				charArray[i] = c;
			}
			char boggle[4][4] = { {charArray[0], charArray[1], charArray[2] ,charArray[3]},
								  {charArray[4], charArray[5], charArray[6], charArray[7]},
								  {charArray[8], charArray[9], charArray[10], charArray[11]},
								  {charArray[12], charArray[13], charArray[14] , charArray[15]}
			};
			root->leaf = false;
			for (int i = 0; i < sizeAlph; i++)
				root->Child[i] = NULL;

			std::vector<std::string> arrDic = root->loadDic();
			int n = arrDic.size();

			for (int i = 0; i < n; i++)
				root->insert(root, arrDic[i]);

			totalWords = root->findWords(boggle, root);
			label2->Text = System::Convert::ToString(totalWords);
		}

		void boogleForm::update3x3Board() {
			std::string letter = "a";
			for (int i = 0; i < 10; i++) {
				int random = rand() % 6;
				letter = config3x3[i].at(random);
				nodes[i].setData(letter);
			}
			label_133->Text = gcnew String(nodes[0].getData().c_str());
			label_233->Text = gcnew String(nodes[1].getData().c_str());
			label_333->Text = gcnew String(nodes[2].getData().c_str());
			label_433->Text = gcnew String(nodes[3].getData().c_str());
			label_533->Text = gcnew String(nodes[4].getData().c_str());
			label_633->Text = gcnew String(nodes[5].getData().c_str());
			label_733->Text = gcnew String(nodes[6].getData().c_str());
			label_833->Text = gcnew String(nodes[7].getData().c_str());
			label_933->Text = gcnew String(nodes[8].getData().c_str());
			totalWords = g3x3.findAllWords();
			label2->Text = System::Convert::ToString(totalWords);
		}
}