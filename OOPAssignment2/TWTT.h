//#pragma once
//
//namespace OOPAssignment2 {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Summary for TWTT
//	/// </summary>
//	public ref class TWTT : public System::Windows::Forms::Form
//	{
//	public:
//		TWTT(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: Add the constructor code here
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Clean up any resources being used.
//		/// </summary>
//		~TWTT()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Label^ label1;
//	protected:
//
//	private:
//		/// <summary>
//		/// Required designer variable.
//		/// </summary>
//		System::ComponentModel::Container ^components;
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Required method for Designer support - do not modify
//		/// the contents of this method with the code editor.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			this->label1 = (gcnew System::Windows::Forms::Label());
//			this->SuspendLayout();
//			// 
//			// label1
//			// 
//			this->label1->AutoSize = true;
//			this->label1->Location = System::Drawing::Point(201, 40);
//			this->label1->Name = L"label1";
//			this->label1->Size = System::Drawing::Size(35, 13);
//			this->label1->TabIndex = 0;
//			this->label1->Text = L"label1";
//			this->label1->Click += gcnew System::EventHandler(this, &TWTT::label1_Click);
//			// 
//			// TWTT
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->ClientSize = System::Drawing::Size(486, 261);
//			this->Controls->Add(this->label1);
//			this->Name = L"TWTT";
//			this->Text = L"TWTT";
//			this->ResumeLayout(false);
//			this->PerformLayout();
//
//		}
//#pragma endregion
//	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
//	}
//	};
//}


#pragma once


namespace OOPAssignment2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class TWTT : public System::Windows::Forms::Form
    {
    public:
        TWTT(void)
        {
            InitializeComponent();
        }

    protected:
        ~TWTT()
        {
            
        }
    private: System::Windows::Forms::Label^ label2;
    protected:

    protected:

    protected:

    private:
        System::Windows::Forms::Label^ label1;

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(32, 60);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(44, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"label1";
            this->label1->Click += gcnew System::EventHandler(this, &TWTT::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(94, 21);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(275, 24);
            this->label2->TabIndex = 1;
            this->label2->Text = L"- Teacher Wise TimeTable -";
            // 
            // TWTT
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(486, 261);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->MaximumSize = System::Drawing::Size(502, 300);
            this->MinimumSize = System::Drawing::Size(502, 300);
            this->Name = L"TWTT";
            this->Text = L"TWTT";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    public:
        // Function to show the timetable information
        void ShowTimetable(String^ teacherName, String^ timetableInfo)
        {
            this->Text = teacherName + "'s Timetable"; // Set the form title
            this->label1->Text = timetableInfo; // Display the timetable information in the label
        }

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    };
}
