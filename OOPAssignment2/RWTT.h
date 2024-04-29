#pragma once

namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for RWTT
    /// </summary>
    public ref class RWTT : public System::Windows::Forms::Form
    {
    public:
        RWTT(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~RWTT()
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
        System::Windows::Forms::Label^ labelSectionName; // Declare Label control for section name
    private: System::Windows::Forms::Label^ label1;
           System::Windows::Forms::Label^ labelTimetableInfo; // Declare Label control for timetable info

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->labelSectionName = (gcnew System::Windows::Forms::Label());
            this->labelTimetableInfo = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // labelSectionName
            // 
            this->labelSectionName->AutoSize = true;
            this->labelSectionName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelSectionName->Location = System::Drawing::Point(13, 36);
            this->labelSectionName->Name = L"labelSectionName";
            this->labelSectionName->Size = System::Drawing::Size(51, 15);
            this->labelSectionName->TabIndex = 0;
            this->labelSectionName->Text = L"Section:";
            // 
            // labelTimetableInfo
            // 
            this->labelTimetableInfo->AutoSize = true;
            this->labelTimetableInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTimetableInfo->Location = System::Drawing::Point(12, 56);
            this->labelTimetableInfo->Name = L"labelTimetableInfo";
            this->labelTimetableInfo->Size = System::Drawing::Size(88, 15);
            this->labelTimetableInfo->TabIndex = 1;
            this->labelTimetableInfo->Text = L"Timetable Info:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(61, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(254, 24);
            this->label1->TabIndex = 2;
            this->label1->Text = L"- Room Wise TimeTable -";
            // 
            // RWTT
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(390, 485);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->labelTimetableInfo);
            this->Controls->Add(this->labelSectionName);
            this->MaximumSize = System::Drawing::Size(406, 524);
            this->MinimumSize = System::Drawing::Size(406, 524);
            this->Name = L"RWTT";
            this->Text = L"RWTT";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    public:
        // Function to display the timetable information
        void ShowTimetable(String^ sectionName, String^ timetableInfo)
        {
            // Display the section name and timetable information in labels
            labelSectionName->Text = "Section: " + sectionName;

            labelTimetableInfo->Text = timetableInfo;

        }
    };
}
