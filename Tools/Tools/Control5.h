#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
namespace Tools {

	/// <summary>
	/// Summary for Control5
	/// </summary>
	public ref class Control5 : public System::Windows::Forms::UserControl
	{
	public:
		Control5(void)
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
		~Control5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ help_button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ lock_1;
	private: System::Windows::Forms::Button^ lock_2;
	private: System::Windows::Forms::Button^ lock_4;
	private: System::Windows::Forms::Button^ lock_3;
	private: System::Windows::Forms::Button^ lock_5;
	private: System::Windows::Forms::Button^ lock_6;
	private: System::Windows::Forms::Button^ lock_8;
	private: System::Windows::Forms::Button^ lock_7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Control5::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->help_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lock_1 = (gcnew System::Windows::Forms::Button());
			this->lock_2 = (gcnew System::Windows::Forms::Button());
			this->lock_4 = (gcnew System::Windows::Forms::Button());
			this->lock_3 = (gcnew System::Windows::Forms::Button());
			this->lock_5 = (gcnew System::Windows::Forms::Button());
			this->lock_6 = (gcnew System::Windows::Forms::Button());
			this->lock_8 = (gcnew System::Windows::Forms::Button());
			this->lock_7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
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
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Padding = System::Windows::Forms::Padding(0);
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(453, 25);
			this->toolStrip1->TabIndex = 23;
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
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Control5::toolStripButton1_Click);
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
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->button1->Location = System::Drawing::Point(125, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Control5::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(86, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 60);
			this->label1->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Navy;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(156, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 60);
			this->label2->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->BackColor = System::Drawing::Color::GhostWhite;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(226, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 60);
			this->label3->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::Color::Crimson;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(296, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 60);
			this->label4->TabIndex = 31;
			// 
			// lock_1
			// 
			this->lock_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_1.BackgroundImage")));
			this->lock_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lock_1->FlatAppearance->BorderSize = 0;
			this->lock_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->lock_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_1->Location = System::Drawing::Point(111, 224);
			this->lock_1->Name = L"lock_1";
			this->lock_1->Size = System::Drawing::Size(20, 20);
			this->lock_1->TabIndex = 1;
			this->lock_1->UseVisualStyleBackColor = true;
			this->lock_1->Click += gcnew System::EventHandler(this, &Control5::lock_1_Click);
			// 
			// lock_2
			// 
			this->lock_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_2.BackgroundImage")));
			this->lock_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lock_2->FlatAppearance->BorderSize = 0;
			this->lock_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->lock_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_2->Location = System::Drawing::Point(181, 224);
			this->lock_2->Name = L"lock_2";
			this->lock_2->Size = System::Drawing::Size(20, 20);
			this->lock_2->TabIndex = 2;
			this->lock_2->UseVisualStyleBackColor = true;
			this->lock_2->Click += gcnew System::EventHandler(this, &Control5::lock_2_Click);
			// 
			// lock_4
			// 
			this->lock_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_4.BackgroundImage")));
			this->lock_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lock_4->FlatAppearance->BorderSize = 0;
			this->lock_4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->lock_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_4->Location = System::Drawing::Point(321, 224);
			this->lock_4->Name = L"lock_4";
			this->lock_4->Size = System::Drawing::Size(20, 20);
			this->lock_4->TabIndex = 4;
			this->lock_4->UseVisualStyleBackColor = true;
			this->lock_4->Click += gcnew System::EventHandler(this, &Control5::lock_4_Click);
			// 
			// lock_3
			// 
			this->lock_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_3.BackgroundImage")));
			this->lock_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->lock_3->FlatAppearance->BorderSize = 0;
			this->lock_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->lock_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_3->Location = System::Drawing::Point(251, 224);
			this->lock_3->Name = L"lock_3";
			this->lock_3->Size = System::Drawing::Size(20, 20);
			this->lock_3->TabIndex = 3;
			this->lock_3->UseVisualStyleBackColor = true;
			this->lock_3->Click += gcnew System::EventHandler(this, &Control5::lock_3_Click);
			// 
			// lock_5
			// 
			this->lock_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_5.BackgroundImage")));
			this->lock_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->lock_5->FlatAppearance->BorderSize = 0;
			this->lock_5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->lock_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_5->Location = System::Drawing::Point(111, 224);
			this->lock_5->Name = L"lock_5";
			this->lock_5->Size = System::Drawing::Size(20, 20);
			this->lock_5->TabIndex = 1;
			this->lock_5->UseVisualStyleBackColor = true;
			this->lock_5->Click += gcnew System::EventHandler(this, &Control5::lock_1_Click);
			// 
			// lock_6
			// 
			this->lock_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_6.BackgroundImage")));
			this->lock_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->lock_6->FlatAppearance->BorderSize = 0;
			this->lock_6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->lock_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_6->Location = System::Drawing::Point(181, 224);
			this->lock_6->Name = L"lock_6";
			this->lock_6->Size = System::Drawing::Size(20, 20);
			this->lock_6->TabIndex = 2;
			this->lock_6->UseVisualStyleBackColor = true;
			this->lock_6->Click += gcnew System::EventHandler(this, &Control5::lock_2_Click);
			// 
			// lock_8
			// 
			this->lock_8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_8.BackgroundImage")));
			this->lock_8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->lock_8->FlatAppearance->BorderSize = 0;
			this->lock_8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->lock_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_8->Location = System::Drawing::Point(321, 224);
			this->lock_8->Name = L"lock_8";
			this->lock_8->Size = System::Drawing::Size(20, 20);
			this->lock_8->TabIndex = 4;
			this->lock_8->UseVisualStyleBackColor = true;
			this->lock_8->Click += gcnew System::EventHandler(this, &Control5::lock_4_Click);
			// 
			// lock_7
			// 
			this->lock_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lock_7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_7.BackgroundImage")));
			this->lock_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lock_7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->lock_7->FlatAppearance->BorderSize = 0;
			this->lock_7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->lock_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lock_7->Location = System::Drawing::Point(251, 224);
			this->lock_7->Name = L"lock_7";
			this->lock_7->Size = System::Drawing::Size(20, 20);
			this->lock_7->TabIndex = 3;
			this->lock_7->UseVisualStyleBackColor = true;
			this->lock_7->Click += gcnew System::EventHandler(this, &Control5::lock_3_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label5->Location = System::Drawing::Point(113, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"■";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label6->Location = System::Drawing::Point(183, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 33;
			this->label6->Text = L"■";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label7->Location = System::Drawing::Point(253, 248);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 34;
			this->label7->Text = L"■";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label8->Location = System::Drawing::Point(323, 248);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 35;
			this->label8->Text = L"■";
			this->label8->Visible = false;
			// 
			// Control5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lock_4);
			this->Controls->Add(this->lock_3);
			this->Controls->Add(this->lock_2);
			this->Controls->Add(this->lock_1);
			this->Controls->Add(this->lock_8);
			this->Controls->Add(this->lock_7);
			this->Controls->Add(this->lock_6);
			this->Controls->Add(this->lock_5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"Control5";
			this->Size = System::Drawing::Size(453, 437);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool lock1 = false, lock2 = false, lock3 = false, lock4 = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random ran;
		ran.Next(0, 255);
		int r, g, b;

		if (!lock1) {
			r = ran.Next(0, 255), g = ran.Next(0, 255), b = ran.Next(0, 255);
			label1->BackColor = Color::FromArgb(r, g, b);
		}

		if (!lock2) {
			r = ran.Next(0, 255), g = ran.Next(0, 255), b = ran.Next(0, 255);
			label2->BackColor = Color::FromArgb(r, g, b);
		}

		if (!lock3) {
			r = ran.Next(0, 255), g = ran.Next(0, 255), b = ran.Next(0, 255);
			label3->BackColor = Color::FromArgb(r, g, b);
		}

		if (!lock4) {
			r = ran.Next(0, 255), g = ran.Next(0, 255), b = ran.Next(0, 255);
			label4->BackColor = Color::FromArgb(r, g, b);
		}
	}
		   // lock button logic
	private: System::Void lock_1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lock1) {
			lock1 = false;
			label5->Hide();
		}
		else {
			lock1 = true;
			label5->Show();
		}
	}
	private: System::Void lock_2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lock2) {
			lock2 = false;
			label6->Hide();
		}
		else {
			lock2 = true;
			label6->Show();
		}
	}

	private: System::Void lock_3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lock3) {
			lock3 = false;
			label7->Hide();
		}
		else {
			lock3 = true;
			label7->Show();
		}
	}
	private: System::Void lock_4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lock4) {
			lock4 = false;
			label8->Hide();

		}
		else {
			lock4 = true;;
			label8->Show();
		}
	}
		   // lock button logic
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		int r, g, b, r1, g1, b1;

		if (!toolStripButton1->Checked) {
			toolStripButton1->Checked = true;
			r = 234, g = 188, b = 122; //light
			r1 = 41, g1 = 55, b1 = 69;//dark
			button1->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;

			lock_5->BringToFront();
			lock_6->BringToFront();
			lock_7->BringToFront();
			lock_8->BringToFront();
		}
		else {
			toolStripButton1->Checked = false;
			r = 41, g = 55, b = 69; // dark
			r1 = 234, g1 = 188, b1 = 122; // light
			button1->FlatAppearance->MouseOverBackColor = Color::Teal;

			lock_1->BringToFront();
			lock_2->BringToFront();
			lock_3->BringToFront();
			lock_4->BringToFront();
		}
		this->BackColor = Color::FromArgb(r1, g1, b1);
		button1->BackColor = Color::FromArgb(r, g, b);
		button1->ForeColor = Color::FromArgb(r1, g1, b1);

	}
	};
}
