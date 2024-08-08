#pragma once
#include <iostream>
#include <clocale>

#include <msclr/marshal.h>
using namespace System;
using namespace msclr::interop;

namespace TreyClock2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	using namespace System;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::Button^ btn_shutdown;
	private: System::Windows::Forms::ToolStripMenuItem^ powerOffToolStripMenuItem;
	private: System::Windows::Forms::Button^ btn_reset;
	private: System::Windows::Forms::Button^ btn_alarm;

	private: System::Windows::Forms::TextBox^ boxHour;
	private: System::Windows::Forms::TextBox^ boxMinute;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ToolStripMenuItem^ MinimizedMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ showToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::NotifyIcon^ notifyIcon1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->MinimizedMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->powerOffToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btn_shutdown = (gcnew System::Windows::Forms::Button());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->btn_alarm = (gcnew System::Windows::Forms::Button());
			this->boxHour = (gcnew System::Windows::Forms::TextBox());
			this->boxMinute = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// notifyIcon1
			// 
			notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			resources->ApplyResources(notifyIcon1, L"notifyIcon1");
			notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			notifyIcon1->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			notifyIcon1->DoubleClick += gcnew System::EventHandler(this, &MyForm::notifyIcon1_DoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->AllowMerge = false;
			this->contextMenuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this->contextMenuStrip1, L"contextMenuStrip1");
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->MinimizedMenuItem,
					this->powerOffToolStripMenuItem, this->showToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Click += gcnew System::EventHandler(this, &MyForm::closeToolStripMenuItem_Click);
			// 
			// MinimizedMenuItem
			// 
			this->MinimizedMenuItem->Name = L"MinimizedMenuItem";
			resources->ApplyResources(this->MinimizedMenuItem, L"MinimizedMenuItem");
			this->MinimizedMenuItem->Click += gcnew System::EventHandler(this, &MyForm::MinimizedMenuItem_Click);
			// 
			// powerOffToolStripMenuItem
			// 
			this->powerOffToolStripMenuItem->Name = L"powerOffToolStripMenuItem";
			resources->ApplyResources(this->powerOffToolStripMenuItem, L"powerOffToolStripMenuItem");
			this->powerOffToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::powerOffToolStripMenuItem_Click);
			// 
			// showToolStripMenuItem
			// 
			this->showToolStripMenuItem->CheckOnClick = true;
			this->showToolStripMenuItem->Name = L"showToolStripMenuItem";
			resources->ApplyResources(this->showToolStripMenuItem, L"showToolStripMenuItem");
			this->showToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			resources->ApplyResources(this->closeToolStripMenuItem, L"closeToolStripMenuItem");
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::closeToolStripMenuItem_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::Color::GreenYellow;
			this->label1->Name = L"label1";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			resources->ApplyResources(this->openToolStripMenuItem, L"openToolStripMenuItem");
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// btn_shutdown
			// 
			resources->ApplyResources(this->btn_shutdown, L"btn_shutdown");
			this->btn_shutdown->BackColor = System::Drawing::Color::Turquoise;
			this->btn_shutdown->ForeColor = System::Drawing::Color::Maroon;
			this->btn_shutdown->Name = L"btn_shutdown";
			this->btn_shutdown->UseVisualStyleBackColor = false;
			this->btn_shutdown->Click += gcnew System::EventHandler(this, &MyForm::btn_shutdown_Click);
			// 
			// btn_reset
			// 
			resources->ApplyResources(this->btn_reset, L"btn_reset");
			this->btn_reset->BackColor = System::Drawing::Color::Turquoise;
			this->btn_reset->ForeColor = System::Drawing::Color::Maroon;
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->UseVisualStyleBackColor = false;
			this->btn_reset->Click += gcnew System::EventHandler(this, &MyForm::btn_reset_Click);
			// 
			// btn_alarm
			// 
			resources->ApplyResources(this->btn_alarm, L"btn_alarm");
			this->btn_alarm->BackColor = System::Drawing::Color::Turquoise;
			this->btn_alarm->ForeColor = System::Drawing::Color::Maroon;
			this->btn_alarm->Name = L"btn_alarm";
			this->btn_alarm->UseVisualStyleBackColor = false;
			this->btn_alarm->Click += gcnew System::EventHandler(this, &MyForm::btn_alarm_Click);
			// 
			// boxHour
			// 
			this->boxHour->BackColor = System::Drawing::SystemColors::ControlLight;
			resources->ApplyResources(this->boxHour, L"boxHour");
			this->boxHour->ForeColor = System::Drawing::SystemColors::ControlText;
			this->boxHour->Name = L"boxHour";
			// 
			// boxMinute
			// 
			this->boxMinute->BackColor = System::Drawing::SystemColors::InactiveCaption;
			resources->ApplyResources(this->boxMinute, L"boxMinute");
			this->boxMinute->ForeColor = System::Drawing::SystemColors::ControlText;
			this->boxMinute->Name = L"boxMinute";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::Color::GreenYellow;
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->ForeColor = System::Drawing::Color::GreenYellow;
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Name = L"label7";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->boxMinute);
			this->Controls->Add(this->boxHour);
			this->Controls->Add(this->btn_alarm);
			this->Controls->Add(this->btn_reset);
			this->Controls->Add(this->btn_shutdown);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Yellow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	

	private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();		
	}
          /*Местное время в формате string*/
		   
		  private: System::String^ hour1;
		  private: System::String^ Minute1;
		  private: System::String^ Second1;

		  /*Местное время в формате Int32*/

		  private: int hour32;
		  private: int Minute32;
		  private: int Second32;

		  /*Сохраненное время для будильника*/

		  private: int timeHour;
		  private: int timeMinute;

		  /*Переменная для активации будильника*/

		  private: bool alarmClockOnOff = false;		  

    private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		/*Местное время в формате string*/
		DateTime now = DateTime::Now;

		hour1 = now.Hour.ToString();
		Minute1 = now.Minute.ToString();
		Second1 = now.Second.ToString();

		/*Местное время в формате Int32*/

		hour32 = System::Convert::ToInt32(hour1);
		Minute32 = System::Convert::ToInt32(Minute1);		
	
	if (hour1->Length <2) { hour1 ="0" + hour1; };
	if (Minute1->Length <2) { Minute1 = "0" + Minute1; };
	if (Second1->Length <2) { Second1 =  "0" + Second1; };

	this->label1->Text = hour1 + ":" + Minute1 + ":" + Second1;
	math_time();
    }

	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {		
		this->WindowState= System::Windows::Forms::FormWindowState::Normal;
		this->Visible = true;
		this->Focus();
	}

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::MaximizeBox = false;
	System::Windows::Forms::Form::ShowInTaskbar = false;

	/*Сохраняем и загружаем значения будильника в файл*/
	try {
	/*----------------------------- Чтение файла --------------------------------------*/		
		String^ timefileName = "./Files/timefile.txt";
		
		StreamReader^ fread = File::OpenText(timefileName);

		String^ str;
		while ((str = fread->ReadLine()) != nullptr)
		{
			this->label5->Text = str->Remove(2);
			this->label6->Text = str->Substring(3);

			timeHour = System::Convert::ToInt32(this->label5->Text);
			timeMinute = System::Convert::ToInt32(this->label6->Text);
			//MessageBox::Show( str->Remove(2));
			//MessageBox::Show( str->Substring(3));
		}
		//char timedate[5] = "00:00";
		fread->Close();		
	/*----------------------------- Чтение файла --------------------------------------*/
	}
	catch (Exception^ ex) {
		MessageBox::Show(this, ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	};
    }

	private: System::Void powerOFF() {
		   system("shutdown -p");
	}
	private: System::Void resetPC() {
		system("shutdown /r /t 0");
	}

    private: System::Void btn_shutdown_Click(System::Object^ sender, System::EventArgs^ e) {	
	this->powerOFF();
    }

    private: System::Void powerOffToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->powerOFF();
    }

    private: System::Void btn_reset_Click(System::Object^ sender, System::EventArgs^ e) {
		timeHour = NULL;
		timeMinute = NULL;
		this->boxHour->Text = "";
		this->boxMinute->Text = "";
		this->label5->Text = "";
		this->label6->Text = "";
		alarmClockOnOff = false;
	}
	
	private: System::Void blocklabel5_6_check() {
		/*-------------------------- Блок проверки label5(hour) и label6(Minute) на наличие введенных чисел ---*/
		if (this->boxHour->Text->Length == 0 && this->boxMinute->Text->Length > 0) {
			this->boxHour->Text = "00";
			alarmClockOnOff = true;
		};
		if (this->boxHour->Text->Length > 0 && this->boxMinute->Text->Length == 0) {
			this->boxMinute->Text = "00";
			alarmClockOnOff = true;
		};
	}

    private: System::Void blockIfNOImput() {
		/*------------------------Если ничего не введено -----*/
		if (this->boxHour->Text->Length == 0 && this->boxMinute->Text->Length == 0) {
			this->boxHour->Text = "23";
			this->boxMinute->Text = "45";
			timeHour = 23;
			timeMinute = 45;
		}
    }

	private: System::Void blockTwoSing() {
		 /*-------------- Блок проверки и вывода чисел будильника в два знака -------------------*/
		 if (this->boxHour->Text->Length == 1) {
			 this->label5->Text = "0" + this->boxHour->Text;
			 alarmClockOnOff = true;
		 }
		 else if (this->boxHour->Text->Length == 2) {
			 this->label5->Text = this->boxHour->Text;
			 alarmClockOnOff = true;
		 };


		 if (this->boxMinute->Text->Length == 1) {
			 this->label6->Text = "0" + this->boxMinute->Text;
		 }
		 else if (this->boxMinute->Text->Length == 2) {
			 this->label6->Text = this->boxMinute->Text;
		 };
		 //--------------------------------------------------------------------------------------		 
	 }

	private: System::Void blockLnputIimitation() {
		/*Ограничение числа ввода часов в 24 и минут ввода в 60*/
		if (24 < timeHour || timeHour < 0) {
			this->boxHour->Text = "";
			this->boxMinute->Text = "";
			this->label5->Text = "";
			this->label6->Text = "";
			MessageBox::Show("Введите часы в формате от 0 до 23");
		};

		if (60 < timeMinute || timeMinute < 0) {
			this->boxHour->Text = "";
			this->boxMinute->Text = "";
			this->label5->Text = "";
			this->label6->Text = "";
			MessageBox::Show("Введите минуты в формате от 0 до 23");
		};
	}

	private: System::Void blockWriteFile() {
		/*----------------------------- Запись файла -------------------------------------------*/

		String^ defaulTime = "23:44";

		String^ timefileName = "./Files/timefile.txt";

		String^ clocktime = this->boxHour->Text + ":" + this->boxMinute->Text;

		if (this->label5->Text->Length == 2 && this->label6->Text->Length == 2) {
			timeHour = System::Convert::ToInt32(this->label5->Text);
			timeMinute = System::Convert::ToInt32(this->label6->Text);

			StreamWriter^ sw = gcnew StreamWriter(timefileName);
			sw->WriteLine(clocktime);

			/*sw->Write(defaulTime);
			sw->WriteLine("...or just Write");
			sw->WriteLine("and do {0} output too.", "formatted");
			sw->WriteLine("You can also send non-text objects:");
			sw->WriteLine(DateTime::Now);*/

			sw->Close();
			/*---------------------------------------------------------------------------------------*/
		};
	}

    private: System::Void btn_alarm_Click(System::Object^ sender, System::EventArgs^ e) {		
		
			try {
	/*-------------------------- Блок проверки label5(hour) и label6(Minute) на наличие введенных чисел ---*/

				blocklabel5_6_check(); 

	/*-------------------------- Если ничего не введено ---------------------------------------------------*/

				blockIfNOImput();

	/*-----------------------------------------------------------------------------------------------------*/

				timeHour = System::Convert::ToInt32(this->label5->Text);
				timeMinute = System::Convert::ToInt32(this->label6->Text);

	/*-------------- Блок проверки и вывода чисел будильника в два знака ----------------------------------*/

				blockTwoSing();

	//-------------------------------------------------------------------------------------------------------
				/*Ограничение числа ввода часов в 24 и минут ввода в 60*/

				blockLnputIimitation();

	/*-------------------------------------------------------------------------------------------------------*/
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(this, ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

				this->boxHour->Text = "";
				this->boxMinute->Text = "";

				timeHour = 00;
				timeMinute = 00;
			}
			/*catch (Exception^)
			{
				throw;

				MessageBox::Show(this, e->ToString());
				MessageBox::Show("Exception Type:\n   {0}", e->GetType()->ToString());
				MessageBox::Show("Exception Des:\n   {0}", e->Message);
				MessageBox::Show("Stack Trace out:\n{0}", e->StackTrace);
			};
			*/

	//------------------------------------------------------------------------------------------------------
				/*Загружаем значения будильника в файл*/
			try {
			
    /*----------------------------- Запись файла -----------------------------------------------------------*/

				blockWriteFile();

	/*-------------------------------------------------------------------------------------------------------*/
			
			}
			catch (Exception^ ex) {
				MessageBox::Show(this, ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			};	
    }

    private: System::Void math_time() 
    {
		if (timeHour>=0 && timeMinute>=0 && alarmClockOnOff) {
			if (timeHour == hour32 && timeMinute == Minute32) {
				this->powerOFF();
			}
		}
    } 


private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {

	if (this->WindowState == System::Windows::Forms::FormWindowState::Minimized)
	{
		
		//this->ShowInTaskbar = false; //пробовал так
		this->Hide(); //и так
	}
	if (this->WindowState == System::Windows::Forms::FormWindowState::Normal)
	{		
		this->Show();
		this->Focus();
		//this->Raise();
		//this->setFocus();
		this->Visible = true;
		this->ShowInTaskbar = true; //пробовал так
		//this->Hide(); //и так
	}

	/*if (this->WindowState == FormWindowState::Minimized) {
		NotifyIcon::BalloonTipTitlele = "Программа была спрятана";
		notifyIcon1->BalloonTipText = "Обратите внимание что программа была спрятана в трей и продолжит свою работу.";
		notifyIcon1->ShowBalloonTip(3000);
		this->ShowInTaskbar = false; //пробовал так
		notifyIcon1->Visible = true;*/
		//this->Hide(); //и так
	//}
}
private: System::Void MinimizedMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}

private: System::Void notifyIcon1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	
	this->System::Windows::Forms::Form::Visible = true;
	this->WindowState == System::Windows::Forms::FormWindowState::Normal;
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->resetPC();
}
};
}
