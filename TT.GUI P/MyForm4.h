#pragma once
#include"MyForm5.h"
#include"Myform6.h"
namespace TTGUIP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Heading;
	private: System::Windows::Forms::Label^ Teacher;
	private: System::Windows::Forms::Label^ Student;
	private: System::Windows::Forms::Label^ Section;

	private: System::Windows::Forms::Label^ choice;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->Teacher = (gcnew System::Windows::Forms::Label());
			this->Student = (gcnew System::Windows::Forms::Label());
			this->Section = (gcnew System::Windows::Forms::Label());
			this->choice = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(255, 135);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(737, 53);
			this->Heading->TabIndex = 0;
			this->Heading->Text = L"TIME TABLE MANAGEMENT SYSTEM";
			// 
			// Teacher
			// 
			this->Teacher->AutoSize = true;
			this->Teacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Teacher->Location = System::Drawing::Point(190, 266);
			this->Teacher->Name = L"Teacher";
			this->Teacher->Size = System::Drawing::Size(514, 37);
			this->Teacher->TabIndex = 1;
			this->Teacher->Text = L"1. TEACHER WISE TIME TABLE";
			// 
			// Student
			// 
			this->Student->AutoSize = true;
			this->Student->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Student->Location = System::Drawing::Point(190, 350);
			this->Student->Name = L"Student";
			this->Student->Size = System::Drawing::Size(516, 37);
			this->Student->TabIndex = 2;
			this->Student->Text = L"2. STUDENT WISE TIME TABLE";
			// 
			// Section
			// 
			this->Section->AutoSize = true;
			this->Section->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Section->Location = System::Drawing::Point(190, 444);
			this->Section->Name = L"Section";
			this->Section->Size = System::Drawing::Size(506, 37);
			this->Section->TabIndex = 3;
			this->Section->Text = L"3. SECTION WISE TIME TABLE";
			// 
			// choice
			// 
			this->choice->AutoSize = true;
			this->choice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choice->Location = System::Drawing::Point(488, 672);
			this->choice->Name = L"choice";
			this->choice->Size = System::Drawing::Size(279, 33);
			this->choice->TabIndex = 5;
			this->choice->Text = L"Enter Your Choice:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(801, 676);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 31);
			this->textBox1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(969, 672);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 54);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click_1);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1333, 865);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->choice);
			this->Controls->Add(this->Section);
			this->Controls->Add(this->Student);
			this->Controls->Add(this->Teacher);
			this->Controls->Add(this->Heading);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	}*/
	
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(textBox1->Text)) {
			MessageBox::Show("Please Enter Your Choice!");
			return;
		}
		int choice;
		try {
			choice = Int32::Parse(textBox1->Text->Trim());
		}
		catch (FormatException^) {
			MessageBox::Show("Invlid Input Please Enter Valid Input like 1,2,3,4.");
			return;
		}
		
		switch (choice) {
		case 1: {
			this->Hide();
			MyForm5^ teacherform = gcnew MyForm5();
			teacherform->ShowDialog();
			break;
		}
		case 2: {
			this->Hide();
			MyForm5^ studentform = gcnew MyForm5();
			studentform->ShowDialog();
			break;
		}
		case 3: {
			this->Hide();
			MyForm6^ sectionform = gcnew MyForm6();
			sectionform->ShowDialog();
			break;
		}
		default: {
			MessageBox::Show("Invlid Choice Please Enter From 1-4 Thank You");
			break;
		}
		}

    }

};
}
