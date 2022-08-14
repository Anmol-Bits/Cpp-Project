#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
namespace Tools {
	/// <summary>
	/// Summary for Control1
	/// </summary>
	public ref class Control1 : public System::Windows::Forms::UserControl
	{
	public:
		Control1(void)
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
		~Control1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Mass;
	private: System::Windows::Forms::Button^ Data_b;
	private: System::Windows::Forms::Button^ volume;
	private: System::Windows::Forms::Button^ Length;
	private: System::Windows::Forms::Button^ temp;
	private: System::Windows::Forms::Button^ Area;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ flip;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ help_button;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Control1::typeid));
			this->Mass = (gcnew System::Windows::Forms::Button());
			this->Data_b = (gcnew System::Windows::Forms::Button());
			this->volume = (gcnew System::Windows::Forms::Button());
			this->Length = (gcnew System::Windows::Forms::Button());
			this->temp = (gcnew System::Windows::Forms::Button());
			this->Area = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->flip = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->help_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Mass
			// 
			this->Mass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Mass->BackColor = System::Drawing::Color::Transparent;
			this->Mass->FlatAppearance->BorderSize = 0;
			this->Mass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->Mass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Mass->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mass->Location = System::Drawing::Point(71, 30);
			this->Mass->Name = L"Mass";
			this->Mass->Size = System::Drawing::Size(55, 31);
			this->Mass->TabIndex = 2;
			this->Mass->Text = L"Mass";
			this->Mass->UseVisualStyleBackColor = false;
			this->Mass->Click += gcnew System::EventHandler(this, &Control1::option_click);
			// 
			// Data_b
			// 
			this->Data_b->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Data_b->BackColor = System::Drawing::Color::Transparent;
			this->Data_b->FlatAppearance->BorderSize = 0;
			this->Data_b->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->Data_b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Data_b->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Data_b->Location = System::Drawing::Point(372, 30);
			this->Data_b->Name = L"Data_b";
			this->Data_b->Size = System::Drawing::Size(55, 31);
			this->Data_b->TabIndex = 6;
			this->Data_b->Text = L"Data";
			this->Data_b->UseVisualStyleBackColor = false;
			this->Data_b->Click += gcnew System::EventHandler(this, &Control1::option_click);
			// 
			// volume
			// 
			this->volume->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->volume->BackColor = System::Drawing::Color::Transparent;
			this->volume->FlatAppearance->BorderSize = 0;
			this->volume->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->volume->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->volume->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->volume->Location = System::Drawing::Point(130, 30);
			this->volume->Name = L"volume";
			this->volume->Size = System::Drawing::Size(70, 31);
			this->volume->TabIndex = 3;
			this->volume->Text = L"Volume";
			this->volume->UseVisualStyleBackColor = false;
			this->volume->Click += gcnew System::EventHandler(this, &Control1::option_click);
			// 
			// Length
			// 
			this->Length->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Length->BackColor = System::Drawing::Color::Transparent;
			this->Length->FlatAppearance->BorderSize = 0;
			this->Length->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->Length->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Length->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Length->Location = System::Drawing::Point(6, 30);
			this->Length->Name = L"Length";
			this->Length->Size = System::Drawing::Size(65, 31);
			this->Length->TabIndex = 1;
			this->Length->Text = L"Length";
			this->Length->UseVisualStyleBackColor = false;
			this->Length->Click += gcnew System::EventHandler(this, &Control1::option_click);
			// 
			// temp
			// 
			this->temp->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->temp->BackColor = System::Drawing::Color::Transparent;
			this->temp->FlatAppearance->BorderSize = 0;
			this->temp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->temp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->temp->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->temp->Location = System::Drawing::Point(263, 30);
			this->temp->Name = L"temp";
			this->temp->Size = System::Drawing::Size(106, 31);
			this->temp->TabIndex = 5;
			this->temp->Text = L"Temperature";
			this->temp->UseVisualStyleBackColor = false;
			this->temp->Click += gcnew System::EventHandler(this, &Control1::option_click);
			// 
			// Area
			// 
			this->Area->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Area->BackColor = System::Drawing::Color::Transparent;
			this->Area->FlatAppearance->BorderSize = 0;
			this->Area->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->Area->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Area->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Area->Location = System::Drawing::Point(204, 30);
			this->Area->Name = L"Area";
			this->Area->Size = System::Drawing::Size(55, 31);
			this->Area->TabIndex = 4;
			this->Area->Text = L"Area";
			this->Area->UseVisualStyleBackColor = false;
			this->Area->Click += gcnew System::EventHandler(this, &Control1::option_click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Location = System::Drawing::Point(11, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 5);
			this->label1->TabIndex = 6;
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label2->Location = System::Drawing::Point(77, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 5);
			this->label2->TabIndex = 7;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label3->Location = System::Drawing::Point(136, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 5);
			this->label3->TabIndex = 8;
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label4->Location = System::Drawing::Point(211, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 5);
			this->label4->TabIndex = 9;
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label5->Location = System::Drawing::Point(272, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 5);
			this->label5->TabIndex = 10;
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label6->Location = System::Drawing::Point(380, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 5);
			this->label6->TabIndex = 11;
			this->label6->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(70, 127);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 23);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->TabStop = false;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &Control1::comboBox1_TextChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Control1::comboBox1_KeyPress);
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(70, 240);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(153, 23);
			this->comboBox2->TabIndex = 10;
			this->comboBox2->TabStop = false;
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &Control1::comboBox2_TextChanged);
			this->comboBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Control1::comboBox1_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox1->Location = System::Drawing::Point(70, 168);
			this->textBox1->MaxLength = 16;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(221, 30);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->Click += gcnew System::EventHandler(this, &Control1::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Control1::text_changes);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Control1::textBox2_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->textBox2->Location = System::Drawing::Point(70, 278);
			this->textBox2->MaxLength = 16;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(221, 30);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->Click += gcnew System::EventHandler(this, &Control1::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Control1::text_changes);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Control1::textBox2_KeyPress);
			// 
			// flip
			// 
			this->flip->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->flip->BackColor = System::Drawing::Color::Transparent;
			this->flip->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->flip->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->flip->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flip->Location = System::Drawing::Point(337, 229);
			this->flip->Name = L"flip";
			this->flip->Size = System::Drawing::Size(35, 25);
			this->flip->TabIndex = 13;
			this->flip->Text = L"ᐃᐁ";
			this->flip->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->flip->UseVisualStyleBackColor = false;
			this->flip->Click += gcnew System::EventHandler(this, &Control1::flip_Click);
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
			this->toolStrip1->Size = System::Drawing::Size(435, 25);
			this->toolStrip1->TabIndex = 22;
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
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Control1::toolStripButton1_Click);
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->label7->Location = System::Drawing::Point(102, 401);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(235, 19);
			this->label7->TabIndex = 23;
			this->label7->Text = L"*only temperature has (-ve) values";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(342, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 30);
			this->button1->TabIndex = 36;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Control1::copy_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(342, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 30);
			this->button2->TabIndex = 35;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Control1::copy_Click);
			// 
			// Control1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->flip);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Area);
			this->Controls->Add(this->temp);
			this->Controls->Add(this->Length);
			this->Controls->Add(this->volume);
			this->Controls->Add(this->Data_b);
			this->Controls->Add(this->Mass);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Name = L"Control1";
			this->Size = System::Drawing::Size(435, 437);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		String^ c;
		bool dot_switch, minus_switch, val = false, finder;
		double a;
		ComboBox^ first, ^ second;

		// clearing the comboBoxes
	private: void ready_combobox() {
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox1->Items->Clear();
		comboBox2->Items->Clear();
	}
		   // clearing the comboBoxes

		   // label visibility on click
	private: void lab() {
		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
	}
		   // label visibility on click

		   // setting the comboBoxes accoring to the option clicked
	private: System::Void option_click(System::Object^ sender, System::EventArgs^ e) {
		c = safe_cast<Button^>(sender)->Text;
		ready_combobox();
		lab();
		if (c == "Length") {
			label1->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) { L"Millimeter", L"Centimeter", L"Meter", L"Kilometer", L"Inch", L"Foot", L"Yard", L"Mile", L"Nautical mile", L"Mil" });
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) { L"Millimeter", L"Centimeter", L"Meter", L"Kilometer", L"Inch", L"Foot", L"Yard", L"Mile", L"Nautical mile", L"Mil" });
		}
		else if (c == "Mass") {
			label2->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"Ton", L"Ton (UK)", L"Ton (US)", L"Pound", L"Ounce", L"Kilogram", L"Gram", L"Carat" });
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"Ton", L"Ton (UK)", L"Ton (US)", L"Pound", L"Ounce", L"Kilogram", L"Gram", L"Carat" });
		}
		else if (c == "Volume") {
			label3->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"Gallon (US)", L"Gallon (UK)", L"Liter", L"Milliliter", L"Cubic centimeter (cc)", L"Cubic meter", L"Cubic inch", L"Cubic foot" });
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"Gallon (US)", L"Gallon (UK)", L"Liter", L"Milliliter", L"Cubic centimeter (cc)", L"Cubic meter", L"Cubic inch", L"Cubic foot" });
		}
		else if (c == "Area") {
			label4->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) { L"Acre", L"Are", L"Hectare", L"Square Centimeter", L"Square Feet", L"Square Inch", L"Square Meter", L"Square Kilometer", L"Square Millimeter", L"Square Yard", L"Square Mile" });
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) { L"Acre", L"Are", L"Hectare", L"Square Centimeter", L"Square Feet", L"Square Inch", L"Square Meter", L"Square Kilometer", L"Square Millimeter", L"Square Yard", L"Square Mile" });
		}
		else if (c == "Temperature") {
			label5->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Celcius", L"Fahrenheit", L"Kelvin" });
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Celcius", L"Fahrenheit", L"Kelvin" });
		}
		else {
			label6->Visible = true;
			comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Bit (b)", L"Byte (B)", L"Kilobyte (KB)", L"Megabyte (MB)", L"Gigabyte (GB)", L"Terabyte (TB)" });
			comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"Bit (b)", L"Byte (B)", L"Kilobyte (KB)", L"Megabyte (MB)", L"Gigabyte (GB)", L"Terabyte (TB)" });
		}
	}
		   // setting the comboBoxes accoring to the option clicked

		   // do not allow writing in both comboboxes, e handling the event of keypressing
	private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
		   // do not allow writing in both comboboxes, e handling the event of keypressing

		   // getting double value only in both textboxes, function name is textBox2_KeyPress
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		dot_switch = false, minus_switch = false;
		TextBox^ box = safe_cast<TextBox^>(sender);
		if (box->Text->Contains("."))	dot_switch = true;
		if (box->Text->Contains("-"))	minus_switch = true;
		if (e->KeyChar == 45 && val == true) {
			if (minus_switch == false) {
				box->Text = "-" + box->Text;
				box->SelectionStart = box->Text->Length;
			}
			else {
				box->Text = box->Text->Remove(0, 1);
				box->SelectionStart = box->Text->Length;
			}
		}

		if (dot_switch == false) {
			if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 127 && e->KeyChar != 8 && e->KeyChar != 46 && e->KeyChar != 3 && e->KeyChar != 22 && e->KeyChar != 24 && e->KeyChar != 25 && e->KeyChar != 26)
				e->Handled = true;
		}
		else {
			if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 127 && e->KeyChar != 8 && e->KeyChar != 3 && e->KeyChar != 22 && e->KeyChar != 24 && e->KeyChar != 25 && e->KeyChar != 26)
				e->Handled = true;
		}
	}
		   // getting double value only in both textboxes, function name is textBox2_KeyPress

		   // copy button
	private: System::Void copy_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "") {
			Clipboard::SetText(textBox2->Text);
			MessageBox::Show("Copied " + textBox2->Text, "Prompt");
		}
	}
		   // copy button

		   // nightmode working
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		int r, g, b, r1, g1, b1;

		if (!toolStripButton1->Checked) {
			toolStripButton1->Checked = true;
			r = 234, g = 188, b = 122; //light
			r1 = 41, g1 = 55, b1 = 69;//dark

			button2->BringToFront();

			Length->FlatAppearance->MouseOverBackColor = Color::Teal;
			Mass->FlatAppearance->MouseOverBackColor = Color::Teal;
			volume->FlatAppearance->MouseOverBackColor = Color::Teal;
			Data_b->FlatAppearance->MouseOverBackColor = Color::Teal;
			temp->FlatAppearance->MouseOverBackColor = Color::Teal;
			Area->FlatAppearance->MouseOverBackColor = Color::Teal;
		}
		else {
			toolStripButton1->Checked = false;
			r = 41, g = 55, b = 69; // dark
			r1 = 234, g1 = 188, b1 = 122; // light

			button1->BringToFront();

			Length->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
			Mass->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
			volume->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
			Data_b->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
			temp->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
			Area->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
		}

		this->BackColor = Color::FromArgb(r1,g1,b1);
		comboBox1->BackColor = Color::FromArgb(r1, g1, b1);
		comboBox1->ForeColor = Color::FromArgb(r, g, b);

		comboBox2->BackColor = Color::FromArgb(r1, g1, b1);
		comboBox2->ForeColor = Color::FromArgb(r, g, b);

		textBox1->BackColor = Color::FromArgb(r1, g1, b1);
		textBox1->ForeColor = Color::FromArgb(r, g, b);

		textBox2->BackColor = Color::FromArgb(r1, g1, b1);
		textBox2->ForeColor = Color::FromArgb(r, g, b);

		flip->ForeColor = Color::FromArgb(r, g, b); // flip button

		Length->ForeColor = Color::FromArgb(r, g, b);
		volume->ForeColor = Color::FromArgb(r, g, b);
		Mass->ForeColor = Color::FromArgb(r, g, b);
		Data_b->ForeColor = Color::FromArgb(r, g, b);
		temp->ForeColor = Color::FromArgb(r, g, b);
		Area->ForeColor = Color::FromArgb(r, g, b);

		label1->BackColor = Color::FromArgb(r, g, b);
		label2->BackColor = Color::FromArgb(r, g, b);
		label3->BackColor = Color::FromArgb(r, g, b);
		label4->BackColor = Color::FromArgb(r, g, b);
		label5->BackColor = Color::FromArgb(r, g, b);
		label6->BackColor = Color::FromArgb(r, g, b);
		
		label7->ForeColor = Color::FromArgb(r, g, b);
	}
		   // nightmode working

		   // flip button working
	private: System::Void flip_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text == "" || comboBox2->Text == "") return;
		String ^tem = comboBox1->Text;
		comboBox1->Text = comboBox2->Text;
		comboBox2->Text = tem;
		working(textBox1, textBox2);
	}
		   // flip button working

		   // Length
		   //
	private: void l1() {
		if (first->Text == "Kilometer") a *= 1000;
		else if (first->Text == "Foot") a *= 0.3048;
		else if (first->Text == "Yard") a *= 0.9144;
		else if (first->Text == "Centimeter") a *= 0.01;
		else if (first->Text == "Millimeter") a *= 0.001;
		else if (first->Text == "Inch") a *= 0.0254;
		else if (first->Text == "Mile") a *= 1609.344;
		else if (first->Text == "Nautical mile") a *= 1852;
		else if (first->Text == "Mil") a *= 0.0000254;
	}

	private: void l2() {
		if (second->Text == "Kilometer") a *= 0.001;
		else if (second->Text == "Foot") a /= 0.3048;
		else if (second->Text == "Yard") a /= 0.9144;
		else if (second->Text == "Centimeter") a *= 100;
		else if (second->Text == "Millimeter") a *= 1000;
		else if (second->Text == "Inch") a /= 0.0254;
		else if (second->Text == "Mile") a /= 1609.344;
		else if (second->Text == "Nautical mile") a /= 1852;
		else if (second->Text == "Mil") a /= 0.0000254;
	}
		   //
		   // Length

		   // Area
		   //
	private: void a1() {
		if (first->Text == "Acre") a *= 4046.8564224;
		else if (first->Text == "Are") a *= 100;
		else if (first->Text == "Hectare") a *= 10000;
		else if (first->Text == "Square Centimeter") a /= 10000;
		else if (first->Text == "Square Feet") a *= 0.09290304;
		else if (first->Text == "Square Inch") a /= 1550.0031000062;
		else if (first->Text == "Square Kilometer") a *= 1000000;
		else if (first->Text == "Square Millimeter") a /= 1000000;
		else if (first->Text == "Square Yard") a /= 0.83612736;
		else if (first->Text == "Square Mile") a /= 2589988.110336;
	}
	private: void a2() {
		if (second->Text == "Acre") a /= 4046.8564224;
		else if (second->Text == "Are") a /= 100;
		else if (second->Text == "Hectare") a /= 10000;
		else if (second->Text == "Square Centimeter") a *= 10000;
		else if (second->Text == "Square Feet") a /= 0.09290304;
		else if (second->Text == "Square Inch") a /= 0.00064516;
		else if (second->Text == "Square Kilometer") a /= 1000000;
		else if (second->Text == "Square Millimeter") a *= 1000000;
		else if (second->Text == "Square Yard") a /= 0.83612736;
		else if (second->Text == "Square Mile") a /= 2589988.110336;
	}
		   //
		   // Area

		   // Volume
		   //
	private: void v1() {
		if (first->Text == "Gallon (US)") a *= 3.785411784;
		else if (first->Text == "Gallon (UK)") a *= 4.54609;
		else if (first->Text == "Milliliter" || first->Text == "Cubic centimeter (cc)") a *= 0.001;
		else if (first->Text == "Cubic meter") a *= 1000;
		else if (first->Text == "Cubic inch") a *= 0.016387064;
		else if (first->Text == "Cubic foot") a *= 28.316846592;
	}

	private: void v2() {
		if (second->Text == "Gallon (US)") a /= 3.785411784;
		else if (second->Text == "Gallon (UK)") a /= 4.54609;
		else if (second->Text == "Milliliter" || second->Text == "Cubic centimeter (cc)") a /= 0.001;
		else if (second->Text == "Cubic meter") a /= 1000;
		else if (second->Text == "Cubic inch") a /= 0.016387064;
		else if (second->Text == "Cubic foot") a /= 28.316846592;
	}
		   //
		   // Volume

		   // Mass
		   //
	private: void m1() {
		if (first->Text == "Ton") a *= 1000;
		else if (first->Text == "Ton(UK)") a *= 1016.0469088;
		else if (first->Text == "Ton(US)") a *= 907.18474;
		else if (first->Text == "Pound") a *= 0.45359237;
		else if (first->Text == "Ounce") a *= 0.0283495231;
		else if (first->Text == "Gram") a *= 0.001;
		else if (first->Text == "Carat") a *= 0.005;
	}

	private: void m2() {
		if (second->Text == "Ton") a /= 1000;
		else if (second->Text == "Ton(UK)") a /= 1016.0469088;
		else if (second->Text == "Ton(US)") a /= 907.18474;
		else if (second->Text == "Pound") a /= 0.45359237;
		else if (second->Text == "Ounce") a /= 0.0283495231;
		else if (second->Text == "Gram") a *= 1000;
		else if (second->Text == "Carat") a *= 5000;
	}
		   //
		   // Mass

		   // Temperature
		   //
	private: void t() {
		if (first->Text == "Celcius") {
			if (second->Text == "Fahrenheit") a = a * 1.8 + 32;
			if (second->Text == "Kelvin") a += 273.15;
		}
		else if (first->Text == "Fahrenheit") {
			if (second->Text == "Celcius") a = (a - 32.0) / 1.8;
			if (second->Text == "Kelvin") a = (a - 32.0) / 1.8 + 273.15;
		}
		else if (first->Text == "Kelvin") {
			if (second->Text == "Celcius") a -= 273.15;
			if (second->Text == "Fahrenheit") a = (a - 273.15) * 1.8 + 32;
		}
	}
		   //
		   // Temperature

		   // Data
		   //
	private: void d1() {
		if (first->Text == "Bit (b)") a /= 8388608;
		else if (first->Text == "Byte (B)") a /= 1048576;
		else if (first->Text == "Kilobyte (KB)") a /= 1024;
		else if (first->Text == "Gigabyte (GB)") a *= 1024;
		else if (first->Text == "Terabyte (TB") a *= 1048576;
	}
	private: void d2() {
		if (second->Text == "Bit (b)") a *= 8388608;
		else if (second->Text == "Byte (B)") a *= 1048576;
		else if (second->Text == "Kilobyte (KB)") a *= 1024;
		else if (second->Text == "Gigabyte (GB)") a /= 1024;
		else if (second->Text == "Terabyte (TB") a /= 1048576;
	}
		   //
		   // Data

		   // working function
	private: void working(TextBox^ one, TextBox^ two) {
		// checking for incorrect character pasted in the box
		for each (auto var in one->Text) if (var > 64 && var < 91 || var > 96 && var < 123) return;
		// checking for incorrect character pasted in the box

		// manipulating the textbox
		if (one->Text == "" || one->Text == "-" || one->Text == ".") two->Text = "";
		// manipulating the textbox

		// main working
		else {
			if (one == textBox2) first = comboBox2, second = comboBox1;
			else first = comboBox1, second = comboBox2;
			// main working
			a = Convert::ToDouble(one->Text);
			if (c == "Length") l1(), l2();
			else if (c == "Mass") m1(), m2();
			else if (c == "Volume") v1(), v2();
			else if (c == "Area") a1(), a2();
			else if (c == "Temperature") t(), val = true;
			else if (c == "Data") d1(), d2();

			two->Text = Convert::ToString(a);
		}
		// main working
	}
		   // working function

		   // output for combobox textchange
	private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		working(textBox2, textBox1);
	}
	private: System::Void comboBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		working(textBox1, textBox2);
	}
		   // output for combobox textchange

		   // finding which textbox is active
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		finder = true;
	}
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		finder = false;
	}
		   // finding which textbox is active

		   // any textbox change will result output
	private: System::Void text_changes(System::Object^ sender, System::EventArgs^ e) {
		if (finder) working(textBox1, textBox2);
		else working(textBox2, textBox1);
	}
		   // any textbox change will result 
};
}