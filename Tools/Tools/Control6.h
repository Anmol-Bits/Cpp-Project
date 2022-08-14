#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Tools {

	/// <summary>
	/// Summary for Control6
	/// </summary>
	public ref class Control6 : public System::Windows::Forms::UserControl
	{
	public:
		Control6(void)
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
		~Control6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:

	private: System::Windows::Forms::ToolStripButton^ help_button;
	private: System::Windows::Forms::ToolStripButton^ nightmode;





	private: System::Windows::Forms::Label^ label1;










	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::ToolStripButton^ wordwrap_button;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ zoom_in;





	private: System::Windows::Forms::Button^ zoom_out;
	private: System::Windows::Forms::Label^ label6;














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
			this->nightmode = (gcnew System::Windows::Forms::ToolStripButton());
			this->wordwrap_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->help_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->zoom_in = (gcnew System::Windows::Forms::Button());
			this->zoom_out = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nightmode, this->wordwrap_button,
					this->help_button
			});
			this->toolStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::HorizontalStackWithOverflow;
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Padding = System::Windows::Forms::Padding(0);
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(453, 25);
			this->toolStrip1->Stretch = true;
			this->toolStrip1->TabIndex = 22;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// nightmode
			// 
			this->nightmode->BackColor = System::Drawing::Color::Transparent;
			this->nightmode->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->nightmode->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nightmode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->nightmode->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->nightmode->Name = L"nightmode";
			this->nightmode->Size = System::Drawing::Size(74, 22);
			this->nightmode->Text = L"Night Mode";
			this->nightmode->Click += gcnew System::EventHandler(this, &Control6::nightmode_Click);
			// 
			// wordwrap_button
			// 
			this->wordwrap_button->BackColor = System::Drawing::Color::Transparent;
			this->wordwrap_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->wordwrap_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wordwrap_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->wordwrap_button->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->wordwrap_button->Name = L"wordwrap_button";
			this->wordwrap_button->Size = System::Drawing::Size(71, 22);
			this->wordwrap_button->Text = L"Word Wrap";
			this->wordwrap_button->Click += gcnew System::EventHandler(this, &Control6::wordwrap_button_Click);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Location = System::Drawing::Point(50, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 18);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Zoom";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->richTextBox1->Location = System::Drawing::Point(21, 80);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(199, 145);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			this->richTextBox1->Enter += gcnew System::EventHandler(this, &Control6::richTextBox1_Enter);
			this->richTextBox1->Leave += gcnew System::EventHandler(this, &Control6::richTextBox1_Leave);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->richTextBox2->Location = System::Drawing::Point(240, 80);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(199, 145);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			this->richTextBox2->WordWrap = false;
			this->richTextBox2->Enter += gcnew System::EventHandler(this, &Control6::richTextBox2_Enter);
			this->richTextBox2->Leave += gcnew System::EventHandler(this, &Control6::richTextBox2_Leave);
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->richTextBox3->Location = System::Drawing::Point(21, 246);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(199, 145);
			this->richTextBox3->TabIndex = 5;
			this->richTextBox3->Text = L"";
			this->richTextBox3->WordWrap = false;
			this->richTextBox3->Enter += gcnew System::EventHandler(this, &Control6::richTextBox3_Enter);
			this->richTextBox3->Leave += gcnew System::EventHandler(this, &Control6::richTextBox3_Leave);
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->richTextBox4->Location = System::Drawing::Point(240, 246);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(199, 145);
			this->richTextBox4->TabIndex = 6;
			this->richTextBox4->Text = L"";
			this->richTextBox4->WordWrap = false;
			this->richTextBox4->Enter += gcnew System::EventHandler(this, &Control6::richTextBox4_Enter);
			this->richTextBox4->Leave += gcnew System::EventHandler(this, &Control6::richTextBox4_Leave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(84, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 19);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Enter text";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(303, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 19);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Enter text";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(84, 309);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 19);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Enter text";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(303, 309);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 19);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Enter text";
			// 
			// zoom_in
			// 
			this->zoom_in->BackColor = System::Drawing::Color::Transparent;
			this->zoom_in->FlatAppearance->BorderSize = 0;
			this->zoom_in->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->zoom_in->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zoom_in->Font = (gcnew System::Drawing::Font(L"Calibri", 14));
			this->zoom_in->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->zoom_in->Location = System::Drawing::Point(99, 34);
			this->zoom_in->Name = L"zoom_in";
			this->zoom_in->Size = System::Drawing::Size(24, 30);
			this->zoom_in->TabIndex = 2;
			this->zoom_in->Text = L"+";
			this->zoom_in->UseVisualStyleBackColor = false;
			this->zoom_in->Click += gcnew System::EventHandler(this, &Control6::zoom_in_Click);
			// 
			// zoom_out
			// 
			this->zoom_out->BackColor = System::Drawing::Color::Transparent;
			this->zoom_out->FlatAppearance->BorderSize = 0;
			this->zoom_out->FlatAppearance->MouseOverBackColor = System::Drawing::Color::NavajoWhite;
			this->zoom_out->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zoom_out->Font = (gcnew System::Drawing::Font(L"Calibri", 14));
			this->zoom_out->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->zoom_out->Location = System::Drawing::Point(22, 34);
			this->zoom_out->Name = L"zoom_out";
			this->zoom_out->Size = System::Drawing::Size(24, 30);
			this->zoom_out->TabIndex = 1;
			this->zoom_out->Text = L"-";
			this->zoom_out->UseVisualStyleBackColor = false;
			this->zoom_out->Click += gcnew System::EventHandler(this, &Control6::zoom_out_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label6->Location = System::Drawing::Point(36, 409);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(394, 18);
			this->label6->TabIndex = 32;
			this->label6->Text = L"*Note : This window will appear above from all other windows";
			// 
			// Control6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->Controls->Add(this->label6);
			this->Controls->Add(this->zoom_out);
			this->Controls->Add(this->zoom_in);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"Control6";
			this->Size = System::Drawing::Size(453, 437);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		float scale = 1.0f;

	private: System::Void zoom_out_Click(System::Object^ sender, System::EventArgs^ e) {
		if (scale > 1) {
			scale -= 0.2f;
			richTextBox1->ZoomFactor = scale;
			richTextBox2->ZoomFactor = scale;
			richTextBox3->ZoomFactor = scale;
			richTextBox4->ZoomFactor = scale;
		}
	}
	private: System::Void zoom_in_Click(System::Object^ sender, System::EventArgs^ e) {
		if (scale < 2) {
			scale += 0.2f;
			richTextBox1->ZoomFactor = scale;
			richTextBox2->ZoomFactor = scale;
			richTextBox3->ZoomFactor = scale;
			richTextBox4->ZoomFactor = scale;
		}
	}

	private: System::Void richTextBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		label2->Hide();
	}
	private: System::Void richTextBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		label3->Hide();
	}
	private: System::Void richTextBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		label4->Hide();
	}
	private: System::Void richTextBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
		label5->Hide();
	}

	private: System::Void richTextBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->Text == "") label2->Show();
	}
	private: System::Void richTextBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox2->Text == "") label3->Show();
	}
	private: System::Void richTextBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox3->Text == "") label4->Show();
	}
	private: System::Void richTextBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox4->Text == "") label5->Show();
	}

	private: System::Void wordwrap_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!wordwrap_button->Checked) {
			wordwrap_button->Checked = true;
			richTextBox1->WordWrap = true;
			richTextBox2->WordWrap = true;
			richTextBox3->WordWrap = true;
			richTextBox4->WordWrap = true;
		}
		else {
			wordwrap_button->Checked = false;
			richTextBox1->WordWrap = false;
			richTextBox2->WordWrap = false;
			richTextBox3->WordWrap = false;
			richTextBox4->WordWrap = false;
		}

	}

	private: System::Void nightmode_Click(System::Object^ sender, System::EventArgs^ e) {
		int r, g, b, r1, g1, b1;
		if (!nightmode->Checked) {
			nightmode->Checked = true;
			r = 234, g = 188, b = 122; //light
			r1 = 41, g1 = 55, b1 = 69;//dark
			zoom_in->FlatAppearance->MouseOverBackColor = Color::Teal;
			zoom_out->FlatAppearance->MouseOverBackColor = Color::Teal;
		}
		else {
			nightmode->Checked = false;
			r = 41, g = 55, b = 69; // dark
			r1 = 234, g1 = 188, b1 = 122; // light

			zoom_out->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
			zoom_in->FlatAppearance->MouseOverBackColor = Color::NavajoWhite;
		}
		this->BackColor = Color::FromArgb(r1, g1, b1);
		label1->ForeColor = Color::FromArgb(r, g, b);
		label6->ForeColor = Color::FromArgb(r, g, b);


		zoom_out->ForeColor = Color::FromArgb(r, b, g);
		zoom_in->ForeColor = Color::FromArgb(r, b, g);

		richTextBox1->BackColor = Color::FromArgb(r1, g1, b1);
		richTextBox2->BackColor = Color::FromArgb(r1, g1, b1);
		richTextBox3->BackColor = Color::FromArgb(r1, g1, b1);
		richTextBox4->BackColor = Color::FromArgb(r1, g1, b1);

		richTextBox1->ForeColor = Color::FromArgb(r, g, b);
		richTextBox2->ForeColor = Color::FromArgb(r, g, b);
		richTextBox3->ForeColor = Color::FromArgb(r, g, b);
		richTextBox4->ForeColor = Color::FromArgb(r, g, b);


	}


	};
}
