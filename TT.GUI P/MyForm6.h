#pragma once

namespace TTGUIP {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO; // Added for file operations

    /// <summary>
    /// Summary for MyForm6
    /// </summary>
    public ref class MyForm6 : public System::Windows::Forms::Form
    {
    public:
        MyForm6(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm6()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ Heading;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ name;
    private: System::Windows::Forms::Button^ OK2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::DataGridView^ fileContentGrid; // Added DataGridView declaration
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
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->Heading = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->name = (gcnew System::Windows::Forms::Label());
            this->OK2 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->fileContentGrid = (gcnew System::Windows::Forms::DataGridView());
            this->label6 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileContentGrid))->BeginInit();
            this->SuspendLayout();
            // 
            // Heading
            // 
            this->Heading->AutoSize = true;
            this->Heading->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Heading->Location = System::Drawing::Point(299, 125);
            this->Heading->Name = L"Heading";
            this->Heading->Size = System::Drawing::Size(737, 53);
            this->Heading->TabIndex = 7;
            this->Heading->Text = L"TIME TABLE MANAGEMENT SYSTEM";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(173, 256);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(305, 37);
            this->label1->TabIndex = 8;
            this->label1->Text = L"SECTION NAMES:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(404, 350);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(117, 37);
            this->label2->TabIndex = 9;
            this->label2->Text = L"BSE-A";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(405, 411);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(116, 37);
            this->label3->TabIndex = 10;
            this->label3->Text = L"BSE-B";
            // 
            // name
            // 
            this->name->AutoSize = true;
            this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->name->Location = System::Drawing::Point(467, 636);
            this->name->Name = L"name";
            this->name->Size = System::Drawing::Size(406, 37);
            this->name->TabIndex = 11;
            this->name->Text = L"ENTER SECTION NAME:";
            // 
            // OK2
            // 
            this->OK2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->OK2->Location = System::Drawing::Point(1104, 642);
            this->OK2->Name = L"OK2";
            this->OK2->Size = System::Drawing::Size(112, 55);
            this->OK2->TabIndex = 12;
            this->OK2->Text = L"OK";
            this->OK2->UseVisualStyleBackColor = true;
            this->OK2->Click += gcnew System::EventHandler(this, &MyForm6::OK2_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(917, 642);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(100, 31);
            this->textBox1->TabIndex = 13;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(405, 472);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(118, 37);
            this->label4->TabIndex = 14;
            this->label4->Text = L"BSE-C";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(405, 532);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 37);
            this->label5->TabIndex = 17;
            // 
            // fileContentGrid
            // 
            dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
            dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->fileContentGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
            this->fileContentGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle6->BackColor = System::Drawing::Color::White;
            dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->fileContentGrid->DefaultCellStyle = dataGridViewCellStyle6;
            this->fileContentGrid->EnableHeadersVisualStyles = false;
            this->fileContentGrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->fileContentGrid->Location = System::Drawing::Point(474, 730);
            this->fileContentGrid->Name = L"fileContentGrid";
            this->fileContentGrid->RowHeadersVisible = false;
            this->fileContentGrid->RowHeadersWidth = 82;
            this->fileContentGrid->Size = System::Drawing::Size(678, 400);
            this->fileContentGrid->TabIndex = 16;
            this->fileContentGrid->Visible = false;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(405, 532);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(118, 37);
            this->label6->TabIndex = 18;
            this->label6->Text = L"BSE-D";
            // 
            // MyForm6
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1545, 1213);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->fileContentGrid);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->OK2);
            this->Controls->Add(this->name);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Heading);
            this->Name = L"MyForm6";
            this->Text = L"MyForm6";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileContentGrid))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void OK2_Click(System::Object^ sender, System::EventArgs^ e) {
        // Hide the grid initially
        fileContentGrid->Visible = false;
        fileContentGrid->Rows->Clear();
        fileContentGrid->Columns->Clear();

        // Get the section name from textBox1
        String^ sectionName = textBox1->Text->Trim();

        // Validate input
        if (String::IsNullOrEmpty(sectionName)) {
            MessageBox::Show("Please enter a valid section name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        try {
            // Convert the section name to lowercase for the filename (e.g., "BSE-A" -> "bse-a")
            String^ fileName = sectionName->ToLower() + ".txt";

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

                // Set fixed column widths to match the spacing
                fileContentGrid->Columns[0]->Width = 100;  // DAY
                fileContentGrid->Columns[1]->Width = 120;  // TIMING
                fileContentGrid->Columns[2]->Width = 150;  // TEACHER-NAME
                fileContentGrid->Columns[3]->Width = 120;  // COURSE-TITLE
                fileContentGrid->Columns[4]->Width = 100;  // ROOM-NO

                // Parse the table rows (skip the header line)
                for (int i = tableStartIndex + 1; i < lines->Length; i++) {
                    if (String::IsNullOrWhiteSpace(lines[i])) continue;
                    array<String^>^ rowData = lines[i]->Split(gcnew array<Char>{'\t', ' '}, StringSplitOptions::RemoveEmptyEntries);

                    // Combine the teacher's name (which may have been split into multiple parts)
                    if (rowData->Length > headers->Length) {
                        // Assuming the teacher name is in positions 2 and 3 (indices 2 and 3 after DAY and TIMING)
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
                MessageBox::Show("Timetable file for section " + sectionName + " (" + fileName + ") does not exist in directory: " + currentDirectory, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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