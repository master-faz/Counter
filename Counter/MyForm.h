#pragma once

namespace Counter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  topLabel;
	private: System::Windows::Forms::Label^  hiddenLabel;
	protected:


	private: System::Windows::Forms::Label^  midLabel;
	protected:


	private: System::Windows::Forms::Button^  startBtn;
	private: System::Windows::Forms::Button^  endBtn;
	private: System::Windows::Forms::Button^  resetBtn;
	private: System::Windows::Forms::Timer^  timeDisp;





	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int count = 100;
		int time = 100;
		int mins;
	private: System::Windows::Forms::Timer^  countdown;
			 int secs;
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->topLabel = (gcnew System::Windows::Forms::Label());
			this->hiddenLabel = (gcnew System::Windows::Forms::Label());
			this->midLabel = (gcnew System::Windows::Forms::Label());
			this->startBtn = (gcnew System::Windows::Forms::Button());
			this->endBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->timeDisp = (gcnew System::Windows::Forms::Timer(this->components));
			this->countdown = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// topLabel
			// 
			this->topLabel->AutoSize = true;
			this->topLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->topLabel->ForeColor = System::Drawing::Color::Teal;
			this->topLabel->Location = System::Drawing::Point(214, 39);
			this->topLabel->Name = L"topLabel";
			this->topLabel->Size = System::Drawing::Size(107, 39);
			this->topLabel->TabIndex = 0;
			this->topLabel->Text = L"01:40";
			// 
			// hiddenLabel
			// 
			this->hiddenLabel->AutoSize = true;
			this->hiddenLabel->BackColor = System::Drawing::SystemColors::Control;
			this->hiddenLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hiddenLabel->ForeColor = System::Drawing::Color::Red;
			this->hiddenLabel->Location = System::Drawing::Point(167, 382);
			this->hiddenLabel->Name = L"hiddenLabel";
			this->hiddenLabel->Size = System::Drawing::Size(0, 39);
			this->hiddenLabel->TabIndex = 1;
			// 
			// midLabel
			// 
			this->midLabel->AutoSize = true;
			this->midLabel->BackColor = System::Drawing::Color::Chartreuse;
			this->midLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->midLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->midLabel->ForeColor = System::Drawing::Color::DarkRed;
			this->midLabel->Location = System::Drawing::Point(158, 110);
			this->midLabel->Name = L"midLabel";
			this->midLabel->Size = System::Drawing::Size(221, 115);
			this->midLabel->TabIndex = 2;
			this->midLabel->Text = L"100";
			this->midLabel->Click += gcnew System::EventHandler(this, &MyForm::midLabel_Click);
			// 
			// startBtn
			// 
			this->startBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startBtn->Location = System::Drawing::Point(54, 274);
			this->startBtn->Name = L"startBtn";
			this->startBtn->Size = System::Drawing::Size(100, 60);
			this->startBtn->TabIndex = 3;
			this->startBtn->Text = L"Start";
			this->startBtn->UseVisualStyleBackColor = true;
			this->startBtn->Click += gcnew System::EventHandler(this, &MyForm::startBtn_Click);
			// 
			// endBtn
			// 
			this->endBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->endBtn->Location = System::Drawing::Point(203, 274);
			this->endBtn->Name = L"endBtn";
			this->endBtn->Size = System::Drawing::Size(100, 60);
			this->endBtn->TabIndex = 4;
			this->endBtn->Text = L"Stop";
			this->endBtn->UseVisualStyleBackColor = true;
			this->endBtn->Click += gcnew System::EventHandler(this, &MyForm::endBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetBtn->Location = System::Drawing::Point(350, 274);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(100, 60);
			this->resetBtn->TabIndex = 5;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			this->resetBtn->Click += gcnew System::EventHandler(this, &MyForm::resetBtn_Click);
			// 
			// timeDisp
			// 
			this->timeDisp->Interval = 1000;
			this->timeDisp->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// countdown
			// 
			this->countdown->Interval = 1000;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 485);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->endBtn);
			this->Controls->Add(this->startBtn);
			this->Controls->Add(this->midLabel);
			this->Controls->Add(this->hiddenLabel);
			this->Controls->Add(this->topLabel);
			this->Name = L"MyForm";
			this->Text = L"Programming Assignment 2";
			this->DoubleClick += gcnew System::EventHandler(this, &MyForm::MyForm_DoubleClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void startBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count > 0 && time > 0) {
			timeDisp->Start();
		}
		else if (count < 1) {
			timeDisp->Stop();
			hiddenLabel->Text = "Counter stops!";
		}
		else if (time < 1) {
			timeDisp->Stop();
			hiddenLabel->Text = "Time out!!";
		}
	}
	private: System::Void endBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		timeDisp->Stop();
	}
	private: System::Void resetBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		count = 100;
		midLabel->Text = String::Format("{0:000}", count);
		hiddenLabel->Text = "";
	}
	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
		midLabel->Text = String::Format("{0:000}", --count);
		time--;
		secs = time % 60;
		mins = time / 60;
		topLabel->Text = String::Format("{0:00}:{1:00}", mins, secs);
		if (count < 1) {
			timeDisp->Stop();
			hiddenLabel->Text = "Counter stops!";
		}
		else if (time < 1) {
			timeDisp->Stop();
			hiddenLabel->Text = "Time out!!";
		}
	}
	private: System::Void midLabel_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count >= 5) {
			count -= 5;
			midLabel->Text = String::Format("{0:000}", count);
		}
	}
	private: System::Void MyForm_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		if (count >= 10) {
			count -= 10;
			midLabel->Text = String::Format("{0:000}", count);
		}
	}
};
}
