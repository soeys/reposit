#pragma once
#include "ProjectKR.h"
#include <msclr\marshal_cppstd.h>


namespace ProjectKR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ num1;
	private: System::Windows::Forms::TextBox^ num2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ваше число (От 0 до 3000000)";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Конвертировать в текст";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(42, 38);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(244, 20);
			this->num1->TabIndex = 3;
			this->num1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(15, 159);
			this->num2->Multiline = true;
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(303, 91);
			this->num2->TabIndex = 4;
			this->num2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(146, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ответ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(42, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(244, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Запись в файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 275);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Программа";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		char* str = new char;
		String^ v = num1->Text;
		std::string unmanaged = msclr::interop::marshal_as<std::string>(v);
		const char* cstr = unmanaged.c_str();
		int number = sort(cstr);
		string temp;
		if (number >= 0 & number <= 3000000) {
			temp = fun(number);
		}
		else {
			temp = "Ваше число вне диапазона!";
		}
		String^ str2 = gcnew String(temp.c_str());
		num2->Text = str2;
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int number = Convert::ToInt32(num1->Text);
	files1(fun(number));
}
};
}
