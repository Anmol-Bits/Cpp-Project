#pragma once
#include "Control1.h"
#include "Control2.h"
#include "Control3.h"
#include "Control5.h"
#include "Control6.h"

namespace Tools {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ container;
	private: System::Windows::Forms::Panel^ side_bar;
	private: System::Windows::Forms::Button^ converter_first;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::Button^ convertor;
	private: System::Windows::Forms::Panel^ C_panel;
	private: System::Windows::Forms::Button^ invest;
	private: System::Windows::Forms::Panel^ i_panel;

	private: System::Windows::Forms::Button^ invesment_first;
	private: System::Windows::Forms::Button^ converter_second;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ color_panel;
	private: System::Windows::Forms::Button^ color_first;
	private: System::Windows::Forms::Button^ color;
	private: System::Windows::Forms::Button^ clipboard;
	private: System::Windows::Forms::Panel^ clip_panel;
	private: System::Windows::Forms::Button^ clip_first;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->container = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->side_bar = (gcnew System::Windows::Forms::Panel());
			this->clip_panel = (gcnew System::Windows::Forms::Panel());
			this->clip_first = (gcnew System::Windows::Forms::Button());
			this->clipboard = (gcnew System::Windows::Forms::Button());
			this->color_panel = (gcnew System::Windows::Forms::Panel());
			this->color_first = (gcnew System::Windows::Forms::Button());
			this->color = (gcnew System::Windows::Forms::Button());
			this->i_panel = (gcnew System::Windows::Forms::Panel());
			this->invesment_first = (gcnew System::Windows::Forms::Button());
			this->invest = (gcnew System::Windows::Forms::Button());
			this->C_panel = (gcnew System::Windows::Forms::Panel());
			this->converter_second = (gcnew System::Windows::Forms::Button());
			this->converter_first = (gcnew System::Windows::Forms::Button());
			this->convertor = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->container->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->side_bar->SuspendLayout();
			this->clip_panel->SuspendLayout();
			this->color_panel->SuspendLayout();
			this->i_panel->SuspendLayout();
			this->C_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// container
			// 
			this->container->AutoSize = true;
			this->container->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->container->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"container.BackgroundImage")));
			this->container->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->container->Controls->Add(this->label5);
			this->container->Controls->Add(this->label4);
			this->container->Controls->Add(this->pictureBox2);
			this->container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->container->Location = System::Drawing::Point(154, 0);
			this->container->Name = L"container";
			this->container->Size = System::Drawing::Size(453, 437);
			this->container->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(150, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 21);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Developed by Extern inc.";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(67, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(319, 42);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Welcome To Tools";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(139, 101);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(172, 146);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// side_bar
			// 
			this->side_bar->AutoScroll = true;
			this->side_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->side_bar->Controls->Add(this->clip_panel);
			this->side_bar->Controls->Add(this->clipboard);
			this->side_bar->Controls->Add(this->color_panel);
			this->side_bar->Controls->Add(this->color);
			this->side_bar->Controls->Add(this->i_panel);
			this->side_bar->Controls->Add(this->invest);
			this->side_bar->Controls->Add(this->C_panel);
			this->side_bar->Controls->Add(this->convertor);
			this->side_bar->Dock = System::Windows::Forms::DockStyle::Left;
			this->side_bar->Font = (gcnew System::Drawing::Font(L"Gilmer Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->side_bar->Location = System::Drawing::Point(0, 0);
			this->side_bar->Name = L"side_bar";
			this->side_bar->Size = System::Drawing::Size(154, 437);
			this->side_bar->TabIndex = 0;
			// 
			// clip_panel
			// 
			this->clip_panel->Controls->Add(this->clip_first);
			this->clip_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->clip_panel->Location = System::Drawing::Point(0, 312);
			this->clip_panel->Name = L"clip_panel";
			this->clip_panel->Size = System::Drawing::Size(154, 39);
			this->clip_panel->TabIndex = 10;
			this->clip_panel->Visible = false;
			// 
			// clip_first
			// 
			this->clip_first->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->clip_first->Dock = System::Windows::Forms::DockStyle::Top;
			this->clip_first->FlatAppearance->BorderSize = 0;
			this->clip_first->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->clip_first->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clip_first->Font = (gcnew System::Drawing::Font(L"Gilmer Light", 9));
			this->clip_first->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->clip_first->Location = System::Drawing::Point(0, 0);
			this->clip_first->Name = L"clip_first";
			this->clip_first->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->clip_first->Size = System::Drawing::Size(154, 36);
			this->clip_first->TabIndex = 8;
			this->clip_first->Text = L"Text Boxes";
			this->clip_first->UseVisualStyleBackColor = false;
			this->clip_first->Click += gcnew System::EventHandler(this, &MyForm::clip_first_Click);
			// 
			// clipboard
			// 
			this->clipboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->clipboard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->clipboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->clipboard->FlatAppearance->BorderSize = 0;
			this->clipboard->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->clipboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clipboard->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clipboard->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->clipboard->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->clipboard->Location = System::Drawing::Point(0, 273);
			this->clipboard->Name = L"clipboard";
			this->clipboard->Size = System::Drawing::Size(154, 39);
			this->clipboard->TabIndex = 9;
			this->clipboard->Text = L"Urgent Notes";
			this->clipboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->clipboard->UseVisualStyleBackColor = false;
			this->clipboard->Click += gcnew System::EventHandler(this, &MyForm::notes_Click);
			// 
			// color_panel
			// 
			this->color_panel->Controls->Add(this->color_first);
			this->color_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->color_panel->Location = System::Drawing::Point(0, 234);
			this->color_panel->Name = L"color_panel";
			this->color_panel->Size = System::Drawing::Size(154, 39);
			this->color_panel->TabIndex = 8;
			this->color_panel->Visible = false;
			// 
			// color_first
			// 
			this->color_first->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->color_first->Dock = System::Windows::Forms::DockStyle::Top;
			this->color_first->FlatAppearance->BorderSize = 0;
			this->color_first->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->color_first->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->color_first->Font = (gcnew System::Drawing::Font(L"Gilmer Light", 9));
			this->color_first->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->color_first->Location = System::Drawing::Point(0, 0);
			this->color_first->Name = L"color_first";
			this->color_first->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->color_first->Size = System::Drawing::Size(154, 39);
			this->color_first->TabIndex = 8;
			this->color_first->Text = L"Color Pallete";
			this->color_first->UseVisualStyleBackColor = false;
			this->color_first->Click += gcnew System::EventHandler(this, &MyForm::color_first_Click);
			// 
			// color
			// 
			this->color->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->color->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->color->Dock = System::Windows::Forms::DockStyle::Top;
			this->color->FlatAppearance->BorderSize = 0;
			this->color->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->color->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->color->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->color->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->color->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->color->Location = System::Drawing::Point(0, 195);
			this->color->Name = L"color";
			this->color->Size = System::Drawing::Size(154, 39);
			this->color->TabIndex = 7;
			this->color->Text = L"Colors";
			this->color->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->color->UseVisualStyleBackColor = false;
			this->color->Click += gcnew System::EventHandler(this, &MyForm::color_Click);
			// 
			// i_panel
			// 
			this->i_panel->Controls->Add(this->invesment_first);
			this->i_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->i_panel->Location = System::Drawing::Point(0, 156);
			this->i_panel->Name = L"i_panel";
			this->i_panel->Size = System::Drawing::Size(154, 39);
			this->i_panel->TabIndex = 6;
			this->i_panel->Visible = false;
			// 
			// invesment_first
			// 
			this->invesment_first->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->invesment_first->Dock = System::Windows::Forms::DockStyle::Top;
			this->invesment_first->FlatAppearance->BorderSize = 0;
			this->invesment_first->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->invesment_first->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->invesment_first->Font = (gcnew System::Drawing::Font(L"Gilmer Light", 9));
			this->invesment_first->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->invesment_first->Location = System::Drawing::Point(0, 0);
			this->invesment_first->Name = L"invesment_first";
			this->invesment_first->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->invesment_first->Size = System::Drawing::Size(154, 39);
			this->invesment_first->TabIndex = 5;
			this->invesment_first->Text = L"SIP Calculator";
			this->invesment_first->UseVisualStyleBackColor = false;
			this->invesment_first->Click += gcnew System::EventHandler(this, &MyForm::invesment_first_Click);
			// 
			// invest
			// 
			this->invest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->invest->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->invest->Dock = System::Windows::Forms::DockStyle::Top;
			this->invest->FlatAppearance->BorderSize = 0;
			this->invest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->invest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->invest->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->invest->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->invest->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->invest->Location = System::Drawing::Point(0, 117);
			this->invest->Name = L"invest";
			this->invest->Size = System::Drawing::Size(154, 39);
			this->invest->TabIndex = 4;
			this->invest->Text = L"Investment";
			this->invest->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->invest->UseVisualStyleBackColor = false;
			this->invest->Click += gcnew System::EventHandler(this, &MyForm::invest_Click);
			// 
			// C_panel
			// 
			this->C_panel->Controls->Add(this->converter_second);
			this->C_panel->Controls->Add(this->converter_first);
			this->C_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->C_panel->Location = System::Drawing::Point(0, 39);
			this->C_panel->Name = L"C_panel";
			this->C_panel->Size = System::Drawing::Size(154, 78);
			this->C_panel->TabIndex = 5;
			this->C_panel->Visible = false;
			// 
			// converter_second
			// 
			this->converter_second->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->converter_second->Dock = System::Windows::Forms::DockStyle::Top;
			this->converter_second->FlatAppearance->BorderSize = 0;
			this->converter_second->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->converter_second->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->converter_second->Font = (gcnew System::Drawing::Font(L"Gilmer Light", 9));
			this->converter_second->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->converter_second->Location = System::Drawing::Point(0, 39);
			this->converter_second->Name = L"converter_second";
			this->converter_second->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->converter_second->Size = System::Drawing::Size(154, 39);
			this->converter_second->TabIndex = 3;
			this->converter_second->Text = L"Base Converter";
			this->converter_second->UseVisualStyleBackColor = false;
			this->converter_second->Click += gcnew System::EventHandler(this, &MyForm::converter_second_Click);
			// 
			// converter_first
			// 
			this->converter_first->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->converter_first->Dock = System::Windows::Forms::DockStyle::Top;
			this->converter_first->FlatAppearance->BorderSize = 0;
			this->converter_first->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->converter_first->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->converter_first->Font = (gcnew System::Drawing::Font(L"Gilmer Light", 9));
			this->converter_first->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->converter_first->Location = System::Drawing::Point(0, 0);
			this->converter_first->Name = L"converter_first";
			this->converter_first->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->converter_first->Size = System::Drawing::Size(154, 39);
			this->converter_first->TabIndex = 2;
			this->converter_first->Text = L"Unit Converter";
			this->converter_first->UseVisualStyleBackColor = false;
			this->converter_first->Click += gcnew System::EventHandler(this, &MyForm::converter_first_Click);
			// 
			// convertor
			// 
			this->convertor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->convertor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->convertor->Dock = System::Windows::Forms::DockStyle::Top;
			this->convertor->FlatAppearance->BorderSize = 0;
			this->convertor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->convertor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->convertor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convertor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->convertor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->convertor->Location = System::Drawing::Point(0, 0);
			this->convertor->Name = L"convertor";
			this->convertor->Size = System::Drawing::Size(154, 39);
			this->convertor->TabIndex = 1;
			this->convertor->Text = L"Converter";
			this->convertor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->convertor->UseVisualStyleBackColor = false;
			this->convertor->Click += gcnew System::EventHandler(this, &MyForm::convertor_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(607, 437);
			this->Controls->Add(this->container);
			this->Controls->Add(this->side_bar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(623, 476);
			this->MinimumSize = System::Drawing::Size(623, 476);
			this->Name = L"MyForm";
			this->Text = L"Tools";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->container->ResumeLayout(false);
			this->container->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->side_bar->ResumeLayout(false);
			this->clip_panel->ResumeLayout(false);
			this->color_panel->ResumeLayout(false);
			this->i_panel->ResumeLayout(false);
			this->C_panel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Control1^ ob1 = gcnew Control1;
		Control2^ ob2 = gcnew Control2;
		Control3^ ob3 = gcnew Control3;
		Control5^ ob5 = gcnew Control5;
		Control6^ ob6 = gcnew Control6;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		container->Controls->Add(ob1);
		ob1->Dock = DockStyle::Fill;

		container->Controls->Add(ob2);
		ob2->Dock = DockStyle::Fill;

		container->Controls->Add(ob3);
		ob3->Dock = DockStyle::Fill;

		container->Controls->Add(ob5);
		ob5->Dock = DockStyle::Fill;

		container->Controls->Add(ob6);
		ob6->Dock = DockStyle::Fill;

		ob1->Hide();
		ob2->Hide();
		ob3->Hide();
		ob5->Hide();
		ob6->Hide();
	}

		   // converter button show
	private: System::Void convertor_Click(System::Object^ sender, System::EventArgs^ e) {
		i_panel->Hide();
		color_panel->Hide();
		clip_panel->Hide();

		C_panel->Visible = (C_panel->Visible == false) ? true : false;
	}
		   // converter button show

		   // Investment button show
	private: System::Void invest_Click(System::Object^ sender, System::EventArgs^ e) {
		C_panel->Hide();
		color_panel->Hide();
		clip_panel->Hide();

		i_panel->Visible = (i_panel->Visible == false) ? true : false;
	}
		   // Investment button show

		   // color button show
	private: System::Void color_Click(System::Object^ sender, System::EventArgs^ e) {
		C_panel->Hide();
		i_panel->Hide();
		clip_panel->Hide();

		color_panel->Visible = (color_panel->Visible == false) ? true : false;
	}
		   // color button show

		   // clipboard button show
	private: System::Void notes_Click(System::Object^ sender, System::EventArgs^ e) {
		C_panel->Hide();
		i_panel->Hide();
		color_panel->Hide();

		clip_panel->Visible = (clip_panel->Visible == false) ? true : false;
	}
		   // clipboard button show

		   //
		   /* inside button events */
		   //

		   // click events for button click of converter
	private: System::Void converter_first_Click(System::Object^ sender, System::EventArgs^ e) {
		ob2->Hide();
		ob3->Hide();
		ob5->Hide();
		ob6->Hide();

		ob1->Show();
		/*container->Controls->Add(ob1);
		ob1->Dock = DockStyle::Fill;*/
		ob1->BringToFront();
		this->TopMost = false;
	}
	private: System::Void converter_second_Click(System::Object^ sender, System::EventArgs^ e) {
		ob1->Hide();
		ob3->Hide();
		ob5->Hide();
		ob6->Hide();

		ob2->Show();
		/*container->Controls->Add(ob2);
		ob2->Dock = DockStyle::Fill;*/
		ob2->BringToFront();
		this->TopMost = false;
	}
		   // click events for button click of converter

		   // click events for button click of investment
	private: System::Void invesment_first_Click(System::Object^ sender, System::EventArgs^ e) {
		ob1->Hide();
		ob2->Hide();	
		ob5->Hide();
		ob6->Hide();

		ob3->Show();
		/*container->Controls->Add(ob3);
		ob3->Dock = DockStyle::Fill;*/
		ob3->BringToFront();
		this->TopMost = false;
	}
		   // click events for button click of converter

		   // click events for button click of color
	private: System::Void color_first_Click(System::Object^ sender, System::EventArgs^ e) {
		ob1->Hide();
		ob2->Hide();
		ob3->Hide();
		ob6->Hide();

		ob5->Show();
		/*container->Controls->Add(ob5);
		ob5->Dock = DockStyle::Fill;*/
		ob5->BringToFront();
		this->TopMost = false;
	}
		   // click events for button click of color

		   // click events for button click of clipboard
	private: System::Void clip_first_Click(System::Object^ sender, System::EventArgs^ e) {
		ob1->Hide();
		ob2->Hide();
		ob3->Hide();
		ob5->Hide();

		ob6->Show();
		ob6->BringToFront();
		this->TopMost = true;
	}
		   // click events for button click of clipboard

};
}