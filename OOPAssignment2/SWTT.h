#pragma once

#include <string>

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::Windows::Forms;

    /// <summary>
    /// Summary for SWTT
    /// </summary>
    public ref class SWTT : public System::Windows::Forms::Form
    {
    public:
        SWTT(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

        // Method to set and display the timetable content
        void SetTimetable(String^ timetableContent) {
            label1->Text = timetableContent;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~SWTT()
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
    private: System::Windows::Forms::Label^ label7;

        System::Windows::Forms::Label^ label1; // Declare label1 control

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(95, 61);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(38, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"label1";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(182, 18);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(268, 24);
            this->label7->TabIndex = 21;
            this->label7->Text = L"- Section Wise TimeTable -";
            // 
            // SWTT
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(644, 468);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label1);
            this->MaximumSize = System::Drawing::Size(660, 507);
            this->MinimumSize = System::Drawing::Size(660, 507);
            this->Name = L"SWTT";
            this->Text = L"SWTT";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    };
}
