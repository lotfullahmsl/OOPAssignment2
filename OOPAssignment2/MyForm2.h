#include "MyForm4.h"
#include <fstream>
#pragma once

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

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
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label3;

    protected:

    protected:

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
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(39, 98);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(77, 19);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Username";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(39, 123);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(72, 19);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Password";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(118, 97);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(185, 20);
            this->textBox1->TabIndex = 2;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(118, 123);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(185, 20);
            this->textBox2->TabIndex = 3;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button1->Location = System::Drawing::Point(170, 170);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 29);
            this->button1->TabIndex = 4;
            this->button1->Text = L"Sign in";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click_1);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(114, 35);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(187, 19);
            this->label3->TabIndex = 5;
            this->label3->Text = L"- Please Sign in Here -";
            // 
            // MyForm2
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(400, 244);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->MaximumSize = System::Drawing::Size(416, 283);
            this->MinimumSize = System::Drawing::Size(416, 283);
            this->Name = L"MyForm2";
            this->Text = L"MyForm2";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        //write a welcome message 
        MessageBox::Show("Welcome to the game");
        //close the form
        this->Close();

    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

        // it should check that both box are not empty 
        if (textBox1->Text == "") {
			MessageBox::Show("Username ie reqired.");
			return;
		}
        if (textBox2->Text == "") {
            MessageBox::Show("Password is reqired.");
            return;
        }

        // Read the contents of the "Sign-up.txt" file
        String^ filePath = "Sign-up.txt";
        array<String^>^ lines = System::IO::File::ReadAllLines(filePath);

        // Get the username and password entered by the user
        String^ username = textBox1->Text;
        String^ password = textBox2->Text;

        // Flag to check if login is successful
        bool loginSuccessful = false;

        // Loop through each line in the file to check for a match
        for each (String ^ line in lines) {
            array<String^>^ tokens = line->Split(',');
            if (tokens->Length == 2 && tokens[0]->Trim() == username && tokens[1]->Trim() == password) {
                // If username and password match, set the flag to true
                loginSuccessful = true;
                break;
            }
        }

        // Show appropriate message based on login success
        if (loginSuccessful) {
            MessageBox::Show("Successfully logged in!");
			//it should go to the MyForm4 page
            this->Hide();
           // this->Close();

            MyForm4^ f4 = gcnew MyForm4();
            f4->ShowDialog();
			this->Close();
			//this->Close();

        }
        else {
            MessageBox::Show("Incorrect information. Please try again.");
        }

        // Close the form
        this->Close();
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2->PasswordChar = '*';
        //max length of the password 12
        textBox2->MaxLength = 12;

        //current Font size of the password
        textBox2->Font = gcnew System::Drawing::Font("Microsoft YaHei", 7.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));

        
    }

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}