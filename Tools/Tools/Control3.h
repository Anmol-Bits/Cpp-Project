#pragma once
#include<cmath>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Tools {

	/// <summary>
	/// Summary for Control3
	/// </summary>
	public ref class Control3 : public System::Windows::Forms::UserControl
	{
	public:
		Control3(void)
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
		~Control3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ help_button;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::Label^ define_gain;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::NumericUpDown^ Year;
	private: System::Windows::Forms::NumericUpDown^ Month;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ profit_line;
	private: System::Windows::Forms::Panel^ principle_line;
	private: System::Windows::Forms::Label^ back;
	private: System::Windows::Forms::Label^ result1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ result_panel;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->help_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->define_gain = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->Year = (gcnew System::Windows::Forms::NumericUpDown());
			this->Month = (gcnew System::Windows::Forms::NumericUpDown());
			this->result = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->profit_line = (gcnew System::Windows::Forms::Panel());
			this->principle_line = (gcnew System::Windows::Forms::Panel());
			this->back = (gcnew System::Windows::Forms::Label());
			this->result1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->result_panel = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Year))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Month))->BeginInit();
			this->result_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->help_button
			});
			this->toolStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::HorizontalStackWithOverflow;
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Padding = System::Windows::Forms::Padding(0);
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(433, 25);
			this->toolStrip1->Stretch = true;
			this->toolStrip1->TabIndex = 21;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->BackColor = System::Drawing::Color::Transparent;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(74, 22);
			this->toolStripButton1->Text = L"Night Mode";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Control3::toolStripButton1_Click);
			// 
			// help_button
			// 
			this->help_button->BackColor = System::Drawing::Color::Transparent;
			this->help_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->help_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->help_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->help_button->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->help_button->Name = L"help_button";
			this->help_button->Size = System::Drawing::Size(37, 22);
			this->help_button->Text = L"Help";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14));
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox1->Location = System::Drawing::Point(23, 115);
			this->textBox1->MaxLength = 16;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Enter amount";
			this->textBox1->Enter += gcnew System::EventHandler(this, &Control3::textBox_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Control3::textBox1_Leave);
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->radioButton1->Location = System::Drawing::Point(28, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(83, 22);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"One time";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Control3::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->radioButton2->Location = System::Drawing::Point(166, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 22);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Recurring";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Control3::radioButton2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Location = System::Drawing::Point(25, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 18);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Total Investment";
			// 
			// textBox2
			// 
			this->textBox2->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 14));
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(23, 179);
			this->textBox2->MaxLength = 16;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 30);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Enter annual rate";
			this->textBox2->Enter += gcnew System::EventHandler(this, &Control3::textBox_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Control3::textBox2_Leave);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label2->Location = System::Drawing::Point(25, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 18);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Return / Interest (%)";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label3->Location = System::Drawing::Point(25, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 18);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Compounding Type";
			// 
			// calculate
			// 
			this->calculate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->calculate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->calculate->FlatAppearance->BorderSize = 0;
			this->calculate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->calculate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calculate->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->calculate->Location = System::Drawing::Point(89, 371);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(243, 35);
			this->calculate->TabIndex = 8;
			this->calculate->Text = L"Calculate";
			this->calculate->UseVisualStyleBackColor = false;
			this->calculate->Click += gcnew System::EventHandler(this, &Control3::calculate_Click);
			// 
			// define_gain
			// 
			this->define_gain->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->define_gain->AutoSize = true;
			this->define_gain->BackColor = System::Drawing::Color::Transparent;
			this->define_gain->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->define_gain->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->define_gain->Location = System::Drawing::Point(207, 246);
			this->define_gain->Name = L"define_gain";
			this->define_gain->Size = System::Drawing::Size(70, 19);
			this->define_gain->TabIndex = 28;
			this->define_gain->Text = L"Quarterly";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label4->Location = System::Drawing::Point(25, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 18);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Time";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label5->Location = System::Drawing::Point(80, 298);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 18);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Year";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label6->Location = System::Drawing::Point(190, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 18);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Month";
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->trackBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(23, 246);
			this->trackBar1->Maximum = 3;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(175, 45);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Value = 1;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Control3::trackBar1_ValueChanged);
			// 
			// Year
			// 
			this->Year->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Year->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->Year->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Year->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->Year->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Year->Location = System::Drawing::Point(120, 296);
			this->Year->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->Year->Name = L"Year";
			this->Year->Size = System::Drawing::Size(44, 22);
			this->Year->TabIndex = 6;
			this->Year->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// Month
			// 
			this->Month->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Month->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->Month->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Month->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->Month->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Month->Location = System::Drawing::Point(245, 296);
			this->Month->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			this->Month->Name = L"Month";
			this->Month->Size = System::Drawing::Size(44, 22);
			this->Month->TabIndex = 7;
			// 
			// result
			// 
			this->result->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->result->AutoSize = true;
			this->result->BackColor = System::Drawing::Color::Transparent;
			this->result->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->result->Font = (gcnew System::Drawing::Font(L"Calibri", 17));
			this->result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->result->Location = System::Drawing::Point(182, 57);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(69, 28);
			this->result->TabIndex = 2;
			this->result->Text = L"Result";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label7->Location = System::Drawing::Point(142, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 24);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Amount Invested";
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->panel1->Location = System::Drawing::Point(11, 200);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(410, 2);
			this->panel1->TabIndex = 1;
			// 
			// profit_line
			// 
			this->profit_line->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->profit_line->BackColor = System::Drawing::Color::White;
			this->profit_line->Location = System::Drawing::Point(85, 317);
			this->profit_line->Name = L"profit_line";
			this->profit_line->Size = System::Drawing::Size(263, 10);
			this->profit_line->TabIndex = 5;
			// 
			// principle_line
			// 
			this->principle_line->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->principle_line->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->principle_line->Location = System::Drawing::Point(85, 317);
			this->principle_line->Name = L"principle_line";
			this->principle_line->Size = System::Drawing::Size(263, 10);
			this->principle_line->TabIndex = 4;
			// 
			// back
			// 
			this->back->AutoSize = true;
			this->back->BackColor = System::Drawing::Color::Transparent;
			this->back->Font = (gcnew System::Drawing::Font(L"CocoBikeR", 25, System::Drawing::FontStyle::Bold));
			this->back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->back->Location = System::Drawing::Point(0, 10);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(36, 46);
			this->back->TabIndex = 6;
			this->back->Text = L"<";
			this->back->Click += gcnew System::EventHandler(this, &Control3::back_Click);
			// 
			// result1
			// 
			this->result1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->result1->AutoSize = true;
			this->result1->BackColor = System::Drawing::Color::Transparent;
			this->result1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->result1->Font = (gcnew System::Drawing::Font(L"Calibri", 17));
			this->result1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->result1->Location = System::Drawing::Point(182, 135);
			this->result1->Name = L"result1";
			this->result1->Size = System::Drawing::Size(69, 28);
			this->result1->TabIndex = 7;
			this->result1->Text = L"Result";
			this->result1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label8->Location = System::Drawing::Point(147, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 24);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Estimated Value";
			// 
			// result_panel
			// 
			this->result_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->result_panel->Controls->Add(this->label10);
			this->result_panel->Controls->Add(this->label9);
			this->result_panel->Controls->Add(this->label8);
			this->result_panel->Controls->Add(this->result1);
			this->result_panel->Controls->Add(this->back);
			this->result_panel->Controls->Add(this->principle_line);
			this->result_panel->Controls->Add(this->profit_line);
			this->result_panel->Controls->Add(this->panel1);
			this->result_panel->Controls->Add(this->label7);
			this->result_panel->Controls->Add(this->result);
			this->result_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->result_panel->Location = System::Drawing::Point(0, 25);
			this->result_panel->Name = L"result_panel";
			this->result_panel->Size = System::Drawing::Size(433, 410);
			this->result_panel->TabIndex = 41;
			this->result_panel->Visible = false;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(295, 265);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 24);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Interest •";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label9->Location = System::Drawing::Point(24, 265);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 24);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Investment •";
			// 
			// Control3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->result_panel);
			this->Controls->Add(this->Month);
			this->Controls->Add(this->Year);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->define_gain);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Name = L"Control3";
			this->Size = System::Drawing::Size(433, 435);
			this->Load += gcnew System::EventHandler(this, &Control3::Control3_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Year))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Month))->EndInit();
			this->result_panel->ResumeLayout(false);
			this->result_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int x;
		double principle, rate, frequency = 4, time, res, temp, year, month;

	private: System::Void Control3_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		label3->Enabled = true;
		define_gain->Text = "Quarterly";
		trackBar1->Value = 1;
		trackBar1->Enabled = true;
		define_gain->Enabled = true;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		trackBar1->Value = 0;
		define_gain->Text = "Monthly";
		label3->Enabled = false;
		trackBar1->Enabled = false;
		define_gain->Enabled = false;
	}

		   // text type for both principle and rate
	private: System::Void textBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (safe_cast<TextBox^>(sender)->Text == "Enter amount" || safe_cast<TextBox^>(sender)->Text == "Enter annual rate")
			safe_cast<TextBox^>(sender)->Text = "";
		if (!toolStripButton1->Checked) safe_cast<TextBox^>(sender)->ForeColor = Color::FromArgb(41, 55, 69);
		else safe_cast<TextBox^>(sender)->ForeColor = Color::FromArgb(234, 188, 122);
	}
		   // text type for both principle and rate

		   // leave principle textbox
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			textBox1->Text = "Enter amount";
			textBox1->ForeColor = Color::DarkGray;
		}
	}
		   // leave principle textbox

		   // leave Rate textbox
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "") {
			textBox2->Text = "Enter annual rate";
			textBox2->ForeColor = Color::DarkGray;
		}
	}
		   // leave Rate textbox

	private: System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (trackBar1->Value) {
		case 0: define_gain->Text = "Monthly"; frequency = 12; break;
		case 1: define_gain->Text = "Quarterly"; frequency = 4; break;
		case 2: define_gain->Text = "Half Yearly"; frequency = 2; break;
		case 3: define_gain->Text = "Annually"; frequency = 1; break;
		}
	}

	private: bool is_invalid_inputs() {
		if (textBox1->Text == "Enter amount" || textBox2->Text == "Enter annual rate" || Year->Value == 0 && Month->Value == 0)
			return true;

		// conversion
		principle = Convert::ToDouble(textBox1->Text);
		rate = Convert::ToDouble(textBox2->Text) / 100;
		year = (Year->Text == "") ? 0 : Convert::ToDouble(Year->Text);
		month = (Month->Text == "") ? 0 : Convert::ToDouble(Month->Text) / 12;
		time = year + month;
		// conversion
		return false;
	}

	private: double one_time()
	{
		result->Text = textBox1->Text;
		return principle * (pow(1 + rate / frequency, frequency * time));
	}

	private: double recurring()
	{
		double temp = principle;
		principle *= (year * 12 + month);
		result->Text = Convert::ToString(principle);
		return temp * (pow(1 + rate / 12, year * 12 + month) - 1) * ((1 + rate / 12) / (rate / 12));
	}

	private: System::Void calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		// checking the invalids and convert if valid
		if (is_invalid_inputs()) {
			MessageBox::Show("Check if the values are coorect ?", "Invalid input");
			return;
		}
		// checking the invalids and convert if valid

		// choosing the right funtion call
		res = (radioButton2->Checked == true) ? recurring() : one_time();
		// choosing the right funtion call

		res = round(res);

		// showing total value
		result1->Text = Convert::ToString(res);
		// showing total value

		set_result_at_center();
		result_bar();
		result_panel->Show();
	}

		   // result bar
	private: void result_bar() {
		temp = (res - principle) / res * 100.0;
		principle_line->Width -= principle_line->Width * int(temp) / 100;
	}
		   // result bar

		   // making the result at center
	private: void set_result_at_center() {
		int width1 = result_panel->Size.Width, width2 = result->Size.Width, width3 = result1->Size.Width;
		x = (width1 - width2) / 2;
		result->Location = System::Drawing::Point(x, 75);
		x = (width1 - width3) / 2;
		result1->Location = System::Drawing::Point(x, 153);
	}
		   // making the result at center
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		result_panel->Hide();
		principle_line->Width = 263;
	}

	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		int r, g, b, r1, g1, b1;

			if (!toolStripButton1->Checked) {
				toolStripButton1->Checked = true;
				r = 234, g = 188, b = 122; //light
				r1 = 41, g1 = 55, b1 = 69;//dark

				calculate->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
			}
			else {
				toolStripButton1->Checked = false;
				r = 41, g = 55, b = 69; // dark
				r1 = 234, g1 = 188, b1 = 122; // light

				calculate->FlatAppearance->MouseOverBackColor = Color::Teal;
			}

			this->BackColor = Color::FromArgb(r1, g1, b1);
			radioButton1->ForeColor = Color::FromArgb(r, g, b);
			radioButton2->ForeColor = Color::FromArgb(r, g, b);
			if (textBox1->Text != "Enter amount") textBox1->ForeColor = Color::FromArgb(r, g, b);
			if (textBox2->Text != "Enter annual rate") textBox2->ForeColor = Color::FromArgb(r, g, b);

			textBox1->BackColor = Color::FromArgb(r1, g1, b1);
			textBox2->BackColor = Color::FromArgb(r1, g1, b1);

			label1->ForeColor = Color::FromArgb(r,g,b);
			label2->ForeColor = Color::FromArgb(r,g,b);
			label3->ForeColor = Color::FromArgb(r,g,b);
			label4->ForeColor = Color::FromArgb(r,g,b);
			label5->ForeColor = Color::FromArgb(r,g,b);
			label6->ForeColor = Color::FromArgb(r,g,b);
			label7->ForeColor = Color::FromArgb(r,g,b);
			label8->ForeColor = Color::FromArgb(r,g,b);
			label9->ForeColor = Color::FromArgb(r,g,b);
			define_gain->ForeColor = Color::FromArgb(r, g, b);

			trackBar1->BackColor = Color::FromArgb(r1, g1, b1);
			Year->BackColor = Color::FromArgb(r1, g1, b1);
			Year->ForeColor = Color::FromArgb(r, g, b);
			Month->BackColor = Color::FromArgb(r1, g1, b1);
			Month->ForeColor = Color::FromArgb(r1, g1, b1);
			calculate->BackColor = Color::FromArgb(r, g, b);
			calculate->ForeColor = Color::FromArgb(r1, g1, b1);
			result_panel->BackColor = Color::FromArgb(r1, g1, b1);
			result->ForeColor = Color::FromArgb(r, g, b);
			result1->ForeColor = Color::FromArgb(r, g, b);
			back->ForeColor = Color::FromArgb(r, g, b);
			panel1->BackColor = Color::FromArgb(r, g, b);
			principle_line->BackColor = Color::FromArgb(r, g, b);
	}

};
}
