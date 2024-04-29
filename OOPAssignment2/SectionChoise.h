#pragma once
#include "BSE_A_Teachers.h" 
#include "BSE_B_Teachers.h" 
#include "BSE_C_Teachers.h" 
#include "BSE_D_Teachers.h" 
#include "BSE_E_Teachers.h" 
#include "TWTT.h" 

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::IO; // Include the namespace for file operations

    public ref class SectionChoise : public System::Windows::Forms::Form
    {
    public:
        SectionChoise(void)
        {
            InitializeComponent();
        }

    protected:
        ~SectionChoise()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::Label^ label8;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::Label^ label7;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
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
            this->button1->Location = System::Drawing::Point(206, 162);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(69, 23);
            this->button1->TabIndex = 19;
            this->button1->Text = L"Search";
            this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &SectionChoise::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(170, 163);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(25, 20);
            this->textBox1->TabIndex = 18;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &SectionChoise::textBox1_TextChanged);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(75, 163);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(89, 17);
            this->label8->TabIndex = 17;
            this->label8->Text = L"Your Choice: ";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(75, 143);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(56, 17);
            this->label6->TabIndex = 15;
            this->label6->Text = L"5. BSE-E";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(75, 126);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(59, 17);
            this->label5->TabIndex = 14;
            this->label5->Text = L"4. BSE-D";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(75, 109);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(57, 17);
            this->label4->TabIndex = 13;
            this->label4->Text = L"3. BSE-C";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(75, 92);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(57, 17);
            this->label3->TabIndex = 12;
            this->label3->Text = L"2. BSE-B";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(75, 75);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(58, 17);
            this->label2->TabIndex = 11;
            this->label2->Text = L"1. BSE-A";
            this->label2->Click += gcnew System::EventHandler(this, &SectionChoise::label2_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(93, 35);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(176, 24);
            this->label7->TabIndex = 20;
            this->label7->Text = L"- Choose Section -";
            // 
            // SectionChoise
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
            this->Name = L"SectionChoise";
            this->Text = L"SectionChoise";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
        }

    private:
        // Button click event handler to handle section selection
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ sectionChoice = textBox1->Text;
            // it should check that input is not empty
            if (textBox1->Text == "") {
				MessageBox::Show("Please Enter a valid choice");
			}
            
            if (sectionChoice == "1") {
                this->Hide();
                DisplayTeachers("BSE-A_teachers.txt", "BSE-A");

            }
            else if (sectionChoice == "2") {
                this->Hide();
                BSE_B_Teachers^ teachersForm = gcnew BSE_B_Teachers("BSE-B", "BSE-B_teachers.txt");
                teachersForm->ShowDialog();
            }
            else if (sectionChoice == "3") {
                this->Hide();
                BSE_C_Teachers^ teachersForm = gcnew BSE_C_Teachers("BSE-C", "BSE-C_teachers.txt");
                teachersForm->ShowDialog();

            }
            else if (sectionChoice == "4") {
                this->Hide();
                BSE_D_Teachers^ teachersForm = gcnew BSE_D_Teachers("BSE-D", "BSE-D_teachers.txt");                
                teachersForm->ShowDialog();
            }
            else if (sectionChoice == "5") {
                this->Hide();
				BSE_E_Teachers^ teachersForm = gcnew BSE_E_Teachers("BSE-E", "BSE-E_teachers.txt");
				teachersForm->ShowDialog();
               
            }
            else {
                MessageBox::Show("Invalid Choice");
            }
        }

    private:
        // Function to display teachers from a section's file
        void DisplayTeachers(String^ filePath, String^ sectionName) {
            try {
                // Open the file
                StreamReader^ reader = gcnew StreamReader(filePath);

                // Read all lines and concatenate them into a single string
                String^ allTeachers = reader->ReadToEnd();

                // Close the file
                reader->Close();

                // Create an instance of the BSE_A_Teachers form
                BSE_A_Teachers^ teachersForm = gcnew BSE_A_Teachers(sectionName, filePath);

                // Set the text of the form to include the section name
                teachersForm->Text = sectionName + " Teachers";

                // Show the BSE_A_Teachers form
                teachersForm->ShowDialog();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message);
            }
        }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
