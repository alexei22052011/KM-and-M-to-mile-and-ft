#pragma once

namespace KmToMileWindowsApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
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
		/// ���������� ��� ������������ �������.
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



	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 30);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 20);
			this->textBox2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(156, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"���������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"���������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(187, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"����";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(126, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(187, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"���";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(156, 158);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 20);
			this->textBox4->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 184);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(258, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L"��������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 240);
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
			this->Text = L"��, � � ����, ���";
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
};
}

