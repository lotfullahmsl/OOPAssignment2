#pragma once

#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class OOPAssignment02 : public System::Windows::Forms::Form
    {
    public:
        OOPAssignment02(void)
        {
            InitializeComponent();
        }

    protected:
        ~OOPAssignment02()
        {
            if (components)
            {
                delete components;
            }
        }

    private:

    private:
        System::Windows::Forms::Button^ button1;
    private:
        System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label1;
    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(96, 124);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(86, 35);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Sign in";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &OOPAssignment02::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(188, 124);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(86, 35);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Sign up";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &OOPAssignment02::button2_Click_1);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(65, 90);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(252, 19);
            this->label1->TabIndex = 3;
            this->label1->Text = L"TimeTable Managment System";
            this->label1->Click += gcnew System::EventHandler(this, &OOPAssignment02::label1_Click);
            // 
            // OOPAssignment02
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(375, 261);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->MaximumSize = System::Drawing::Size(391, 300);
            this->MinimumSize = System::Drawing::Size(391, 300);
            this->Name = L"OOPAssignment02";
            this->Text = L"OOPAssignment02";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private:
        //when this is clicked , the form2 will be shown and this form will be closed
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
            MyForm2^ form2 = gcnew MyForm2();
			form2->Show();
			this->Close();
            
		}
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
            MyForm2^ form2 = gcnew MyForm2();
		    this->Hide();
            form2->ShowDialog();
            
            this->Close();
        }
    private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
        
        MyForm3^ form3 = gcnew MyForm3();
        this->Hide();
		form3->ShowDialog();
        this->Hide();
		this->Close();

    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
        
    }
};
}
