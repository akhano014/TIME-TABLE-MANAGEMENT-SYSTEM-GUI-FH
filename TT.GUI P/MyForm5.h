#pragma once

namespace TTGUIP {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Summary for MyForm5
    /// </summary>
    public ref class MyForm5 : public System::Windows::Forms::Form
    {
    public:
        MyForm5(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm5()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ ID1;
    private: System::Windows::Forms::Label^ Heading;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ ID2;
    private: System::Windows::Forms::Label^ ID3;
    private: System::Windows::Forms::Label^ ID4;
    private: System::Windows::Forms::Label^ ID5;
    private: System::Windows::Forms::Label^ ID6;
    private: System::Windows::Forms::Label^ ID7;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ OK;
    private: System::Windows::Forms::DataGridView^ fileContentGrid;
           // Paired labels for metadata (label and value)
    private: System::Windows::Forms::Label^ lblIDLabel;
    private: System::Windows::Forms::Label^ lblIDValue;
    private: System::Windows::Forms::Label^ lblNameLabel;
    private: System::Windows::Forms::Label^ lblNameValue;
    private: System::Windows::Forms::Label^ lblCourseTitleLabel;
    private: System::Windows::Forms::Label^ lblCourseTitleValue;
    private: System::Windows::Forms::Label^ lblDepartmentLabel;
    private: System::Windows::Forms::Label^ lblDepartmentValue;

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
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->Heading = (gcnew System::Windows::Forms::Label());
            this->ID1 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->ID2 = (gcnew System::Windows::Forms::Label());
            this->ID3 = (gcnew System::Windows::Forms::Label());
            this->ID4 = (gcnew System::Windows::Forms::Label());
            this->ID5 = (gcnew System::Windows::Forms::Label());
            this->ID6 = (gcnew System::Windows::Forms::Label());
            this->ID7 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->OK = (gcnew System::Windows::Forms::Button());
            this->fileContentGrid = (gcnew System::Windows::Forms::DataGridView());
            // Initialize paired labels for metadata
            this->lblIDLabel = (gcnew System::Windows::Forms::Label());
            this->lblIDValue = (gcnew System::Windows::Forms::Label());
            this->lblNameLabel = (gcnew System::Windows::Forms::Label());
            this->lblNameValue = (gcnew System::Windows::Forms::Label());
            this->lblCourseTitleLabel = (gcnew System::Windows::Forms::Label());
            this->lblCourseTitleValue = (gcnew System::Windows::Forms::Label());
            this->lblDepartmentLabel = (gcnew System::Windows::Forms::Label());
            this->lblDepartmentValue = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileContentGrid))->BeginInit();
            this->SuspendLayout();
            // 
            // Heading
            // 
            this->Heading->AutoSize = true;
            this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Heading->Location = System::Drawing::Point(275, 53);
            this->Heading->Name = L"Heading";
            this->Heading->Size = System::Drawing::Size(737, 53);
            this->Heading->TabIndex = 6;
            this->Heading->Text = L"TIME TABLE MANAGEMENT SYSTEM";
            // 
            // ID1
            // 
            this->ID1->AutoSize = true;
            this->ID1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID1->Location = System::Drawing::Point(97, 155);
            this->ID1->Name = L"ID1";
            this->ID1->Size = System::Drawing::Size(276, 37);
            this->ID1->TabIndex = 0;
            this->ID1->Text = L"TEACHERS ID\'s:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(239, 225);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(341, 37);
            this->label1->TabIndex = 7;
            this->label1->Text = L"ID: 1 ALEEM AHMAD";
            // 
            // ID2
            // 
            this->ID2->AutoSize = true;
            this->ID2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID2->Location = System::Drawing::Point(239, 279);
            this->ID2->Name = L"ID2";
            this->ID2->Size = System::Drawing::Size(302, 37);
            this->ID2->TabIndex = 8;
            this->ID2->Text = L"ID: 2 SABIR KHAN";
            // 
            // ID3
            // 
            this->ID3->AutoSize = true;
            this->ID3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID3->Location = System::Drawing::Point(239, 338);
            this->ID3->Name = L"ID3";
            this->ID3->Size = System::Drawing::Size(352, 37);
            this->ID3->TabIndex = 9;
            this->ID3->Text = L"ID: 3 ZUBAIR ABBASI";
            // 
            // ID4
            // 
            this->ID4->AutoSize = true;
            this->ID4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID4->Location = System::Drawing::Point(239, 397);
            this->ID4->Name = L"ID4";
            this->ID4->Size = System::Drawing::Size(357, 37);
            this->ID4->TabIndex = 10;
            this->ID4->Text = L"ID: 4 RAFIA HUSSAIN";
            // 
            // ID5
            // 
            this->ID5->AutoSize = true;
            this->ID5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID5->Location = System::Drawing::Point(239, 460);
            this->ID5->Name = L"ID5";
            this->ID5->Size = System::Drawing::Size(343, 37);
            this->ID5->TabIndex = 11;
            this->ID5->Text = L"ID: 5 SADAF KHALID";
            // 
            // ID6
            // 
            this->ID6->AutoSize = true;
            this->ID6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID6->Location = System::Drawing::Point(239, 521);
            this->ID6->Name = L"ID6";
            this->ID6->Size = System::Drawing::Size(288, 37);
            this->ID6->TabIndex = 12;
            this->ID6->Text = L"ID: 6 FAISIAL ZIA";
            // 
            // ID7
            // 
            this->ID7->AutoSize = true;
            this->ID7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID7->Location = System::Drawing::Point(239, 580);
            this->ID7->Name = L"ID7";
            this->ID7->Size = System::Drawing::Size(332, 37);
            this->ID7->TabIndex = 13;
            this->ID7->Text = L"ID: 7 FAIQA AHMAD";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(687, 732);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(416, 37);
            this->label2->TabIndex = 14;
            this->label2->Text = L"ENTER TEACHER NAME:";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(1109, 738);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(150, 31);
            this->textBox1->TabIndex = 15;
            // 
            // OK
            // 
            this->OK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->OK->Location = System::Drawing::Point(1330, 732);
            this->OK->Name = L"OK";
            this->OK->Size = System::Drawing::Size(86, 55);
            this->OK->TabIndex = 16;
            this->OK->Text = L"OK";
            this->OK->UseVisualStyleBackColor = true;
            this->OK->Click += gcnew System::EventHandler(this, &MyForm5::OK_Click);
            // 
            // fileContentGrid
            // 
            this->fileContentGrid->AllowUserToAddRows = false;
            this->fileContentGrid->BackgroundColor = System::Drawing::Color::White;
            this->fileContentGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->fileContentGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
            this->fileContentGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->fileContentGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->fileContentGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->fileContentGrid->DefaultCellStyle = dataGridViewCellStyle2;
            this->fileContentGrid->EnableHeadersVisualStyles = false;
            this->fileContentGrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->fileContentGrid->Location = System::Drawing::Point(618, 800);
            this->fileContentGrid->Name = L"fileContentGrid";
            this->fileContentGrid->RowHeadersVisible = false;
            this->fileContentGrid->RowHeadersWidth = 82;
            this->fileContentGrid->Size = System::Drawing::Size(1316, 797);
            this->fileContentGrid->TabIndex = 17;
            this->fileContentGrid->Visible = false;
            // 
            // lblIDLabel
            // 
            this->lblIDLabel->AutoSize = true;
            this->lblIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblIDLabel->Location = System::Drawing::Point(618, 650);
            this->lblIDLabel->Name = L"lblIDLabel";
            this->lblIDLabel->Size = System::Drawing::Size(0, 37);
            this->lblIDLabel->TabIndex = 18;
            this->lblIDLabel->Text = L"";
            // 
            // lblIDValue
            // 
            this->lblIDValue->AutoSize = true;
            this->lblIDValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblIDValue->Location = System::Drawing::Point(750, 650);
            this->lblIDValue->Name = L"lblIDValue";
            this->lblIDValue->Size = System::Drawing::Size(0, 37);
            this->lblIDValue->TabIndex = 19;
            this->lblIDValue->Text = L"";
            // 
            // lblNameLabel
            // 
            this->lblNameLabel->AutoSize = true;
            this->lblNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNameLabel->Location = System::Drawing::Point(618, 690);
            this->lblNameLabel->Name = L"lblNameLabel";
            this->lblNameLabel->Size = System::Drawing::Size(0, 37);
            this->lblNameLabel->TabIndex = 20;
            this->lblNameLabel->Text = L"";
            // 
            // lblNameValue
            // 
            this->lblNameValue->AutoSize = true;
            this->lblNameValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblNameValue->Location = System::Drawing::Point(750, 690);
            this->lblNameValue->Name = L"lblNameValue";
            this->lblNameValue->Size = System::Drawing::Size(0, 37);
            this->lblNameValue->TabIndex = 21;
            this->lblNameValue->Text = L"";
            // 
            // lblCourseTitleLabel
            // 
            this->lblCourseTitleLabel->AutoSize = true;
            this->lblCourseTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblCourseTitleLabel->Location = System::Drawing::Point(618, 730);
            this->lblCourseTitleLabel->Name = L"lblCourseTitleLabel";
            this->lblCourseTitleLabel->Size = System::Drawing::Size(0, 37);
            this->lblCourseTitleLabel->TabIndex = 22;
            this->lblCourseTitleLabel->Text = L"";
            // 
            // lblCourseTitleValue
            // 
            this->lblCourseTitleValue->AutoSize = true;
            this->lblCourseTitleValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblCourseTitleValue->Location = System::Drawing::Point(750, 730);
            this->lblCourseTitleValue->Name = L"lblCourseTitleValue";
            this->lblCourseTitleValue->Size = System::Drawing::Size(0, 37);
            this->lblCourseTitleValue->TabIndex = 23;
            this->lblCourseTitleValue->Text = L"";
            // 
            // lblDepartmentLabel
            // 
            this->lblDepartmentLabel->AutoSize = true;
            this->lblDepartmentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDepartmentLabel->Location = System::Drawing::Point(618, 770);
            this->lblDepartmentLabel->Name = L"lblDepartmentLabel";
            this->lblDepartmentLabel->Size = System::Drawing::Size(0, 37);
            this->lblDepartmentLabel->TabIndex = 24;
            this->lblDepartmentLabel->Text = L"";
            // 
            // lblDepartmentValue
            // 
            this->lblDepartmentValue->AutoSize = true;
            this->lblDepartmentValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDepartmentValue->Location = System::Drawing::Point(750, 770);
            this->lblDepartmentValue->Name = L"lblDepartmentValue";
            this->lblDepartmentValue->Size = System::Drawing::Size(0, 37);
            this->lblDepartmentValue->TabIndex = 25;
            this->lblDepartmentValue->Text = L"";
            // 
            // MyForm5
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(2006, 1606);
            this->Controls->Add(this->lblDepartmentValue);
            this->Controls->Add(this->lblDepartmentLabel);
            this->Controls->Add(this->lblCourseTitleValue);
            this->Controls->Add(this->lblCourseTitleLabel);
            this->Controls->Add(this->lblNameValue);
            this->Controls->Add(this->lblNameLabel);
            this->Controls->Add(this->lblIDValue);
            this->Controls->Add(this->lblIDLabel);
            this->Controls->Add(this->fileContentGrid);
            this->Controls->Add(this->OK);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->ID7);
            this->Controls->Add(this->ID6);
            this->Controls->Add(this->ID5);
            this->Controls->Add(this->ID4);
            this->Controls->Add(this->ID3);
            this->Controls->Add(this->ID2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Heading);
            this->Controls->Add(this->ID1);
            this->Name = L"MyForm5";
            this->Text = L"MyForm5";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileContentGrid))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
   private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) {
       // Hide the grid initially
       fileContentGrid->Visible = false;
       fileContentGrid->Rows->Clear();
       fileContentGrid->Columns->Clear();

       // Get the teacher name from textBox1
       String^ teacherName = textBox1->Text->Trim();

       // Validate input
       if (String::IsNullOrEmpty(teacherName)) {
           MessageBox::Show("Please enter a valid teacher name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
           return;
       }

       try {
           // Extract the first name and convert to lowercase
           array<String^>^ nameParts = teacherName->Split(' ');
           if (nameParts->Length == 0) {
               MessageBox::Show("Please enter a valid teacher name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               return;
           }
           String^ firstName = nameParts[0]->ToLower();

           // Construct the filename (e.g., "aleem.txt")
           String^ fileName = firstName + ".txt";

           // Get the executable's directory
           String^ currentDirectory = Directory::GetCurrentDirectory();
           String^ fullPath = Path::Combine(currentDirectory, fileName);

           // Check if file exists
           if (File::Exists(fullPath)) {
               // Read all lines from the file
               array<String^>^ lines = File::ReadAllLines(fullPath);

               // Find the table header (look for a line that starts with "DAY" and has "TIMING")
               int tableStartIndex = -1;
               for (int i = 0; i < lines->Length; i++) {
                   String^ line = lines[i]->Trim();
                   if (line->StartsWith("DAY") && line->Contains("TIMING")) {
                       tableStartIndex = i;
                       break;
                   }
               }

               // If the header isn't found, show an error
               if (tableStartIndex == -1) {
                   MessageBox::Show("Could not find the table header. Make sure the file has a line starting with 'DAY' and containing 'TIMING'.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                   return;
               }

               // Split the header line into columns (handle both spaces and tabs)
               array<String^>^ headers = lines[tableStartIndex]->Split(gcnew array<Char>{'\t', ' '}, StringSplitOptions::RemoveEmptyEntries);
               for (int i = 0; i < headers->Length; i++) {
                   fileContentGrid->Columns->Add(headers[i], headers[i]);
               }

               // Set fixed column widths to match the spacing in your screenshot
               fileContentGrid->Columns[0]->Width = 100;  // DAY
               fileContentGrid->Columns[1]->Width = 120;  // TIMING
               fileContentGrid->Columns[2]->Width = 150;  // TEACHER-NAME
               fileContentGrid->Columns[3]->Width = 120;  // COURSE-TITLE
               fileContentGrid->Columns[4]->Width = 100;  // ROOM-NO

               // Parse the table rows (skip the header line and metadata)
               for (int i = tableStartIndex + 1; i < lines->Length; i++) {
                   if (String::IsNullOrWhiteSpace(lines[i])) continue;
                   array<String^>^ rowData = lines[i]->Split(gcnew array<Char>{'\t', ' '}, StringSplitOptions::RemoveEmptyEntries);

                   // Combine the teacher's name (which may have been split into multiple parts)
                   if (rowData->Length > headers->Length) {
                       // Assuming the teacher name is in positions 2 and 3 (indices 2 and 3 after DAY and TIMING)
                       // Combine them into one field
                       rowData[2] = rowData[2] + " " + rowData[3]; // Combine "ALEEM" and "AHMAD" into "ALEEM AHMAD"
                       // Shift the remaining elements
                       for (int j = 3; j < rowData->Length - 1; j++) {
                           rowData[j] = rowData[j + 1];
                       }
                       // Resize the array to match the header length
                       Array::Resize(rowData, headers->Length);
                   }

                   // Add the row if it matches the header length
                   if (rowData->Length == headers->Length) {
                       fileContentGrid->Rows->Add(rowData);
                   }
               }

               // Display the grid
               fileContentGrid->Visible = true;
           }
           else {
               MessageBox::Show("Timetable file for " + teacherName + " (" + fileName + ") does not exist in directory: " + currentDirectory, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
           }

           // Refresh the form
           this->Refresh();
       }
       catch (Exception^ ex) {
           MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
       }
   }
    };
}