#pragma once

#include <fstream>
#include <vector> 
#include <msclr/marshal_cppstd.h> // For converting System::String^ to std::string
#include <regex> 
#include "RWTT.h" // Include the header file for the RWTT form

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::IO;

    public ref class RoomWise : public System::Windows::Forms::Form
    {
    public:
        RoomWise(void)
        {
            InitializeComponent();
            // Populate the ComboBox with room options
            PopulateRooms();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~RoomWise()
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
        System::Windows::Forms::ComboBox^ comboBoxRooms; // Declare ComboBox control
        System::Windows::Forms::Button^ btnSearch; // Declare search button

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->comboBoxRooms = (gcnew System::Windows::Forms::ComboBox());
            this->btnSearch = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // comboBoxRooms
            // 
            this->comboBoxRooms->FormattingEnabled = true;
            this->comboBoxRooms->Location = System::Drawing::Point(12, 12);
            this->comboBoxRooms->Name = L"comboBoxRooms";
            this->comboBoxRooms->Size = System::Drawing::Size(150, 21);
            this->comboBoxRooms->TabIndex = 0;
            // 
            // btnSearch
            // 
            this->btnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->btnSearch->Location = System::Drawing::Point(168, 12);
            this->btnSearch->Name = L"btnSearch";
            this->btnSearch->Size = System::Drawing::Size(75, 23);
            this->btnSearch->TabIndex = 1;
            this->btnSearch->Text = L"Search";
            this->btnSearch->UseVisualStyleBackColor = false;
            this->btnSearch->Click += gcnew System::EventHandler(this, &RoomWise::btnSearch_Click);
            // 
            // RoomWise
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(255, 53);
            this->Controls->Add(this->btnSearch);
            this->Controls->Add(this->comboBoxRooms);
            this->MaximumSize = System::Drawing::Size(271, 92);
            this->MinimumSize = System::Drawing::Size(271, 92);
            this->Name = L"RoomWise";
            this->Text = L"RoomWise";
            this->Load += gcnew System::EventHandler(this, &RoomWise::RoomWise_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
    private:
        // Function to populate the ComboBox with room options
        void PopulateRooms()
        {
            // Add room options to the ComboBox
            this->comboBoxRooms->Items->Add("4-17");
            this->comboBoxRooms->Items->Add("4-18");
            this->comboBoxRooms->Items->Add("4-19");
            this->comboBoxRooms->Items->Add("4-01");
            this->comboBoxRooms->Items->Add("4-02");
        }

    private:
        // Event handler for the search button click
        System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
            // Get the selected room from the ComboBox
            String^ selectedRoom = safe_cast<String^>(comboBoxRooms->SelectedItem);
            if (!String::IsNullOrEmpty(selectedRoom))
            {
                // Perform the search operation based on the selected room
                SearchRoom(selectedRoom);
            }
            else
            {
                MessageBox::Show("Please select a room.");
            }
        }

    private:
        // Function to search for the selected room across all timetable files
        void SearchRoom(String^ room)
        {
            try
            {
                array<String^>^ files = { "BSE-A_timetable.txt", "BSE-B_timetable.txt", "BSE-C_timetable.txt", "BSE-D_timetable.txt", "BSE-E_timetable.txt" };

                // Initialize a string to store the timetable information
                String^ timetableInfo = "";

                // Iterate through each timetable file
                for each (String ^ file in files)
                {
                    StreamReader^ reader = gcnew StreamReader(file);
                    String^ line;

                    // Read each line in the file
                    while ((line = reader->ReadLine()) != nullptr)
                    {
                        // Check if the line contains the selected room
                        if (line->Contains(room))
                        {
                            // Append the line to the timetable information string
                            timetableInfo += line + Environment::NewLine;
                        }
                    }

                    reader->Close(); // Close the file stream
                }

                // Show the timetable information on the RWTT form
                RWTT^ timetableForm = gcnew RWTT();
                timetableForm->ShowTimetable(room, timetableInfo);
                timetableForm->Show();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error: " + ex->Message);
            }
        }

    private:
        // Event handler when the form loads
        System::Void RoomWise_Load(System::Object^ sender, System::EventArgs^ e) {
        }
    };
}
