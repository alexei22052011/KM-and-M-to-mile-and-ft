#pragma once

namespace KmToMileWindowsApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ComboBox^  comboBox1;









	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(156, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Convert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(49, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Killometers";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(178, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Metters";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 170);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(126, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(49, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Miles";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(187, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Foots";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(156, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 246);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(258, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(24, 196);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 44);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Back convert";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(156, 197);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 43);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Back convert";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Русский", L"English"});
			this->comboBox1->Location = System::Drawing::Point(24, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(258, 21);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"Select Language";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->ClientSize = System::Drawing::Size(301, 295);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"KM, M to Mile, Foot";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox1->Text) * 0.621371;
		    this->textBox3->Text = System::Convert::ToString(a);
			}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox2->Text) * 3.28084;
			this->textBox4->Text = System::Convert::ToString(a);
		    }
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			this->textBox1->Text = L"";
			this->textBox2->Text = L"";
			this->textBox3->Text = L""; 
			this->textBox4->Text = L"";
		    }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox3->Text) / 0.621371;
			this->textBox1->Text = System::Convert::ToString(a);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox4->Text) / 3.28084;
			this->textBox2->Text = System::Convert::ToString(a);
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox1->SelectedItem == "English") {
				 this->Text = L"KM, M to Mile, Foot";
				 this->label1->Text = L"Kilometers";
				 this->label2->Text = L"Meters";
				 this->label3->Text = L"Miles";
				 this->label4->Text = L"Foots";
				 this->button1->Text = L"Convert";
				 this->button2->Text = L"Convert";
				 this->button3->Text = L"Clear";
				 this->button4->Text = L"Back convert";
				 this->button5->Text = L"Back convert";
			 } else if (comboBox1->SelectedItem == "Русский") {
				 this->Text = L"КМ, М в Миль, Фут";
				 this->label1->Text = L"Киллометры";
				 this->label2->Text = L"Метры";
				 this->label3->Text = L"Мили";
				 this->label4->Text = L"Футы";
				 this->button1->Text = L"Перевести";
				 this->button2->Text = L"Перевести";
				 this->button3->Text = L"Очистить";
				 this->button4->Text = L"Обратно перевести";
				 this->button5->Text = L"Обратно перевести";
			 }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox1->Text) * 0.621371;
		    this->textBox3->Text = System::Convert::ToString(a);
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox2->Text) * 3.28084;
			this->textBox4->Text = System::Convert::ToString(a);
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox3->Text) / 0.621371;
			this->textBox1->Text = System::Convert::ToString(a);
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			double a;
			a = System::Convert::ToDouble(textBox4->Text) / 3.28084;
			this->textBox2->Text = System::Convert::ToString(a);
		 }
};
}

