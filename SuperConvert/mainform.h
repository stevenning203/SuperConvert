#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include "basicStringConvert.h"
#include "math.h"
#include <msclr\marshal_cppstd.h>

namespace SuperConvert {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
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
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ inputTextBox;

	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::TextBox^ outputTextBox;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainform::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(118, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Bin to Dec";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainform::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(118, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Dec to Hex";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainform::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(118, 67);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Hex to Dec";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainform::button3_Click);
			// 
			// inputTextBox
			// 
			this->inputTextBox->Location = System::Drawing::Point(12, 12);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(100, 20);
			this->inputTextBox->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(118, 96);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Dec to Bin";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainform::button4_Click);
			// 
			// outputTextBox
			// 
			this->outputTextBox->Location = System::Drawing::Point(12, 159);
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->Size = System::Drawing::Size(100, 20);
			this->outputTextBox->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 115);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(130, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Version: 1.0a release";
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(261, 193);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->outputTextBox);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->inputTextBox);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"mainform";
			this->Text = L"SuperConvert";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ testFieldNotEmpty = inputTextBox->Text;
		String^ nullComparator = "";
		if (testFieldNotEmpty != nullComparator)
		{
			char buffer[99];
			msclr::interop::marshal_context context;
			std::string tester = context.marshal_as<std::string>(inputTextBox->Text);
			for (int i = 0; i < tester.length(); i++)
			{
				if (!isdigit(tester[i]) || tester.length() > 16)
				{
					MessageBox::Show("Input is not numeric, or input is too large.", "Error");
					break;
				}
				else
				{
					int input = Convert::ToInt64(inputTextBox->Text);
					itoa(input, buffer, 16);
					outputTextBox->Text = Convert::ToString(charToSystemString(buffer));
				}
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ testFieldNotEmpty = inputTextBox->Text;
		String^ nullComparator = "";
		if (testFieldNotEmpty != nullComparator)
		{
			unsigned int buffer = 0;
			String^ input = Convert::ToString(inputTextBox->Text);
			unsigned char n = input->Length;
			for (int i = 0; i < n; i++)
			{
				String^ tString = input;
				int tChar = 0;
				if (tString[i] >= 48 && tString[i] <= 57)
					tChar = (int)(tString[i] - '0');
				else if (tString[i] >= 65 && tString[i] <= 90)
				{
					tChar = (int)(tString[i] - '7');
				}
				else if (tString[i] >= 97 && tString[i] <= 122)
				{
					tChar = (int)(tString[i] - 'W');
				}
				else
				{
					buffer = 0;
					break;
				}
				buffer += tChar * pow(16, n - i - 1);
			}
			outputTextBox->Text = Convert::ToString(buffer);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // dec to bin
		String^ testFieldNotEmpty = inputTextBox->Text;
		String^ nullComparator = "";
		if (testFieldNotEmpty != nullComparator)
		{
			char buffer[99];
			msclr::interop::marshal_context context;
			std::string tester = context.marshal_as<std::string>(inputTextBox->Text);
			for (int i = 0; i < tester.length(); i++)
			{
				if (!isdigit(tester[i]) || tester.length() > 16)
				{
					MessageBox::Show("Input is not numeric, or input is too large.", "Error");
					break;
				}
				else
				{
					int input = Convert::ToInt64(inputTextBox->Text);
					itoa(input, buffer, 2);
					outputTextBox->Text = Convert::ToString(charToSystemString(buffer));
				}
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // bin to dec
		String^ testFieldNotEmpty = inputTextBox->Text;
		String^ nullComparator = "";
		if (testFieldNotEmpty != nullComparator)
		{
			char buffer[99];
			msclr::interop::marshal_context context;
			std::string tester = context.marshal_as<std::string>(inputTextBox->Text);
			for (int i = 0; i < tester.length(); i++)
			{
				if (!isdigit(tester[i]) || tester.length() > 16 || tester[i] - 48 > 1)
				{
					MessageBox::Show("Input is not binary, or input is too large.", "Error");
					break;
				}
				else
				{
					unsigned int buffer = 0;
					String^ input = Convert::ToString(inputTextBox->Text);
					unsigned char n = input->Length;
					for (int i = 0; i < n; i++)
					{
						String^ tString = input;
						int tChar = tString[i] - 48;
						buffer += tChar * pow(2, n - i - 1);
						outputTextBox->Text = Convert::ToString(buffer);
					}
				}
			}
				
		}
	}
};
}
