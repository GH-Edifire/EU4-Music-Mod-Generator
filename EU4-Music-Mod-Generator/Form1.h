#include <filesystem>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#pragma once

namespace EU4MusicModGenerator {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::IO::Compression;

	/// <summary>
	/// EU4 Music Mod Generator. Place in .ogg files and it will create mod files for you to place in the game's mod directory.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listViewMusic;


	private: System::Windows::Forms::ColumnHeader^ ch_name;
	private: System::Windows::Forms::ColumnHeader^ ch_filePath;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ warOptionsCheck;
	private: System::Windows::Forms::Label^ generalLabel;
	private: System::Windows::Forms::Label^ peaceLabel;
	private: System::Windows::Forms::Label^ warLabel;




	private: System::Windows::Forms::NumericUpDown^ generalModifierUpDown;
	private: System::Windows::Forms::NumericUpDown^ peaceModifierUpDown;
	private: System::Windows::Forms::NumericUpDown^ warModifierUpDown;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ inputModName;
	private: System::Windows::Forms::TextBox^ inputPlaylistName;
	private: System::Windows::Forms::TextBox^ inputGameVersion;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RichTextBox^ outputTextBox;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ColumnHeader^ ch_warOptions;
	private: System::Windows::Forms::ColumnHeader^ ch_generalModifier;
	private: System::Windows::Forms::ColumnHeader^ ch_peaceModifier;
	private: System::Windows::Forms::ColumnHeader^ ch_warModifier;
	private: System::Windows::Forms::Label^ folderPath;
	private: System::Windows::Forms::ProgressBar^ progressBarLoading;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;



	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listViewMusic = (gcnew System::Windows::Forms::ListView());
			this->ch_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_generalModifier = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_warOptions = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_peaceModifier = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_warModifier = (gcnew System::Windows::Forms::ColumnHeader());
			this->ch_filePath = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->warOptionsCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generalLabel = (gcnew System::Windows::Forms::Label());
			this->peaceLabel = (gcnew System::Windows::Forms::Label());
			this->warLabel = (gcnew System::Windows::Forms::Label());
			this->generalModifierUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->peaceModifierUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->warModifierUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->inputModName = (gcnew System::Windows::Forms::TextBox());
			this->inputPlaylistName = (gcnew System::Windows::Forms::TextBox());
			this->inputGameVersion = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->outputTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderPath = (gcnew System::Windows::Forms::Label());
			this->progressBarLoading = (gcnew System::Windows::Forms::ProgressBar());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->generalModifierUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->peaceModifierUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->warModifierUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(187, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Open Folder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(197, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Music Files";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::Label1_Click);
			// 
			// listViewMusic
			// 
			this->listViewMusic->AllowDrop = true;
			this->listViewMusic->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->ch_name, this->ch_generalModifier,
					this->ch_warOptions, this->ch_peaceModifier, this->ch_warModifier, this->ch_filePath
			});
			this->listViewMusic->FullRowSelect = true;
			this->listViewMusic->GridLines = true;
			this->listViewMusic->HideSelection = false;
			this->listViewMusic->LabelEdit = true;
			this->listViewMusic->Location = System::Drawing::Point(12, 59);
			this->listViewMusic->Name = L"listViewMusic";
			this->listViewMusic->Size = System::Drawing::Size(473, 400);
			this->listViewMusic->TabIndex = 4;
			this->listViewMusic->UseCompatibleStateImageBehavior = false;
			this->listViewMusic->View = System::Windows::Forms::View::Details;
			this->listViewMusic->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::ListView1_SelectedIndexChanged);
			this->listViewMusic->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::ListViewMusic_DragDrop);
			this->listViewMusic->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::ListViewMusic_DragEnter);
			this->listViewMusic->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::ListViewMusic_KeyDown);
			// 
			// ch_name
			// 
			this->ch_name->Text = L"Name";
			this->ch_name->Width = 136;
			// 
			// ch_generalModifier
			// 
			this->ch_generalModifier->Text = L"General Modifier";
			this->ch_generalModifier->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ch_generalModifier->Width = 95;
			// 
			// ch_warOptions
			// 
			this->ch_warOptions->Text = L"War Options";
			this->ch_warOptions->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ch_warOptions->Width = 80;
			// 
			// ch_peaceModifier
			// 
			this->ch_peaceModifier->Text = L"Peace Modifier";
			this->ch_peaceModifier->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ch_peaceModifier->Width = 86;
			// 
			// ch_warModifier
			// 
			this->ch_warModifier->Text = L"War Modifier";
			this->ch_warModifier->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ch_warModifier->Width = 86;
			// 
			// ch_filePath
			// 
			this->ch_filePath->Text = L"File Path";
			this->ch_filePath->Width = 150;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(613, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Options";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::Label2_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(659, 465);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 50);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Create Mod";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
			// 
			// warOptionsCheck
			// 
			this->warOptionsCheck->AutoSize = true;
			this->warOptionsCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warOptionsCheck->Location = System::Drawing::Point(589, 59);
			this->warOptionsCheck->Name = L"warOptionsCheck";
			this->warOptionsCheck->Size = System::Drawing::Size(110, 20);
			this->warOptionsCheck->TabIndex = 7;
			this->warOptionsCheck->Text = L"War Modifiers";
			this->warOptionsCheck->UseVisualStyleBackColor = true;
			this->warOptionsCheck->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox1_CheckedChanged);
			// 
			// generalLabel
			// 
			this->generalLabel->AutoSize = true;
			this->generalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generalLabel->Location = System::Drawing::Point(505, 91);
			this->generalLabel->Name = L"generalLabel";
			this->generalLabel->Size = System::Drawing::Size(130, 20);
			this->generalLabel->TabIndex = 8;
			this->generalLabel->Text = L"General Modifier:";
			this->toolTip1->SetToolTip(this->generalLabel, L"Default is 1.0");
			this->generalLabel->Click += gcnew System::EventHandler(this, &Form1::Label3_Click);
			// 
			// peaceLabel
			// 
			this->peaceLabel->AutoSize = true;
			this->peaceLabel->Enabled = false;
			this->peaceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peaceLabel->Location = System::Drawing::Point(517, 126);
			this->peaceLabel->Name = L"peaceLabel";
			this->peaceLabel->Size = System::Drawing::Size(118, 20);
			this->peaceLabel->TabIndex = 9;
			this->peaceLabel->Text = L"Peace Modifier:";
			this->peaceLabel->Click += gcnew System::EventHandler(this, &Form1::Label4_Click);
			// 
			// warLabel
			// 
			this->warLabel->AutoSize = true;
			this->warLabel->Enabled = false;
			this->warLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warLabel->Location = System::Drawing::Point(533, 159);
			this->warLabel->Name = L"warLabel";
			this->warLabel->Size = System::Drawing::Size(102, 20);
			this->warLabel->TabIndex = 10;
			this->warLabel->Text = L"War Modifier:";
			this->warLabel->Click += gcnew System::EventHandler(this, &Form1::Label5_Click);
			// 
			// generalModifierUpDown
			// 
			this->generalModifierUpDown->DecimalPlaces = 1;
			this->generalModifierUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->generalModifierUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->generalModifierUpDown->Location = System::Drawing::Point(641, 91);
			this->generalModifierUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->generalModifierUpDown->Name = L"generalModifierUpDown";
			this->generalModifierUpDown->Size = System::Drawing::Size(120, 21);
			this->generalModifierUpDown->TabIndex = 11;
			this->generalModifierUpDown->ValueChanged += gcnew System::EventHandler(this, &Form1::NumericUpDown1_ValueChanged);
			// 
			// peaceModifierUpDown
			// 
			this->peaceModifierUpDown->DecimalPlaces = 1;
			this->peaceModifierUpDown->Enabled = false;
			this->peaceModifierUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->peaceModifierUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->peaceModifierUpDown->Location = System::Drawing::Point(641, 125);
			this->peaceModifierUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->peaceModifierUpDown->Name = L"peaceModifierUpDown";
			this->peaceModifierUpDown->Size = System::Drawing::Size(120, 21);
			this->peaceModifierUpDown->TabIndex = 12;
			this->peaceModifierUpDown->ValueChanged += gcnew System::EventHandler(this, &Form1::NumericUpDown2_ValueChanged);
			// 
			// warModifierUpDown
			// 
			this->warModifierUpDown->DecimalPlaces = 1;
			this->warModifierUpDown->Enabled = false;
			this->warModifierUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warModifierUpDown->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->warModifierUpDown->Location = System::Drawing::Point(641, 160);
			this->warModifierUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->warModifierUpDown->Name = L"warModifierUpDown";
			this->warModifierUpDown->Size = System::Drawing::Size(120, 21);
			this->warModifierUpDown->TabIndex = 13;
			this->warModifierUpDown->ValueChanged += gcnew System::EventHandler(this, &Form1::NumericUpDown3_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(517, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Mod Name:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(517, 256);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Playlist Name:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(517, 300);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Game Version:";
			// 
			// inputModName
			// 
			this->inputModName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputModName->Location = System::Drawing::Point(607, 215);
			this->inputModName->Name = L"inputModName";
			this->inputModName->Size = System::Drawing::Size(154, 22);
			this->inputModName->TabIndex = 17;
			this->inputModName->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox1_TextChanged);
			// 
			// inputPlaylistName
			// 
			this->inputPlaylistName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inputPlaylistName->Location = System::Drawing::Point(630, 256);
			this->inputPlaylistName->Name = L"inputPlaylistName";
			this->inputPlaylistName->Size = System::Drawing::Size(131, 22);
			this->inputPlaylistName->TabIndex = 18;
			this->inputPlaylistName->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox2_TextChanged);
			// 
			// inputGameVersion
			// 
			this->inputGameVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inputGameVersion->Location = System::Drawing::Point(630, 300);
			this->inputGameVersion->Name = L"inputGameVersion";
			this->inputGameVersion->Size = System::Drawing::Size(131, 22);
			this->inputGameVersion->TabIndex = 19;
			this->inputGameVersion->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox3_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(517, 367);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Mod Output Location:";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::Label9_Click);
			// 
			// outputTextBox
			// 
			this->outputTextBox->DetectUrls = false;
			this->outputTextBox->Location = System::Drawing::Point(519, 390);
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->Size = System::Drawing::Size(240, 69);
			this->outputTextBox->TabIndex = 21;
			this->outputTextBox->Text = L"";
			this->outputTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::RichTextBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(519, 465);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 50);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Output Folder";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::Button3_Click);
			// 
			// folderPath
			// 
			this->folderPath->AutoSize = true;
			this->folderPath->Location = System::Drawing::Point(12, 536);
			this->folderPath->Name = L"folderPath";
			this->folderPath->Size = System::Drawing::Size(0, 13);
			this->folderPath->TabIndex = 23;
			this->folderPath->Click += gcnew System::EventHandler(this, &Form1::FolderPath_Click);
			// 
			// progressBarLoading
			// 
			this->progressBarLoading->Location = System::Drawing::Point(521, 526);
			this->progressBarLoading->Name = L"progressBarLoading";
			this->progressBarLoading->Size = System::Drawing::Size(237, 23);
			this->progressBarLoading->TabIndex = 24;
			this->progressBarLoading->Click += gcnew System::EventHandler(this, &Form1::ProgressBarLoading_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 250;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->progressBarLoading);
			this->Controls->Add(this->folderPath);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->outputTextBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->inputGameVersion);
			this->Controls->Add(this->inputPlaylistName);
			this->Controls->Add(this->inputModName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->warModifierUpDown);
			this->Controls->Add(this->peaceModifierUpDown);
			this->Controls->Add(this->generalModifierUpDown);
			this->Controls->Add(this->warLabel);
			this->Controls->Add(this->peaceLabel);
			this->Controls->Add(this->generalLabel);
			this->Controls->Add(this->warOptionsCheck);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listViewMusic);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"EU4 Music Mod Generator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->generalModifierUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->peaceModifierUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->warModifierUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	// Default Options
	inputModName->Text = "Custom Music Mod";
	inputPlaylistName->Text = "CUST";
	inputGameVersion->Text = "1.28.*.*";
}
// Music Files Label
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
// Select an item, displays modifiers on the right
private: System::Void ListView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listViewMusic->SelectedItems->Count > 0) {
		if (listViewMusic->SelectedItems[0]->SubItems[2]->Text->Equals("yes")) {
			warOptionsCheck->Checked = true;
			generalModifierUpDown->Enabled = false;
			generalLabel->Enabled = false;
			peaceModifierUpDown->Enabled = true;
			peaceLabel->Enabled = true;
			warModifierUpDown->Enabled = true;
			warLabel->Enabled = true;
		}
		else {
			warOptionsCheck->Checked = false;
			generalModifierUpDown->Enabled = true;
			generalLabel->Enabled = true;
			peaceModifierUpDown->Enabled = false;
			peaceLabel->Enabled = false;
			warModifierUpDown->Enabled = false;
			warLabel->Enabled = false;
		}
		generalModifierUpDown->Value = System::Convert::ToDecimal(listViewMusic->SelectedItems[0]->SubItems[1]->Text);
		peaceModifierUpDown->Value = System::Convert::ToDecimal(listViewMusic->SelectedItems[0]->SubItems[3]->Text);
		warModifierUpDown->Value = System::Convert::ToDecimal(listViewMusic->SelectedItems[0]->SubItems[4]->Text);
	}
}
// Options Label
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
// War Options Check
private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listViewMusic->SelectedItems->Count > 0) {
		if (warOptionsCheck->Checked) {
			//listViewMusic->SelectedItems[0]->SubItems[2]->Text = "yes";
			generalModifierUpDown->Enabled = false;
			generalLabel->Enabled = false;
			peaceModifierUpDown->Enabled = true;
			peaceLabel->Enabled = true;
			warModifierUpDown->Enabled = true;
			warLabel->Enabled = true;
			generalModifierUpDown->Value = 0;
		}
		else {
			//listViewMusic->SelectedItems[0]->SubItems[2]->Text = "no";
			generalModifierUpDown->Enabled = true;
			generalLabel->Enabled = true;
			peaceModifierUpDown->Enabled = false;
			peaceLabel->Enabled = false;
			warModifierUpDown->Enabled = false;
			warLabel->Enabled = false;
			peaceModifierUpDown->Value = 0;
			warModifierUpDown->Value = 0;
		}
		for (int i = 0; i < listViewMusic->SelectedItems->Count; i++) {
			if (warOptionsCheck->Checked) {
				listViewMusic->SelectedItems[i]->SubItems[2]->Text = "yes";
			}
			else {
				listViewMusic->SelectedItems[i]->SubItems[2]->Text = "no";
			}
		}
	}
}
// General Label
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
// Peace Label
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
// War Label
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
// General Modifier NumbericUpDown
private: System::Void NumericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < listViewMusic->SelectedItems->Count; i++) {
		if (warOptionsCheck->Checked) {
			listViewMusic->SelectedItems[i]->SubItems[1]->Text = System::Convert::ToString(0);
		}
		else {
			listViewMusic->SelectedItems[i]->SubItems[3]->Text = System::Convert::ToString(0);
			listViewMusic->SelectedItems[i]->SubItems[4]->Text = System::Convert::ToString(0);
			listViewMusic->SelectedItems[i]->SubItems[1]->Text = System::Convert::ToString(generalModifierUpDown->Value);
		}
	}
}
// Peace Modifier NumbericUpDown
private: System::Void NumericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < listViewMusic->SelectedItems->Count; i++) {
		if (warOptionsCheck->Checked) {
			listViewMusic->SelectedItems[i]->SubItems[1]->Text = System::Convert::ToString(0);
			listViewMusic->SelectedItems[i]->SubItems[3]->Text = System::Convert::ToString(peaceModifierUpDown->Value);
		}
		else {
			listViewMusic->SelectedItems[i]->SubItems[3]->Text = System::Convert::ToString(0);
		}
	}
}
// War Modifier NumbericUpDown
private: System::Void NumericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < listViewMusic->SelectedItems->Count; i++) {
		if (warOptionsCheck->Checked) {
			listViewMusic->SelectedItems[i]->SubItems[1]->Text = System::Convert::ToString(0);
			listViewMusic->SelectedItems[i]->SubItems[4]->Text = System::Convert::ToString(warModifierUpDown->Value);
		}
		else {
			listViewMusic->SelectedItems[i]->SubItems[4]->Text = System::Convert::ToString(0);
		}
	}
}
// Input Mod Name
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Saved value to inputModName
}
// Input Internal Mod Playlist Name
private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Saved value to inputPlaylistName
}
// Input Game Version
private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Save value to inputGameVersion
}
// Load folder
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	FolderBrowserDialog^ fbd = gcnew FolderBrowserDialog();
	if (fbd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		folderPath->Text = fbd->SelectedPath;
		array<String^>^ files = Directory::GetFiles(fbd->SelectedPath);

		for (int i = 0; i < files->Length; i++) {
			if (Path::GetExtension(files[i])->Equals(".ogg")) {
				ListViewItem^ lvEntry = gcnew ListViewItem(Path::GetFileNameWithoutExtension(files[i]), 0);
				lvEntry->SubItems->Add("1.0");
				lvEntry->SubItems->Add("no");
				lvEntry->SubItems->Add("0");
				lvEntry->SubItems->Add("0");
				lvEntry->SubItems->Add(files[i]);
				listViewMusic->Items->Add(lvEntry);
			}
		}
	}
}
// Select Output Folder
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	FolderBrowserDialog^ fbd = gcnew FolderBrowserDialog();
	if (fbd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		outputTextBox->Text = fbd->SelectedPath;
	}
}
// Create Mod
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listViewMusic->Items->Count == 0) {
		System::Windows::Forms::MessageBox::Show("Error: No audio files inputted.", "EU4 Music Mod Generator", System::Windows::Forms::MessageBoxButtons::OK);
		return;
	}
	else if (outputTextBox->TextLength <= 0) {
		System::Windows::Forms::MessageBox::Show("Error: No output directory.", "EU4 Music Mod Generator", System::Windows::Forms::MessageBoxButtons::OK);
		return;
	}
	else if (outputTextBox->TextLength > 0) {

		String^ modName = "\\" + inputModName->Text;
		String^ playlistName = "\\" + inputPlaylistName->Text;
		String^ gameVersion = "\\" + inputGameVersion->Text;

		String^ modDirectory = outputTextBox->Text + modName;
		String^ modMusic = modDirectory+"\\music";
		String^ descriptor = "\\descriptor.mod";

		Directory::CreateDirectory(modDirectory);
		Directory::CreateDirectory(modMusic);

		StreamWriter^ sw = File::CreateText(modDirectory + descriptor);
		sw->WriteLine("name=\""+inputModName->Text+"\"");
		sw->WriteLine("archive=\"mod/"+inputPlaylistName->Text+".zip\"");
		sw->WriteLine("tags={");
		sw->WriteLine("\t\"Sound\"");
		sw->WriteLine("\t\"Music\"");
		sw->WriteLine("}");
		sw->WriteLine("picture=\"none.jpg\"");
		sw->WriteLine("supported_version=\""+inputGameVersion->Text+"\"");
		sw->Close();
		File::Copy(modDirectory + descriptor, outputTextBox->Text+modName+".mod",true);

		sw = File::CreateText(modMusic + playlistName + "\.txt");
		StreamWriter^ sw2 = File::CreateText(modMusic + playlistName + "\.asset");
		int musicCount = listViewMusic->Items->Count;
		for (int i = 0; i < musicCount; i++) {
			File::Copy(listViewMusic->Items[i]->SubItems[5]->Text, modMusic+"\\"+ listViewMusic->Items[i]->SubItems[0]->Text+".ogg",true);
			if (listViewMusic->Items[i]->SubItems[2]->Text->Equals("yes")) {
				sw->WriteLine("song = {");
				sw->WriteLine("\tname = \""+ listViewMusic->Items[i]->SubItems[0]->Text+"\"");
				sw->WriteLine("\tchance = {");
				sw->WriteLine("\t\tmodifier = {");
				sw->WriteLine("\t\t\tfactor = " + listViewMusic->Items[i]->SubItems[3]->Text);
				sw->WriteLine("\t\t\tis_at_war = no");
				sw->WriteLine("\t\t}");
				sw->WriteLine("\t\tmodifier = {");
				sw->WriteLine("\t\t\tfactor = " + listViewMusic->Items[i]->SubItems[4]->Text);
				sw->WriteLine("\t\t\tis_at_war = yes");
				sw->WriteLine("\t\t}");
				sw->WriteLine("\t}");
				sw->WriteLine("}");
				sw->WriteLine();
			}
			else
			{
				sw->WriteLine("song = {");
				sw->WriteLine("\tname = \"" + listViewMusic->Items[i]->SubItems[0]->Text + "\"");
				sw->WriteLine("\tchance = {");
				sw->WriteLine("\t\tmodifier = {");
				sw->WriteLine("\t\t\tfactor = " + listViewMusic->Items[i]->SubItems[1]->Text);
				sw->WriteLine("\t\t}");
				sw->WriteLine("\t}");
				sw->WriteLine("}");
				sw->WriteLine();
			}
			sw2->WriteLine("music = {");
			sw2->WriteLine("\tname = \"" + listViewMusic->Items[i]->SubItems[0]->Text + "\"");
			sw2->WriteLine("\tfile = \"" + listViewMusic->Items[i]->SubItems[0]->Text + ".ogg\"");
			sw2->WriteLine("}");
			progressBarLoading->Increment(1 / musicCount);
		}
		sw->Close();
		sw2->Close();
		if (File::Exists(outputTextBox->Text + ".\\" + modName + ".zip")) {
			File::Delete(outputTextBox->Text + ".\\" + modName + ".zip");
		}
		ZipFile::CreateFromDirectory(modDirectory, outputTextBox->Text+".\\"+ modName +".zip");
		progressBarLoading->Increment(100);
		if (System::Windows::Forms::MessageBox::Show("Mod Successfully Created!","EU4 Music Mod Generator", System::Windows::Forms::MessageBoxButtons::OK)
			== System::Windows::Forms::DialogResult::OK) {
			progressBarLoading->Value = 0;
		}

		sw = File::CreateText(outputTextBox->Text +"\\Installation Instructions\.txt");
		sw->WriteLine("Place " + inputModName->Text + ".zip and " + inputModName->Text + "\.mod in Documents\\Paradox Interactive\\Europa Universalis IV\\mod");
		sw->Close();
	}
}
private: System::Void FolderPath_Click(System::Object^ sender, System::EventArgs^ e) {
}
// Output Textbox
private: System::Void RichTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
// Progress Bar
private: System::Void ProgressBarLoading_Click(System::Object^ sender, System::EventArgs^ e) {
}
// On Drag to list view, change cursor
private: System::Void ListViewMusic_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
	e->Effect = System::Windows::Forms::DragDropEffects::All;
}
// Drag and drop functionality on list view
private: System::Void ListViewMusic_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
	array<String^>^ files = (array<String^>^) e->Data->GetData(System::Windows::Forms::DataFormats::FileDrop, false);

	for (int i = 0; i < files->Length; i++) {
		if (Path::GetExtension(files[i])->Equals(".ogg")) {
			ListViewItem^ lvEntry = gcnew ListViewItem(Path::GetFileNameWithoutExtension(files[i]), 0);
			lvEntry->SubItems->Add("1.0");
			lvEntry->SubItems->Add("no");
			lvEntry->SubItems->Add("0");
			lvEntry->SubItems->Add("0");
			lvEntry->SubItems->Add(files[i]);
			listViewMusic->Items->Add(lvEntry);
		}
		else if (Directory::Exists(files[i])) {
			array<String^>^ newDirectory = (array<String^>^) Directory::GetFiles(files[i]);
			for (int j = 0; j < newDirectory->Length; j++) {
				if (Path::GetExtension(newDirectory[j])->Equals(".ogg")) {
					ListViewItem^ lvEntry = gcnew ListViewItem(Path::GetFileNameWithoutExtension(newDirectory[j]), 0);
					lvEntry->SubItems->Add("1.0");
					lvEntry->SubItems->Add("no");
					lvEntry->SubItems->Add("0");
					lvEntry->SubItems->Add("0");
					lvEntry->SubItems->Add(newDirectory[j]);
					listViewMusic->Items->Add(lvEntry);
				}
			}
		}
	}
}
// Delete selected entries in list view
private: System::Void ListViewMusic_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (listViewMusic->SelectedItems->Count > 0 && e->KeyCode == Keys::Delete) {
		int totalItems = listViewMusic->SelectedItems->Count;
		for (int i = 0; i < totalItems; i++) {
			listViewMusic->Items->RemoveAt(listViewMusic->SelectedIndices[0]);
		}
	}
}
// Mod Output Location Label
private: System::Void Label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
