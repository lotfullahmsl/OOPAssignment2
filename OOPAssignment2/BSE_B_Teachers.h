
#pragma once

#include <fstream>
#include <vector> 
#include <msclr/marshal_cppstd.h> // For converting System::String^ to std::string
#include <regex> 
#include "TWTT.h"

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::IO;

    public ref class BSE_B_Teachers : public System::Windows::Forms::Form
    {
    public:
        BSE_B_Teachers(String^ sectionName, String^ filePath)
        {
            InitializeComponent();
            LoadTeachers(); // Load teachers from file
        }

    protected:
        ~BSE_B_Teachers()
        {

        }

    private:
        System::Windows::Forms::ComboBox^ comboBox1;
        System::Windows::Forms::Button^ button1;

        void InitializeComponent(void)
        {
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(40, 156);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(250, 21);
            this->comboBox1->TabIndex = 0;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button1->Location = System::Drawing::Point(296, 154);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Get Timetable";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &BSE_B_Teachers::button1_Click);
            // 
            // BSE_B_Teachers
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(411, 216);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->comboBox1);
            this->MaximumSize = System::Drawing::Size(427, 255);
            this->MinimumSize = System::Drawing::Size(427, 255);
            this->Name = L"BSE_B_Teachers";
            this->Text = L"BSE_B_Teachers";
            this->Load += gcnew System::EventHandler(this, &BSE_B_Teachers::BSE_B_Teachers_Load);
            this->ResumeLayout(false);

        }

        void BSE_B_Teachers_Load(System::Object^ sender, System::EventArgs^ e)
        {
            // Called when the form loads
            LoadTeachers(); // Load teachers from file
        }

        void LoadTeachers()
        {
            String^ filePath = "BSE-B_teachers.txt"; // Path to the teachers file
            try
            {
                StreamReader^ reader = gcnew StreamReader(filePath);
                String^ line;
                int labelIndex = 0; // Index for positioning labels
                int middleX = (this->ClientSize.Width - 250) / 2; // Calculate the X position for labels to be in the middle

                while ((line = reader->ReadLine()) != nullptr && labelIndex < 5) // Limit to 5 teachers
                {
                    // Create a new label for each teacher
                    Label^ teacherLabel = gcnew Label();
                    teacherLabel->AutoSize = true;
                    teacherLabel->Location = System::Drawing::Point(middleX, 30 + (labelIndex * 20)); // Adjust Y position for each label
                    teacherLabel->Text = line; // Set the text of the label to the teacher name
                    this->Controls->Add(teacherLabel); // Add the label to the form

                    labelIndex++;
                }
                reader->Close();

                // Populate the dropdown with numbers 1 to 5 only if it's empty
                if (comboBox1->Items->Count == 0)
                {
                    for (int i = 1; i <= 5; i++)
                    {
                        comboBox1->Items->Add(i.ToString());
                    }
                }
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error: " + ex->Message);
            }
        }

        // Event handler for the button click
        void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            String^ selectedTeacher = safe_cast<String^>(comboBox1->SelectedItem);
            if (!String::IsNullOrEmpty(selectedTeacher))
            {
                String^ sectionName = "BSE-B"; // Assuming BSE-B section for demonstration
                String^ teacherFilePath = "BSE-B_timetable.txt";
                String^ timetableInfo = GetTeacherTimetable(selectedTeacher, teacherFilePath);

                // Show the timetable in TWTT form
                TWTT^ timetableForm = gcnew TWTT();
                timetableForm->ShowTimetable(selectedTeacher, timetableInfo);
                timetableForm->Show();
            }
        }

        // Get timetable information for the selected teacher
        String^ GetTeacherTimetable(String^ teacherName, String^ filePath)
        {
            try
            {
                StreamReader^ reader = gcnew StreamReader(filePath);
                String^ timetableInfo;
                String^ allTimetableInfo = ""; // Initialize an empty string to collect all lines

                while ((timetableInfo = reader->ReadLine()) != nullptr)
                {
                    if (timetableInfo->StartsWith(teacherName))
                    {
                        // Append the line to the collected string
                        allTimetableInfo += timetableInfo + Environment::NewLine;
                    }
                }
                reader->Close();

                // If any timetable information is found, return it; otherwise, show a message
                if (!String::IsNullOrEmpty(allTimetableInfo))
                {
                    return allTimetableInfo;
                }
                else
                {
                    MessageBox::Show("No matching timetable found for " + teacherName, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error: " + ex->Message);
            }
            return "Timetable information not found for " + teacherName;
        }
    };
}
