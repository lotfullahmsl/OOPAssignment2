#pragma once

#include <msclr/marshal_cppstd.h> // Include for marshaling
#include <fstream> // Include for file handling
#include "SWTT.h" // Include for the SWTT form

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO; // Include for file handling

    /// <summary>
    /// Summary for SelectSection
    /// </summary>
    public ref class SelectSection : public System::Windows::Forms::Form
    {
    public:
        SelectSection(void)
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
        ~SelectSection()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label7;


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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(201, 157);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(69, 23);
            this->button1->TabIndex = 28;
            this->button1->Text = L"Search";
            this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &SelectSection::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(166, 159);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(25, 20);
            this->textBox1->TabIndex = 27;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &SelectSection::textBox1_TextChanged);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(71, 159);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(89, 17);
            this->label8->TabIndex = 26;
            this->label8->Text = L"Your Choice: ";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(71, 136);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(56, 17);
            this->label6->TabIndex = 25;
            this->label6->Text = L"5. BSE-E";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(71, 119);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(59, 17);
            this->label5->TabIndex = 24;
            this->label5->Text = L"4. BSE-D";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(71, 102);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(57, 17);
            this->label4->TabIndex = 23;
            this->label4->Text = L"3. BSE-C";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(71, 85);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(57, 17);
            this->label3->TabIndex = 22;
            this->label3->Text = L"2. BSE-B";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(71, 68);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(58, 17);
            this->label2->TabIndex = 21;
            this->label2->Text = L"1. BSE-A";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(91, 34);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(176, 24);
            this->label7->TabIndex = 29;
            this->label7->Text = L"- Choose Section -";
            // 
            // SelectSection
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(400, 244);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->MaximumSize = System::Drawing::Size(416, 283);
            this->MinimumSize = System::Drawing::Size(416, 283);
            this->Name = L"SelectSection";
            this->Text = L"SelectSection";
            this->Load += gcnew System::EventHandler(this, &SelectSection::SelectSection_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
       // Get the selected section letter
       String^ sectionLetter = "";
       // it should check if input is empty
       if (textBox1->Text == "") {
           MessageBox::Show("Please Enter a valid choice");
       }
       else if (textBox1->Text == "1") {
           sectionLetter = "A";
       }
       else if (textBox1->Text == "2") {
           sectionLetter = "B";
       }
       else if (textBox1->Text == "3") {
           sectionLetter = "C";
       }
       else if (textBox1->Text == "4") {
           sectionLetter = "D";
       }
       else if (textBox1->Text == "5") {
           sectionLetter = "E";
       }
       else {
           // Show error message for invalid input
           MessageBox::Show("Invalid Section");
           return;
       }

       // Define the filename based on the selected section letter
       String^ fileName = "BSE-" + sectionLetter + "_timetable.txt";

       // Convert managed string to native string
       std::string fileNameNative = msclr::interop::marshal_as<std::string>(fileName);

       // Open the file
       std::ifstream file(fileNameNative);

       // Check if the file is open
       if (file.is_open()) {
           // File is open, read its contents and store them in a string
           std::string timetableContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

           // Close the file
           file.close();

           // Create an instance of the SWTT form
           SWTT^ swttForm = gcnew SWTT();

           // Pass the timetable content to the SWTT form
           swttForm->SetTimetable(gcnew String(timetableContent.c_str()));

           // Show the SWTT form
           swttForm->Show();
       }
       else {
           // File couldn't be opened, show error message
           MessageBox::Show("Unable to open file: " + fileName);
       }
   }

    private: System::Void SelectSection_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
