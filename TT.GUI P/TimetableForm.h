#pragma once

namespace TTGUIP {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for TimetableForm
    /// </summary>
    public ref class TimetableForm : public System::Windows::Forms::Form
    {
    public:
        TimetableForm(String^ content, String^ teacherName)
        {
            InitializeComponent();
            fileContentLabel->Text = content; // Set the file content
            this->Text = L"Timetable for " + teacherName; // Set form title
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~TimetableForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ fileContentLabel;

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
            this->fileContentLabel = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // fileContentLabel
            // 
            this->fileContentLabel->AutoSize = false;
            this->fileContentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->fileContentLabel->Location = System::Drawing::Point(20, 20);
            this->fileContentLabel->Name = L"fileContentLabel";
            this->fileContentLabel->Size = System::Drawing::Size(760, 460);
            this->fileContentLabel->TabIndex = 0;
            this->fileContentLabel->Text = L"";
            this->fileContentLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->fileContentLabel->BackColor = System::Drawing::Color::White;
            this->fileContentLabel->Padding = System::Windows::Forms::Padding(10);
            this->fileContentLabel->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            // 
            // TimetableForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(800, 500);
            this->Controls->Add(this->fileContentLabel);
            this->Name = L"TimetableForm";
            this->Text = L"Timetable";
            this->ResumeLayout(false);
        }
#pragma endregion
    };
}