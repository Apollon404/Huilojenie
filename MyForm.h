#pragma once
#include "resource.h"
#include "Header.h"
#include <exception>
#include <array>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <Shlobj.h>
struct Znechenia {
	int a = 150;//shirina x
	int b = 100;//visota y
	int ArrowWidth = 2;
};
Znechenia Razmer;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ Kod;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ outToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ justVariablesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ variabelsAndTextToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ whiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomEvryTimeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ heightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ widthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ blockedToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ arowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sizeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::Button^ button1;































	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Kod = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->outToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->justVariablesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->variabelsAndTextToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->heightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->widthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->blockedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->arowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sizeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox3 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->backColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->whiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomEvryTimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(68, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 41);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Shema from file ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(68, 237);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(68, 266);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Select file";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(38, 375);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// Kod
			// 
			this->Kod->Cursor = System::Windows::Forms::Cursors::Default;
			this->Kod->Dock = System::Windows::Forms::DockStyle::Right;
			this->Kod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Kod->Location = System::Drawing::Point(1051, 0);
			this->Kod->Multiline = true;
			this->Kod->Name = L"Kod";
			this->Kod->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Kod->Size = System::Drawing::Size(533, 659);
			this->Kod->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 356);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Select function";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripDropDownButton1,
					this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStrip1->Size = System::Drawing::Size(1051, 25);
			this->toolStrip1->TabIndex = 11;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->outToolStripMenuItem,
					this->sizeToolStripMenuItem, this->backColorToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(74, 22);
			this->toolStripDropDownButton1->Text = L"Setings";
			// 
			// outToolStripMenuItem
			// 
			this->outToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->justVariablesToolStripMenuItem,
					this->variabelsAndTextToolStripMenuItem
			});
			this->outToolStripMenuItem->Name = L"outToolStripMenuItem";
			this->outToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->outToolStripMenuItem->Text = L"Out";
			// 
			// justVariablesToolStripMenuItem
			// 
			this->justVariablesToolStripMenuItem->Checked = true;
			this->justVariablesToolStripMenuItem->CheckOnClick = true;
			this->justVariablesToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->justVariablesToolStripMenuItem->Name = L"justVariablesToolStripMenuItem";
			this->justVariablesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->justVariablesToolStripMenuItem->Text = L"Just variables";
			this->justVariablesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::justVariablesToolStripMenuItem_Click);
			// 
			// variabelsAndTextToolStripMenuItem
			// 
			this->variabelsAndTextToolStripMenuItem->CheckOnClick = true;
			this->variabelsAndTextToolStripMenuItem->Name = L"variabelsAndTextToolStripMenuItem";
			this->variabelsAndTextToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->variabelsAndTextToolStripMenuItem->Text = L"Variabels and text";
			this->variabelsAndTextToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::variabelsAndTextToolStripMenuItem_Click);
			// 
			// sizeToolStripMenuItem
			// 
			this->sizeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->blockToolStripMenuItem,
					this->arowToolStripMenuItem
			});
			this->sizeToolStripMenuItem->Name = L"sizeToolStripMenuItem";
			this->sizeToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->sizeToolStripMenuItem->Text = L"Size";
			// 
			// blockToolStripMenuItem
			// 
			this->blockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->heightToolStripMenuItem,
					this->toolStripTextBox2, this->widthToolStripMenuItem, this->toolStripTextBox1, this->toolStripSeparator2, this->blockedToolStripMenuItem
			});
			this->blockToolStripMenuItem->Name = L"blockToolStripMenuItem";
			this->blockToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->blockToolStripMenuItem->Text = L"Block";
			this->blockToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ChangeBlocked);
			// 
			// heightToolStripMenuItem
			// 
			this->heightToolStripMenuItem->Name = L"heightToolStripMenuItem";
			this->heightToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->heightToolStripMenuItem->Text = L"Height";
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox2->Text = L"100";
			this->toolStripTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::HeightChanged);
			// 
			// widthToolStripMenuItem
			// 
			this->widthToolStripMenuItem->Name = L"widthToolStripMenuItem";
			this->widthToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->widthToolStripMenuItem->Text = L"Width";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox1->Text = L"150";
			this->toolStripTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::WidthChanged);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(157, 6);
			// 
			// blockedToolStripMenuItem
			// 
			this->blockedToolStripMenuItem->Name = L"blockedToolStripMenuItem";
			this->blockedToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->blockedToolStripMenuItem->Text = L"Blocked";
			// 
			// arowToolStripMenuItem
			// 
			this->arowToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sizeToolStripMenuItem1 });
			this->arowToolStripMenuItem->Name = L"arowToolStripMenuItem";
			this->arowToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->arowToolStripMenuItem->Text = L"Arow";
			// 
			// sizeToolStripMenuItem1
			// 
			this->sizeToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox3 });
			this->sizeToolStripMenuItem1->Name = L"sizeToolStripMenuItem1";
			this->sizeToolStripMenuItem1->Size = System::Drawing::Size(94, 22);
			this->sizeToolStripMenuItem1->Text = L"Size";
			// 
			// toolStripTextBox3
			// 
			this->toolStripTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox3->Name = L"toolStripTextBox3";
			this->toolStripTextBox3->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::ArrowWidth);
			// 
			// backColorToolStripMenuItem
			// 
			this->backColorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->whiteToolStripMenuItem,
					this->randomEvryTimeToolStripMenuItem
			});
			this->backColorToolStripMenuItem->Name = L"backColorToolStripMenuItem";
			this->backColorToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->backColorToolStripMenuItem->Text = L"BackColor";
			// 
			// whiteToolStripMenuItem
			// 
			this->whiteToolStripMenuItem->CheckOnClick = true;
			this->whiteToolStripMenuItem->Name = L"whiteToolStripMenuItem";
			this->whiteToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->whiteToolStripMenuItem->Text = L"White";
			this->whiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::WhitePanels);
			// 
			// randomEvryTimeToolStripMenuItem
			// 
			this->randomEvryTimeToolStripMenuItem->Checked = true;
			this->randomEvryTimeToolStripMenuItem->CheckOnClick = true;
			this->randomEvryTimeToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->randomEvryTimeToolStripMenuItem->Name = L"randomEvryTimeToolStripMenuItem";
			this->randomEvryTimeToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->randomEvryTimeToolStripMenuItem->Text = L"Random every time";
			this->randomEvryTimeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::RandomPanel);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Shema from pole";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1584, 659);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Kod);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Prilozenie";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int lastPosX = 0;
		int lastPosY = 0;
		int* MaxX=nullptr;
		Shema* shema;
		System::Collections::Generic::List<System::Windows::Forms::PictureBox^> blocki;
		System::Collections::Generic::List<System::Windows::Forms::Label^> texta;
		System::Collections::Generic::List<System::Windows::Forms::PictureBox^> strelki;
		System::Collections::Generic::List<System::Windows::Forms::Panel^> paneli;

		void NewLayer() {
			Random r;
			auto panel = gcnew System::Windows::Forms::Panel();
			panel->AutoScroll = true;
			panel->Dock = System::Windows::Forms::DockStyle::Right;
			panel->Location = System::Drawing::Point(262, 0);
			panel->Size = System::Drawing::Size(744, 659);
			panel->BackColor = System::Drawing::Color::Black;
			paneli.Add(panel);
			panel->Visible = false;
			panel->SendToBack();
			if (whitePanel == false) {
				panel->BackColor = System::Drawing::Color::FromArgb(r.Next(256), r.Next(256), r.Next(256));
			}
			else {
				panel->BackColor = System::Drawing::Color::White;
			}
			this->Controls->Add(panel);
			panel->BringToFront();
			this->comboBox1->Items->Add(L"Panel " + paneli.Count.ToString());
		
			
		}
		
		void AddText(System::String^ text, System::Drawing::Point loc, System::Drawing::Size siz, System::Windows::Forms::Panel^ par) {
			System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
			label->Text = text;
			label->AutoSize = false;
			label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label->BackColor = System::Drawing::Color::Transparent;
			label->Size = siz;
			label->Location = loc;
			label->Top -= par->VerticalScroll->Value;
			label->Left -= par->HorizontalScroll->Value;
			par->Controls->Add(label);
			label->Parent = par;
			label->DoubleClick += gcnew System::EventHandler(this, &MyForm::Block_DoubleClicked);
			texta.Add(label);
			//this->Controls->Add(label);
		}
		System::Drawing::Point AddDeistvie(string text,System::Windows::Forms::Panel^ par) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::PictureBox^ block = gcnew System::Windows::Forms::PictureBox();
			block->Size = System::Drawing::Size(Razmer.a, Razmer.b);
			block->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			block->Location = System::Drawing::Point(lastPosX, lastPosY);
			System::String^ a = gcnew String(text.data());
			AddText(a, System::Drawing::Point(lastPosX + 2, lastPosY + 2), System::Drawing::Size(Razmer.a - 4, Razmer.b - 4),par);
			lastPosY += Razmer.b + Razmer.b / 4;
			block->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Deistvie")));
			block->Left -= par->HorizontalScroll->Value;
			block->Top -= par->VerticalScroll->Value;
			block->Parent = par;
			block->BackColor = System::Drawing::Color::Transparent;
			par->Controls->Add(block);
			blocki.Add(block);
			return block->Location;
		}
		System::Drawing::Point AddFunction(string text, System::Windows::Forms::Panel^ par) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::PictureBox^ block = gcnew System::Windows::Forms::PictureBox();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(block))->BeginInit();
			block->Size = System::Drawing::Size(Razmer.a, Razmer.b);
			block->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			block->BackColor = System::Drawing::Color::Transparent;
			block->Location = System::Drawing::Point(lastPosX, lastPosY);
			System::String^ a = gcnew String(text.data());
			//a = block->Location.X.ToString() + " " + block->Location.Y.ToString();
			AddText(a, System::Drawing::Point(lastPosX + 2 + Razmer.a / 4, lastPosY + 2), System::Drawing::Size(Razmer.a - 28 - Razmer.a / 4, Razmer.b - 4),par);
			lastPosY += Razmer.b + Razmer.b / 4;
			block->Left -= par->HorizontalScroll->Value;
			block->Top -= par->VerticalScroll->Value;
			block->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Function")));
			block->Parent = par;
			par->Controls->Add(block);
			blocki.Add(block);
			return block->Location;
		}
		System::Drawing::Point AddTerminator(string text, System::Windows::Forms::Panel^ par) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::PictureBox^ block = gcnew System::Windows::Forms::PictureBox();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(block))->BeginInit();
			block->Size = System::Drawing::Size(Razmer.a, Razmer.b / 2);
			block->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			block->Location = System::Drawing::Point(lastPosX, lastPosY);
			block->BackColor = System::Drawing::Color::Transparent;
			System::String^ a = gcnew String(text.data());
			//a = block->Location.X.ToString() + " " + block->Location.Y.ToString();
			AddText(a, System::Drawing::Point(lastPosX + Razmer.a / 4, lastPosY + 4), System::Drawing::Size(Razmer.a - 28 - Razmer.a / 4, Razmer.b / 2 - 10),par);
			lastPosY += Razmer.b / 2 + Razmer.b / 4;
			block->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Terminator")));
			block->BackColor = System::Drawing::Color::Transparent;
			par->Controls->Add(block);
			block->Parent = par;
			block->Left -= par->HorizontalScroll->Value;
			block->Top -= par->VerticalScroll->Value;
			blocki.Add(block);
			return block->Location;
		}
		System::Drawing::Point AddVivod(string text, System::Windows::Forms::Panel^ par) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::PictureBox^ block = gcnew System::Windows::Forms::PictureBox();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(block))->BeginInit();
			block->Size = System::Drawing::Size(Razmer.a, Razmer.b);
			block->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			block->Location = System::Drawing::Point(lastPosX, lastPosY);
			System::String^ a = gcnew String(text.data());
			//a = block->Location.X.ToString() + " " + block->Location.Y.ToString();
			AddText(a, System::Drawing::Point(lastPosX + Razmer.a / 4, lastPosY + 4), System::Drawing::Size(Razmer.a - 28 - Razmer.a / 4, Razmer.b - 8),par);
			lastPosY += Razmer.b + Razmer.b / 4;
			block->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Vvod")));
			block->BackColor = System::Drawing::Color::Transparent;
			block->Left -= par->HorizontalScroll->Value;
			block->Parent = par;
			block->Top -= par->VerticalScroll->Value;
			par->Controls->Add(block);
			blocki.Add(block);
			return block->Location;
		}
		System::Drawing::Point AddUslovie(string text, System::Windows::Forms::Panel^ par) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::PictureBox^ block = gcnew System::Windows::Forms::PictureBox();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(block))->BeginInit();
			block->Size = System::Drawing::Size(Razmer.a, Razmer.b);
			block->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			block->Location = System::Drawing::Point(lastPosX, lastPosY);
			System::String^ a = gcnew String(text.data());
			AddText(a, System::Drawing::Point(lastPosX + Razmer.a / 4, lastPosY + 28), System::Drawing::Size(Razmer.a - 35 - Razmer.a / 4, Razmer.b - 55),par);
			lastPosY += Razmer.b + Razmer.b / 4;
			block->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Uslovie")));
			block->BackColor = System::Drawing::Color::Transparent;
			par->Controls->Add(block);
			block->Parent = par;
			block->Left -= par->HorizontalScroll->Value;
			block->Top -= par->VerticalScroll->Value;
			blocki.Add(block);
			return block->Location;
		}
		System::Drawing::Point AddZikl(string text, System::Windows::Forms::Panel^ par) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::PictureBox^ block = gcnew System::Windows::Forms::PictureBox();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(block))->BeginInit();
			block->Size = System::Drawing::Size(Razmer.a, Razmer.b);
			block->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			block->BackColor = System::Drawing::Color::Transparent;
			block->Location = System::Drawing::Point(lastPosX, lastPosY);
			System::String^ a = gcnew String(text.data());
			//a = block->Location.X.ToString() + " " + block->Location.Y.ToString();
			AddText(a, System::Drawing::Point(lastPosX + 2 + Razmer.a / 4, lastPosY + 2), System::Drawing::Size(Razmer.a  - Razmer.a / 2, Razmer.b-4 ), par);
			lastPosY += Razmer.b + Razmer.b / 4;
			block->Left -= par->HorizontalScroll->Value;
			block->Top -= par->VerticalScroll->Value;
			block->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Zikl")));
			block->Parent = par;
			par->Controls->Add(block);
			blocki.Add(block);
			return block->Location;
		}

		void DrawArrows() {
			stack<Block*> stolb;
			for (int i = 0; i < shema->functions.size(); i++){
				stolb.push(shema->functions[i]);
				while (!stolb.empty()) {
					shema->current = stolb.top();
					stolb.pop();
					while (shema->current->next != nullptr ) {
						Arrow(shema->current->point, shema->current->next->point, shema->current->block,paneli[i]);
						if (!stolb.empty() && shema->current->next2 == stolb.top()) {
							shema->current = shema->current->next2;
						}
						else {
							if (shema->current->next2) {
								Arrow(shema->current->point, shema->current->next2->point, shema->current->block, paneli[i]);
								stolb.push(shema->current->next2);
							}
							shema->current = shema->current->next;
						}
					}
				}
			}
		}
		void Arrow(System::Drawing::Point nachalo, System::Drawing::Point konez, TypeOfBlock block, System::Windows::Forms::Panel^ par) {
			int k = 1;
			auto Arrow = gcnew System::Windows::Forms::PictureBox;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			//dla konza zikla
			if (nachalo.X==konez.X && nachalo.Y>konez.Y) {
				Arrow->Location = System::Drawing::Point(nachalo.X  - (k * (Razmer.a / 8)), nachalo.Y+Razmer.b/2);
				Arrow->Size = System::Drawing::Size((k * (Razmer.a / 8)), Razmer.ArrowWidth);
				Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(hr)")));
				Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				Arrow->BackColor = System::Drawing::Color::Black;
				Arrow->Top -= par->VerticalScroll->Value;
				Arrow->Left -= par->HorizontalScroll->Value;
				Arrow->Parent = par;
				par->Controls->Add(Arrow);
				strelki.Add(Arrow);
				Arrow = gcnew System::Windows::Forms::PictureBox;
				Arrow->Location = System::Drawing::Point(konez.X-k*(Razmer.a/8),konez.Y+Razmer.b/2);
				Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, nachalo.Y-konez.Y );
				Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				Arrow->BackColor = System::Drawing::Color::Black;
				Arrow->Top -= par->VerticalScroll->Value;
				Arrow->Left -= par->HorizontalScroll->Value;
				Arrow->Parent = par;
				par->Controls->Add(Arrow);
				strelki.Add(Arrow);
				Arrow = gcnew System::Windows::Forms::PictureBox;
				Arrow->Location = System::Drawing::Point(konez.X - k * (Razmer.a / 8), konez.Y + Razmer.b / 2);
				Arrow->Size = System::Drawing::Size(k * (Razmer.a / 8), Razmer.ArrowWidth);
				Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				Arrow->BackColor = System::Drawing::Color::Black;
				Arrow->Top -= par->VerticalScroll->Value;
				Arrow->Left -= par->HorizontalScroll->Value;
				Arrow->Parent = par;
				par->Controls->Add(Arrow);
				strelki.Add(Arrow);
			}
			//vniz na odin ili vprapo vniz vlevo vniz
			else if (nachalo.X == konez.X && nachalo.Y<konez.Y) {
					Arrow->BackColor = System::Drawing::Color::Black;
					Arrow->Top -= par->VerticalScroll->Value;
					Arrow->Left -= par->HorizontalScroll->Value;
					Arrow->Parent = par;
					Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(ert)")));
					Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				if (nachalo.Y + Razmer.b + Razmer.b / 4 == konez.Y || block == Nachalo) {
					if (block == Nachalo) {
						Arrow->Location = System::Drawing::Point(nachalo.X + Razmer.a / 2, nachalo.Y + Razmer.b / 2);
						Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, konez.Y - nachalo.Y);
					}
					else {
						Arrow->Location = System::Drawing::Point(nachalo.X + Razmer.a / 2, nachalo.Y + Razmer.b);
						Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, konez.Y - nachalo.Y - Razmer.b);
					}
				}
				else {
					Arrow->Location = System::Drawing::Point(nachalo.X + Razmer.a, nachalo.Y + Razmer.b / 2);
					Arrow->Size = System::Drawing::Size((k * (Razmer.a / 8)), Razmer.ArrowWidth);
					Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(hor)")));
					Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					Arrow->BackColor = System::Drawing::Color::Black;
					Arrow->Top -= par->VerticalScroll->Value;
					Arrow->Left -= par->HorizontalScroll->Value;
					Arrow->Parent = par;
					par->Controls->Add(Arrow);
					strelki.Add(Arrow);
					Arrow = gcnew System::Windows::Forms::PictureBox;
					Arrow->Location = System::Drawing::Point(nachalo.X + Razmer.a+(k * (Razmer.a / 8)), nachalo.Y + Razmer.b / 2);
					Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, konez.Y-nachalo.Y-Razmer.b/2-Razmer.b/8);
					Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(hor)")));
					Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					Arrow->BackColor = System::Drawing::Color::Black;
					Arrow->Top -= par->VerticalScroll->Value;
					Arrow->Left -= par->HorizontalScroll->Value;
					Arrow->Parent = par;
					par->Controls->Add(Arrow);
					strelki.Add(Arrow);
					Arrow = gcnew System::Windows::Forms::PictureBox;
					Arrow->Location = System::Drawing::Point(konez.X+Razmer.a/2,konez.Y-Razmer.b/8);
					Arrow->Size = System::Drawing::Size(Razmer.a/2 + (k * (Razmer.a / 8))+2, Razmer.ArrowWidth);
					Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(hor)")));
					Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					Arrow->BackColor = System::Drawing::Color::Black;
					Arrow->Top -= par->VerticalScroll->Value;
					Arrow->Left -= par->HorizontalScroll->Value;
					Arrow->Parent = par;
					par->Controls->Add(Arrow);
					strelki.Add(Arrow);
					Arrow = gcnew System::Windows::Forms::PictureBox;
					Arrow->Location = System::Drawing::Point(konez.X + Razmer.a / 2, konez.Y - Razmer.b / 8);
					Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, Razmer.a / 8);
					Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(hor)")));
					Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					Arrow->BackColor = System::Drawing::Color::Black;
					Arrow->Top -= par->VerticalScroll->Value;
					Arrow->Left -= par->HorizontalScroll->Value;
					Arrow->Parent = par;
				}
			} 
			//vpravo i vniz
			else if (nachalo.X < konez.X) {
				Arrow->Location = System::Drawing::Point(nachalo.X + Razmer.a, nachalo.Y + (Razmer.b / 2));
				Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(hor)")));
				Arrow->Size = System::Drawing::Size(konez.X - (Razmer.a / 2) - nachalo.X, Razmer.ArrowWidth);
				Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				Arrow->BackColor = System::Drawing::Color::Black;
				Arrow->Top -= par->VerticalScroll->Value;
				Arrow->Left -= par->HorizontalScroll->Value;
				Arrow->Parent = par;
				par->Controls->Add(Arrow);
				strelki.Add(Arrow);
				Arrow = gcnew System::Windows::Forms::PictureBox;
				Arrow->BackColor = System::Drawing::Color::Black;
				Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				Arrow->Location = System::Drawing::Point(konez.X + (Razmer.a / 2), nachalo.Y + Razmer.b / 2);
				Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, konez.Y - nachalo.Y - Razmer.b / 2);
				Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(vert)")));
			}
			//vniz i vlevo
			else if (nachalo.X > konez.X) {
				Arrow->Location = System::Drawing::Point(nachalo.X + (Razmer.a / 2), nachalo.Y + Razmer.b);
				Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(hor)")));
				Arrow->BackColor = System::Drawing::Color::Black;
				Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, konez.Y - nachalo.Y - Razmer.b - Razmer.b / 8);
				Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				Arrow->Top -= par->VerticalScroll->Value;
				Arrow->Left -= par->HorizontalScroll->Value;
				Arrow->Parent = par;
				par->Controls->Add(Arrow);
				strelki.Add(Arrow);
				Arrow = gcnew System::Windows::Forms::PictureBox();
				Arrow->BackColor = System::Drawing::Color::Black;
				Arrow->Location = System::Drawing::Point(konez.X + Razmer.a / 2, konez.Y - Razmer.b / 8);
				Arrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line(ert)")));
				Arrow->Size = System::Drawing::Size(nachalo.X - konez.X + 2, Razmer.ArrowWidth);
				Arrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			}
			//vravo vniz i vlevo??
			else {
				Arrow->Location = System::Drawing::Point(nachalo.X + Razmer.a, nachalo.Y + Razmer.b / 2);
				Arrow->Size = System::Drawing::Size(k * (Razmer.a / 8), 2);
				Arrow->Top -= par->VerticalScroll->Value;
				Arrow->Left -= par->HorizontalScroll->Value;
				Arrow->Parent = par;
				par->Controls->Add(Arrow);
				Arrow->BackColor = System::Drawing::Color::Black;
				strelki.Add(Arrow);
				Arrow = gcnew System::Windows::Forms::PictureBox;
				Arrow->Location = System::Drawing::Point(nachalo.X + Razmer.a+ k * (Razmer.a / 8), nachalo.Y + Razmer.b / 2);
				Arrow->Size = System::Drawing::Size(Razmer.ArrowWidth, konez.Y - nachalo.Y - Razmer.b / 2 - Razmer.b / 8+2);
				Arrow->Top -= par->VerticalScroll->Value;
				Arrow->Left -= par->HorizontalScroll->Value;
				Arrow->Parent = par;
				par->Controls->Add(Arrow);
				Arrow->BackColor = System::Drawing::Color::Black;
				strelki.Add(Arrow);
				Arrow = gcnew System::Windows::Forms::PictureBox;
				Arrow->Location = System::Drawing::Point(konez.X+Razmer.a/2,konez.Y-Razmer.b/8);
				Arrow->Size = System::Drawing::Size(k * (Razmer.a / 8)+Razmer.a/2, 2);
			}
			Arrow->Top -= par->VerticalScroll->Value;
			Arrow->Left -= par->HorizontalScroll->Value;
			Arrow->Parent = par;
			par->Controls->Add(Arrow);
			Arrow->BackColor = System::Drawing::Color::Black;
			strelki.Add(Arrow);
			//this->Controls->Add(Arrow);
		}

		String^ path = "";
		void Start() {
			if (MaxX != nullptr) {
				delete[] MaxX;
			}	
			Clear();
			if (path == "") {
				MessageBox::Show("No File selected", "Erorr");
				return ;
			}
			shema = new Shema();
			using namespace Runtime::InteropServices;
			const char* chars =(const char*)(Marshal::StringToHGlobalAnsi(path)).ToPointer();
			string paths = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));

			shema->OpenReadFile(paths);
			shema->rozbit();
			MaxX = new int[shema->functions.size()];
			System::Drawing::Point p;
			int TheBigY=0;//samoe bolshoe znachenie po Y
			stack<Block*> stolb;
			for (int i = 0; i < shema->functions.size(); i++){
				p.X = 0;
				TheBigY = 0;
				MaxX[i] = 0;
				p.Y = 0;
				NewLayer();
				this->comboBox1->SelectedIndex = 0;
				stolb.push(shema->functions[i]);
				while (!stolb.empty()) {
					shema->current = stolb.top();
					lastPosX = p.X + Razmer.a + Razmer.a / 4;
					lastPosY = p.Y + Razmer.b + Razmer.b / 4;
					stolb.pop();
					while (shema->current != nullptr) {
						if (shema->current->point.IsEmpty){
							switch (shema->current->block)
							{
							case(Deistvie):shema->current->point = AddDeistvie(shema->current->text, paneli[i]); break;
							case(Vivod):shema->current->point = AddVivod(shema->current->text, paneli[i]); break;
							case(Nachalo):shema->current->point = AddTerminator(shema->current->text, paneli[i]); break;
							case(Function):shema->current->point = AddFunction(shema->current->text, paneli[i]); break;
							case(Uslovie):shema->current->point = AddUslovie(shema->current->text, paneli[i]); break;
							case(While):shema->current->point = AddUslovie(shema->current->text, paneli[i]); break;
							case(Zikl):shema->current->point = AddZikl(shema->current->text, paneli[i]); break;
							default:
								break;
							}
						}
						if (shema->current->point.Y > TheBigY) {
							TheBigY = shema->current->point.Y;
						}
						if (stolb.empty() && shema->current->block == Konez) {
							lastPosX = shema->functions[i]->point.X;
							lastPosY = TheBigY + Razmer.b + Razmer.b / 4;

							shema->current->point = AddTerminator(shema->current->text, paneli[i]);
						}
						if (!stolb.empty() && shema->current->next2 == stolb.top()) {
							stolb.pop();
							shema->current = shema->current->next2;
							if (shema->current->block == Konez && stolb.empty()) {
								lastPosX = shema->functions[i]->point.X;
								shema->current->point = AddTerminator(shema->current->text, paneli[i]);
							}
						}
						else {
							if (shema->current->next2) {
								stolb.push(shema->current->next2);
								p = shema->current->point;
							}
							shema->current = shema->current->next;
						}
						
					}
				}
			}
			for (int i = 0; i < shema->stroki.size(); i++)
			{
				this->Kod->Text += gcnew String(shema->stroki[i].data()) +Environment::NewLine;
			
			}
			DrawArrows();
		}
		void Clear() {
			for (int i = 0; i < paneli.Count; i++) {
				paneli[i]->Controls->Clear();
				delete paneli[i];
			}
			delete shema;
			this->Kod->Text = L"";
			comboBox1->Items->Clear();
			strelki.Clear();
			blocki.Clear();
			paneli.Clear();
			texta.Clear();
			
		}
		void ChooseFile() {
			auto OpFile = gcnew System::Windows::Forms::OpenFileDialog;
			OpFile->Filter = "Text files (*.txt)|*.txt|Source Code (*.cpp)|*.cpp|All files (*.*)|*.*";
			if (OpFile->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			{
				System::Windows::Forms::MessageBox::Show("No file selected", "Erorr");
			}
			else {
				path = OpFile->FileName;
			}
		}
#pragma endregion
	private: System::Void Block_DoubleClicked(System::Object^ sender, System::EventArgs^ e) {
		for each (auto s in strelki)
		{
			delete s;
		}
		strelki.Clear();
		int y, i;
		for (i = 0; i < blocki.Count; i++) {
			if (sender->Equals(texta[i])) {
				texta[i]->Text = L"found";
				y = texta[i]->Location.Y;
				break;
			};
		}

		/*stack<Block*> stolb;
		stolb.push(shema->head);
		while (!stolb.empty()) {
			shema->current = stolb.top();
			stolb.pop();
			while (shema->current != nullptr) {

				if (shema->current->point.IsEmpty){
					switch (shema->current->block)
					{
					case(Deistvie):shema->current->point = AddDeistvie(shema->current->text); break;
					case(Vivod):shema->current->point = AddVivod(shema->current->text); break;
					case(Nachalo):shema->current->point = AddTerminator(shema->current->text); break;
					case(Function):shema->current->point = AddFunction(shema->current->text); break;
					case(Uslovie):shema->current->point = AddUslovie(shema->current->text); break;
					default:
						break;
					}
					if (shema->current->next2) {
						stolb.push(shema->current->next2);
					}

				}
				shema->current = shema->current->next;
			}
		}
		*/
		DrawArrows();
	}
	
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Start();
	}	
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Clear();
	}	
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int i = this->comboBox1->SelectedIndex;
		for each (System::Windows::Forms::Panel ^ pan in paneli)
		{
			pan->Visible = false;
		}
		paneli[i]->Visible = true;
		paneli[i]->BringToFront();

	}
private:
	void button9_Click(Object^ /*sender*/, System::EventArgs^ /*e*/)
	{
		auto t =  gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this,&MyForm::ChooseFile));
		t->SetApartmentState(System::Threading::ApartmentState::STA);
		t->Start();
		t->Join();
	}



private: System::Void justVariablesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	variabelsAndTextToolStripMenuItem->Checked = false;
	VIVOD_PEREMENNIH = 0;
}
private: System::Void variabelsAndTextToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	justVariablesToolStripMenuItem->Checked = false;
	VIVOD_PEREMENNIH = 1;
}
	   void ChangeBlocked(System::Object^ sender, System::EventArgs^ e);
	   void WhitePanels(System::Object^ sender, System::EventArgs^ e);
bool block=true;
bool whitePanel = false;
void RandomPanel(System::Object^ sender, System::EventArgs^ e);
void HeightChanged(System::Object^ sender, System::EventArgs^ e);
void WidthChanged(System::Object^ sender, System::EventArgs^ e);
void ArrowWidth(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("This program was made by one and a half human\n\nAll you feedback send to my e-mail:\ninemati39@gmail.com", "Information", MessageBoxButtons::OKCancel);
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	shema = new Shema(this->Kod->Text);
}
};
}

void Project1::MyForm::ChangeBlocked(System::Object^ sender, System::EventArgs^ e)
{
	block != block;
}


void Project1::MyForm::WhitePanels(System::Object^ sender, System::EventArgs^ e)
{
	whitePanel = true;
	randomEvryTimeToolStripMenuItem->Checked = false;
}


void Project1::MyForm::RandomPanel(System::Object^ sender, System::EventArgs^ e)
{
	whitePanel = false;
	whiteToolStripMenuItem->Checked = false;	
}


void Project1::MyForm::HeightChanged(System::Object^ sender, System::EventArgs^ e)
{	Razmer.b = Convert::ToInt32(toolStripTextBox2->Text);
	if (block) {
		Razmer.a = (Razmer.b / 3) * 2;
	}
	toolStripTextBox1->Text = Convert::ToString(Razmer.a);
}


void Project1::MyForm::WidthChanged(System::Object^ sender, System::EventArgs^ e)
{
	Razmer.a = Convert::ToInt32(toolStripTextBox1->Text);
	if (block) {
		Razmer.b = (Razmer.a / 3) * 2;
	}
	toolStripTextBox2->Text = Convert::ToString(Razmer.b);

}


void Project1::MyForm::ArrowWidth(System::Object^ sender, System::EventArgs^ e)
{
	Razmer.ArrowWidth= Convert::ToInt32(toolStripTextBox3->Text);
}
