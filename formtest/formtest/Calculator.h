#pragma once

namespace formtest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  buttonplus;
	private: System::Windows::Forms::Button^  buttonminus;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  buttondiv;

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  buttonmultiple;
	private: System::Windows::Forms::Button^  buttonequal;


	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
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
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonplus = (gcnew System::Windows::Forms::Button());
			this->buttonminus = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->buttondiv = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->buttonmultiple = (gcnew System::Windows::Forms::Button());
			this->buttonequal = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(24, 32);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(363, 52);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(24, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 77);
			this->button1->TabIndex = 1;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(113, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 77);
			this->button2->TabIndex = 2;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(202, 116);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 77);
			this->button3->TabIndex = 3;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// buttonplus
			// 
			this->buttonplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonplus->Location = System::Drawing::Point(291, 116);
			this->buttonplus->Name = L"buttonplus";
			this->buttonplus->Size = System::Drawing::Size(83, 77);
			this->buttonplus->TabIndex = 4;
			this->buttonplus->Text = L"+";
			this->buttonplus->UseVisualStyleBackColor = true;
			this->buttonplus->Click += gcnew System::EventHandler(this, &Calculator::buttonplus_Click);
			// 
			// buttonminus
			// 
			this->buttonminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonminus->Location = System::Drawing::Point(291, 199);
			this->buttonminus->Name = L"buttonminus";
			this->buttonminus->Size = System::Drawing::Size(83, 77);
			this->buttonminus->TabIndex = 8;
			this->buttonminus->Text = L"-";
			this->buttonminus->UseVisualStyleBackColor = true;
			this->buttonminus->Click += gcnew System::EventHandler(this, &Calculator::buttonminus_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(202, 199);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 77);
			this->button6->TabIndex = 7;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(113, 199);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 77);
			this->button7->TabIndex = 6;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(24, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 77);
			this->button8->TabIndex = 5;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// buttondiv
			// 
			this->buttondiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttondiv->Location = System::Drawing::Point(291, 282);
			this->buttondiv->Name = L"buttondiv";
			this->buttondiv->Size = System::Drawing::Size(83, 77);
			this->buttondiv->TabIndex = 12;
			this->buttondiv->Text = L"/";
			this->buttondiv->UseVisualStyleBackColor = true;
			this->buttondiv->Click += gcnew System::EventHandler(this, &Calculator::buttondiv_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(202, 282);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(83, 77);
			this->button10->TabIndex = 11;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(113, 282);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 77);
			this->button11->TabIndex = 10;
			this->button11->Text = L"7";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(24, 282);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(83, 77);
			this->button12->TabIndex = 9;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::button12_Click);
			// 
			// buttonmultiple
			// 
			this->buttonmultiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonmultiple->Location = System::Drawing::Point(291, 365);
			this->buttonmultiple->Name = L"buttonmultiple";
			this->buttonmultiple->Size = System::Drawing::Size(83, 77);
			this->buttonmultiple->TabIndex = 16;
			this->buttonmultiple->Text = L"*";
			this->buttonmultiple->UseVisualStyleBackColor = true;
			this->buttonmultiple->Click += gcnew System::EventHandler(this, &Calculator::buttonmultiple_Click);
			// 
			// buttonequal
			// 
			this->buttonequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonequal->Location = System::Drawing::Point(202, 365);
			this->buttonequal->Name = L"buttonequal";
			this->buttonequal->Size = System::Drawing::Size(83, 77);
			this->buttonequal->TabIndex = 15;
			this->buttonequal->Text = L"=";
			this->buttonequal->UseVisualStyleBackColor = true;
			this->buttonequal->Click += gcnew System::EventHandler(this, &Calculator::buttonequal_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(113, 365);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 77);
			this->button15->TabIndex = 14;
			this->button15->Text = L"0";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(24, 365);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 77);
			this->button16->TabIndex = 13;
			this->button16->Text = L"9";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::button16_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 472);
			this->Controls->Add(this->buttonmultiple);
			this->Controls->Add(this->buttonequal);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->buttondiv);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->buttonminus);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->buttonplus);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblDisplay);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
		int firstnum;
		int secondnum;
		int Result;
		char operation;
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "1";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "1";
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "2";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "2";
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "3";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "3";
		}
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "4";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "4";
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "5";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "5";
		}
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "6";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "6";
		}
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "7";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "7";
		}
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "8";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "8";
		}
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "9";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "9";
		}
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lblDisplay->Text == "0"){
			lblDisplay->Text = "0";
		}
		else{
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "0";
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			lblDisplay->Text = "";
			lblDisplay->Text = "0";
	}
	private: System::Void buttonplus_Click(System::Object^  sender, System::EventArgs^  e) {

			firstnum = Convert::ToInt32(lblDisplay->Text);
			lblDisplay->Text="0";
			operation = '+';
	}
	private: System::Void buttonminus_Click(System::Object^  sender, System::EventArgs^  e) {

			firstnum = Convert::ToInt32(lblDisplay->Text);
			lblDisplay->Text="0";
			operation = '-';
	}
	private: System::Void buttondiv_Click(System::Object^  sender, System::EventArgs^  e) {

			firstnum = Convert::ToInt32(lblDisplay->Text);
			lblDisplay->Text="0";
			operation = '/';
	}
	private: System::Void buttonmultiple_Click(System::Object^  sender, System::EventArgs^  e) {
		
			firstnum = Convert::ToInt32(lblDisplay->Text);
			lblDisplay->Text="0";
			operation = 'x';
	}
	private: System::Void buttonequal_Click(System::Object^  sender, System::EventArgs^  e) {

		secondnum = Convert::ToInt32(lblDisplay->Text);

		switch (operation)
		{
		case '+':
			Result = firstnum + secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case '-':
			Result = firstnum - secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case '/':
			Result = firstnum / secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case 'x':
			Result = firstnum * secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		}
	}
};
}

