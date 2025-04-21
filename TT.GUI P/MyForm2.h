#pragma once
#include "MyForm3.h"

namespace TTGUIP {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO; // For file handling

    /// <summary>
    /// Summary for MyForm2
    /// </summary>
    public ref class MyForm2 : public System::Windows::Forms::Form
    {
    public:
        MyForm2(void)
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
        ~MyForm2()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox1; // Name
    private: System::Windows::Forms::TextBox^ textBox2; // Password
    private: System::Windows::Forms::TextBox^ textBox3; // Email
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ Heading;

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->Heading = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(220, 232);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(215, 37);
            this->label1->TabIndex = 2;
            this->label1->Text = L"USERNAME:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(220, 299);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(127, 37);
            this->label2->TabIndex = 3;
            this->label2->Text = L"EMAIL:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(220, 360);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(221, 37);
            this->label3->TabIndex = 4;
            this->label3->Text = L"PASSWORD:";
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(459, 225);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(275, 44);
            this->textBox1->TabIndex = 5;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(459, 292);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(275, 44);
            this->textBox2->TabIndex = 6;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(459, 360);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(275, 44);
            this->textBox3->TabIndex = 7;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(718, 458);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(169, 71);
            this->button1->TabIndex = 8;
            this->button1->Text = L"Submit";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
            // 
            // Heading
            // 
            this->Heading->AutoSize = true;
            this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Heading->Location = System::Drawing::Point(233, 119);
            this->Heading->Name = L"Heading";
            this->Heading->Size = System::Drawing::Size(737, 53);
            this->Heading->TabIndex = 9;
            this->Heading->Text = L"TIME TABLE MANAGEMENT SYSTEM";
            // 
            // MyForm2
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1299, 704);
            this->Controls->Add(this->Heading);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm2";
            this->Text = L"Sign Up Form";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Step 1: Validate that all fields are not empty
        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Please enter a username!", "Validation Error");
            return;
        }
        if (String::IsNullOrEmpty(textBox2->Text)) {
            MessageBox::Show("Please enter a email!", "Validation Error");
            return;
        }
        if (String::IsNullOrEmpty(textBox3->Text)) {
            MessageBox::Show("Please enter an password!", "Validation Error");
            return;
        }

        // Step 2: Create a file using the user's name as the filename
        try {
            // Create a filename based on the user's name (replace spaces with underscores)
            String^ fileName = textBox1->Text->Replace(" ", "_") + ".txt";
            // Use StreamWriter to write to the file
            StreamWriter^ sw = gcnew StreamWriter(fileName);
            sw->WriteLine(textBox1->Text); // Name
            sw->WriteLine(textBox3->Text); // Password
            sw->WriteLine(textBox2->Text); // Email
            sw->Close();

            // Show success message
            MessageBox::Show("Sign-up successful! User data saved to " + fileName, "Success");
            this->Hide();
            MyForm3^ loginupform = gcnew MyForm3();
            loginupform->ShowDialog();

            // Optionally close the form after successful submission
            
        }
        catch (Exception^ ex) {
            // Handle any file writing errors
            MessageBox::Show("Error saving user data: " + ex->Message, "File Error");
        }
    }
    };
}