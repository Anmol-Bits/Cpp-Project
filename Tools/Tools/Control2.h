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
	/// Summary for Control2
	/// </summary>
	public ref class Control2 : public System::Windows::Forms::UserControl
	{
	public:
		Control2(void)
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
		~Control2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ help_button;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Control2::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->help_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(74, 22);
			this->toolStripButton1->Text = L"Night Mode";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Control2::toolStripButton1_Click);
			// 
			// help_button
			// 
			this->help_button->BackColor = System::Drawing::Color::Transparent;
			this->help_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->help_button->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->help_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->help_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"help_button.Image")));
			this->help_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->help_button->Name = L"help_button";
			this->help_button->Size = System::Drawing::Size(37, 22);
			this->help_button->Text = L"Help";
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
			this->textBox2->Location = System::Drawing::Point(109, 284);
			this->textBox2->MaxLength = 16;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(221, 30);
			this->textBox2->TabIndex = 28;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Control2::textBox2_TextChanged);
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
			this->textBox1->Location = System::Drawing::Point(109, 128);
			this->textBox1->MaxLength = 31;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(221, 30);
			this->textBox1->TabIndex = 25;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Control2::textBox1_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(35) {
				L"Binary", L"3", L"4", L"5",
					L"6", L"7", L"Octal", L"9", L"Decimal", L"11", L"12", L"13", L"14", L"15", L"Hexadecimal", L"17", L"18", L"19", L"20", L"21",
					L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36"
			});
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->comboBox2->DropDownHeight = 110;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->IntegralHeight = false;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L"Binary", L"3", L"4", L"5", L"6", L"7", L"Octal",
					L"9", L"Decimal", L"11", L"12", L"13", L"14", L"15", L"Hexadecimal", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36"
			});
			this->comboBox2->Location = System::Drawing::Point(109, 255);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(98, 23);
			this->comboBox2->TabIndex = 27;
			this->comboBox2->TabStop = false;
			this->comboBox2->Text = L"Binary";
			this->comboBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Control2::comboBox1_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->comboBox1->DropDownHeight = 110;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L"Binary", L"3", L"4", L"5", L"6", L"7", L"Octal",
					L"9", L"Decimal", L"11", L"12", L"13", L"14", L"15", L"Hexadecimal", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36"
			});
			this->comboBox1->Location = System::Drawing::Point(109, 99);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(98, 23);
			this->comboBox1->TabIndex = 24;
			this->comboBox1->TabStop = false;
			this->comboBox1->Text = L"Decimal";
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Control2::comboBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label1->Location = System::Drawing::Point(34, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 19);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Input";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label2->Location = System::Drawing::Point(34, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 19);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Output";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->label3->Location = System::Drawing::Point(87, 393);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(299, 19);
			this->label3->TabIndex = 32;
			this->label3->Text = L"*Conversion of Fractional value coming soon";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(372, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 30);
			this->button1->TabIndex = 33;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Control2::button_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(372, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 30);
			this->button2->TabIndex = 34;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Control2::button_Click);
			// 
			// Control2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"Control2";
			this->Size = System::Drawing::Size(453, 437);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int c1, c2;

		// working
	private: String^ convert(int convert_from, String^ number, int convert_to) {
		// using boolean operator "==" to negative sign iteration
		int result = 0, i, j = 0, temp = 0, x = number[0] == '-';

		for (i = number->Length - 1; i >= x; i--, j++)
		{
			// checking for a valid number
			if (number[i] > 47 && number[i] < 58)
				temp = 48;
			else if (number[i] > 64 && number[i] < 91)
				temp = 55;
			else if (number[i] > 96 && number[i] < 123)
				temp = 87;
			else
			{
				MessageBox::Show("EXCEPTION <INVALID CHARACTER OCCURS>", "Invalid Input");
				return "";
			}

			// checking for a number lie in base range ?
			if ((number[i] - temp) >= convert_from)
			{
				MessageBox::Show("EXCEPTION <OUT OF BOUND>", "Invalid Input");
				return "";
			}

			// converting into decimal
			result += (number[i] - temp) * int(round(pow(convert_from, j)));
		}
		i = 0;
		String^ temp1;
		// converting into required base from decimal
		while (result > 0)
		{
			int d = result % convert_to;
			if (d < 10)
				temp1 = Convert::ToChar(d + 48) + temp1;
			if (d > 10)
				temp1 = Convert::ToChar(d + 55) + temp1;

			i++, result /= convert_to;
		}
		/*    converting number into negative if negative
			because result of both (+ve and -ve) are same except sign   */
		if (number[0] == '-')
			temp1 = Convert::ToChar('-') + temp1;
		return temp1;
	}
		// working
	private: int set_argument(String^ s) {
		int temp;
		if (s == "Binary") temp = 2;
		else if (s == "Octal") temp = 8;
		else if (s == "Decimal") temp = 10;
		else if (s == "Hexadecimal") temp = 16;
		else temp = Convert::ToInt16(s);
		return temp;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || textBox1->Text == "-") textBox2->Text = "";
		else {
			if (textBox1->Text->Length > 18) textBox1->Height = 60;
			else textBox1->Height = 30;

			c1 = set_argument(comboBox1->Text);
			c2 = set_argument(comboBox2->Text);
			
			textBox2->Text = convert(c1, textBox1->Text, c2);
		}
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text->Length > 18) textBox2->Height = 60;
		else textBox2->Height = 30;
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		int r, g, b, r1, g1, b1;

		if (!toolStripButton1->Checked) {
			toolStripButton1->Checked = true;
			r = 234, g = 188, b = 122; //light
			r1 = 41, g1 = 55, b1 = 69;//dark
			button1->BringToFront();
		}
		else {
			toolStripButton1->Checked = false;
			r = 41, g = 55, b = 69; // dark
			r1 = 234, g1 = 188, b1 = 122; // light
			button2->BringToFront();
		}
		this->BackColor = Color::FromArgb(r1,g1,b1);

		label1->ForeColor = Color::FromArgb(r,g,b);
		label2->ForeColor = Color::FromArgb(r, g, b);

		comboBox1->ForeColor = Color::FromArgb(r, g, b);
		comboBox1->BackColor = Color::FromArgb(r1,g1,b1);

		comboBox2->ForeColor = Color::FromArgb(r, g, b);
		comboBox2->BackColor = Color::FromArgb(r1, g1, b1);

		textBox1->ForeColor = Color::FromArgb(r, g, b);
		textBox1->BackColor = Color::FromArgb(r1, g1, b1);
		
		textBox2->ForeColor = Color::FromArgb(r, g, b);
		textBox2->BackColor = Color::FromArgb(r1, g1, b1);
	}
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "") {
		Clipboard::SetText(textBox2->Text);
		MessageBox::Show("Copied " + textBox2->Text,"Prompt");
	}
}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true;
}
};
}