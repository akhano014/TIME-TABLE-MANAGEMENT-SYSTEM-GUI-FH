#pragma once
#include"MyForm4.h"
namespace TTGUIP {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class MyForm3 : public System::Windows::Forms::Form
    {
    public:
        MyForm3(void)
        {
            InitializeComponent();
        }

        property String^ EnteredPassword{
            String ^ get() { return textBox3->Text; }
        }

            property String^ EnteredEmail{
                String ^ get() { return textBox2->Text; }
        }

    protected:
        ~MyForm3()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ Heading;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->Heading = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
               this->label2->Location = System::Drawing::Point(214, 224);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(188, 37);
               this->label2->TabIndex = 0;
               this->label2->Text = L"UserName:";
               // 
               // textBox2
               // 
               this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
               this->textBox2->Location = System::Drawing::Point(463, 224);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(275, 44);
               this->textBox2->TabIndex = 1;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
               this->label3->Location = System::Drawing::Point(214, 330);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(176, 37);
               this->label3->TabIndex = 2;
               this->label3->Text = L"Password:";
               // 
               // textBox3
               // 
               this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
               this->textBox3->Location = System::Drawing::Point(463, 330);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(275, 44);
               this->textBox3->TabIndex = 3;
               this->textBox3->UseSystemPasswordChar = true;
               // 
               // button1
               // 
               this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
               this->button1->Location = System::Drawing::Point(699, 456);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(165, 64);
               this->button1->TabIndex = 4;
               this->button1->Text = L"OK";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
               // 
               // Heading
               // 
               this->Heading->AutoSize = true;
               this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->Heading->Location = System::Drawing::Point(237, 117);
               this->Heading->Name = L"Heading";
               this->Heading->Size = System::Drawing::Size(737, 53);
               this->Heading->TabIndex = 5;
               this->Heading->Text = L"TIME TABLE MANAGEMENT SYSTEM";
               // 
               // MyForm3
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(1353, 666);
               this->Controls->Add(this->Heading);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->button1);
               this->Name = L"MyForm3";
               this->Text = L"Login Form";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox2->Text)) {
            MessageBox::Show("Please enter an username!", "Validation Error");
            return;
        }

        if (String::IsNullOrEmpty(textBox3->Text)) {
            MessageBox::Show("Please enter a password!", "Validation Error");
            return;
        }


        ReadUserData();
    }

    private: System::Void ReadUserData() {
        String^ UserName = textBox2->Text->Trim();
        String^ enteredPassword = textBox3->Text;

        String^ fileName = UserName->Replace(" ", "_") + ".txt";

        try {
            if (!File::Exists(fileName)) {
                MessageBox::Show("Account not found for email: " + UserName, "Login Failed");
                return;
            }

            StreamReader^ sr = gcnew StreamReader(fileName);
            String^ usernameLine = sr->ReadLine();
            String^ passwordLine = sr->ReadLine();
  
            sr->Close();

            String^ storedPassword = passwordLine->Substring(passwordLine->IndexOf(":") + 1)->Trim();
            String^ storedUserName = usernameLine->Substring(usernameLine->IndexOf(":") + 1)->Trim();

            if (UserName == storedUserName && enteredPassword == storedPassword) {
                MessageBox::Show("You have successfully logged in!", "Success");
                this->DialogResult = System::Windows::Forms::DialogResult::OK;
                MyForm4^ timetable = gcnew MyForm4();
                timetable->Show();
                this->Hide();
                this->Close();
            }
            else {
                MessageBox::Show("Incorrect username or password!", "Login Failed");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error reading user data: " + ex->Message, "Read Error");
        }
    }

    /*private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
    }*/
};
}
