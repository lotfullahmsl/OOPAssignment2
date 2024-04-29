#pragma once

#include <fstream>
#include <msclr/marshal_cppstd.h> // For converting System::String^ to std::string
#include "DWTT.h"

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::IO;
    using namespace System::Collections::Generic;

    /// <summary>
    /// Summary for DayWise
    /// </summary>
    public ref class DayWise : public System::Windows::Forms::Form
    {
    public:
        DayWise(void)
        {
            InitializeComponent();
            // Populate the ComboBox with days of the week
            PopulateDays();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~DayWise()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;
        System::Windows::Forms::ComboBox^ comboBoxDays; // Declare ComboBox control for days
        System::Windows::Forms::Button^ btnSearch; // Declare search button

        List<String^>^ timetableRows; // List to store timetable rows

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->comboBoxDays = (gcnew System::Windows::Forms::ComboBox());
            this->btnSearch = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // comboBoxDays
            // 
            this->comboBoxDays->FormattingEnabled = true;
            this->comboBoxDays->Location = System::Drawing::Point(12, 12);
            this->comboBoxDays->Name = L"comboBoxDays";
            this->comboBoxDays->Size = System::Drawing::Size(121, 21);
            this->comboBoxDays->TabIndex = 0;
            // 
            // btnSearch
            // 
            this->btnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->btnSearch->Location = System::Drawing::Point(139, 12);
            this->btnSearch->Name = L"btnSearch";
            this->btnSearch->Size = System::Drawing::Size(75, 23);
            this->btnSearch->TabIndex = 1;
            this->btnSearch->Text = L"Search";
            this->btnSearch->UseVisualStyleBackColor = false;
            this->btnSearch->Click += gcnew System::EventHandler(this, &DayWise::btnSearch_Click);
            // 
            // DayWise
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(224, 49);
            this->Controls->Add(this->btnSearch);
            this->Controls->Add(this->comboBoxDays);
            this->MaximumSize = System::Drawing::Size(240, 88);
            this->MinimumSize = System::Drawing::Size(240, 88);
            this->Name = L"DayWise";
            this->Text = L"DayWise";
            this->Load += gcnew System::EventHandler(this, &DayWise::DayWise_Load);
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        // Function to populate the ComboBox with days of the week
        void PopulateDays()
        {
            // Add days of the week to the ComboBox
            this->comboBoxDays->Items->Add("MON");
            this->comboBoxDays->Items->Add("TUE");
            this->comboBoxDays->Items->Add("WED");
            this->comboBoxDays->Items->Add("THU");
            this->comboBoxDays->Items->Add("FRI");
        }

    private:
        // Event handler for the search button click
        System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Get the selected day from the ComboBox
            String^ selectedDay = safe_cast<String^>(comboBoxDays->SelectedItem);
            if (!String::IsNullOrEmpty(selectedDay))
            {
                // Call a function to display timetable for the selected day
                DisplayTimetable(selectedDay);
            }
        }

        // Function to display timetable based on the selected day
        // Function to display timetable based on the selected day
        void DisplayTimetable(String^ selectedDay)
        {
            try
            {
                array<String^>^ files = { "BSE-A_timetable.txt", "BSE-B_timetable.txt", "BSE-C_timetable.txt", "BSE-D_timetable.txt", "BSE-E_timetable.txt" };

                String^ allTimetableRows = ""; // Initialize an empty string to accumulate all timetable rows

                // Iterate through each timetable file
                for each (String ^ file in files)
                {
                    StreamReader^ reader = gcnew StreamReader(file);
                    String^ line;

                    // Read each line in the file
                    while ((line = reader->ReadLine()) != nullptr)
                    {
                        // Check if the line contains the selected day
                        if (line->Contains(selectedDay))
                        {
                            // Accumulate the timetable row
                            allTimetableRows += line + "\n";
                        }
                    }

                    reader->Close(); // Close the file stream
                }

                // Display all timetable rows in the DWTT form
                DWTT^ dwttForm = gcnew DWTT();
                dwttForm->ShowTimetable(allTimetableRows);
                dwttForm->ShowDialog();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error: " + ex->Message);
            }
        }

    private: System::Void DayWise_Load(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
