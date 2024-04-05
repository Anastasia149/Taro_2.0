#pragma once
#include"MainTest.h"
#include"SMF.h"
namespace Taro20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TestForm
	/// </summary>
	public ref class TestForm : public System::Windows::Forms::Form
	{
	public:
		TestForm(void)
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
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::Button^ general_issues;
	private: System::Windows::Forms::Button^ pentacles;
	private: System::Windows::Forms::Button^ bowls;
	private: System::Windows::Forms::Button^ major_arcana;
	private: System::Windows::Forms::Button^ wands;
	private: System::Windows::Forms::Button^ swords;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TestForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьсяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->general_issues = (gcnew System::Windows::Forms::Button());
			this->pentacles = (gcnew System::Windows::Forms::Button());
			this->bowls = (gcnew System::Windows::Forms::Button());
			this->major_arcana = (gcnew System::Windows::Forms::Button());
			this->wands = (gcnew System::Windows::Forms::Button());
			this->swords = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вернутьсяToolStripMenuItem,
					this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(813, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьсяToolStripMenuItem
			// 
			this->вернутьсяToolStripMenuItem->Name = L"вернутьсяToolStripMenuItem";
			this->вернутьсяToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->вернутьсяToolStripMenuItem->Text = L"Вернуться";
			this->вернутьсяToolStripMenuItem->Click += gcnew System::EventHandler(this, &TestForm::вернутьсяToolStripMenuItem_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// general_issues
			// 
			this->general_issues->BackColor = System::Drawing::Color::Transparent;
			this->general_issues->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->general_issues->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->general_issues->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->general_issues->Location = System::Drawing::Point(297, 86);
			this->general_issues->Name = L"general_issues";
			this->general_issues->Size = System::Drawing::Size(219, 68);
			this->general_issues->TabIndex = 17;
			this->general_issues->Text = L"Все темы";
			this->general_issues->UseVisualStyleBackColor = false;
			this->general_issues->Click += gcnew System::EventHandler(this, &TestForm::general_issues_Click);
			// 
			// pentacles
			// 
			this->pentacles->BackColor = System::Drawing::Color::Transparent;
			this->pentacles->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pentacles->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pentacles->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->pentacles->Location = System::Drawing::Point(71, 165);
			this->pentacles->Name = L"pentacles";
			this->pentacles->Size = System::Drawing::Size(219, 68);
			this->pentacles->TabIndex = 18;
			this->pentacles->Text = L"Пентакли";
			this->pentacles->UseVisualStyleBackColor = false;
			this->pentacles->Click += gcnew System::EventHandler(this, &TestForm::pentacles_Click);
			// 
			// bowls
			// 
			this->bowls->BackColor = System::Drawing::Color::Transparent;
			this->bowls->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bowls->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bowls->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->bowls->Location = System::Drawing::Point(71, 300);
			this->bowls->Name = L"bowls";
			this->bowls->Size = System::Drawing::Size(219, 68);
			this->bowls->TabIndex = 19;
			this->bowls->Text = L"Чаши";
			this->bowls->UseVisualStyleBackColor = false;
			this->bowls->Click += gcnew System::EventHandler(this, &TestForm::bowls_Click);
			// 
			// major_arcana
			// 
			this->major_arcana->BackColor = System::Drawing::Color::Transparent;
			this->major_arcana->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->major_arcana->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->major_arcana->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->major_arcana->Location = System::Drawing::Point(297, 396);
			this->major_arcana->Name = L"major_arcana";
			this->major_arcana->Size = System::Drawing::Size(219, 68);
			this->major_arcana->TabIndex = 20;
			this->major_arcana->Text = L"Старшие арканы";
			this->major_arcana->UseVisualStyleBackColor = false;
			this->major_arcana->Click += gcnew System::EventHandler(this, &TestForm::major_arcana_Click);
			// 
			// wands
			// 
			this->wands->BackColor = System::Drawing::Color::Transparent;
			this->wands->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->wands->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wands->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->wands->Location = System::Drawing::Point(521, 165);
			this->wands->Name = L"wands";
			this->wands->Size = System::Drawing::Size(219, 68);
			this->wands->TabIndex = 21;
			this->wands->Text = L"Жезлы";
			this->wands->UseVisualStyleBackColor = false;
			this->wands->Click += gcnew System::EventHandler(this, &TestForm::wands_Click);
			// 
			// swords
			// 
			this->swords->BackColor = System::Drawing::Color::Transparent;
			this->swords->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->swords->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->swords->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->swords->Location = System::Drawing::Point(521, 300);
			this->swords->Name = L"swords";
			this->swords->Size = System::Drawing::Size(219, 68);
			this->swords->TabIndex = 22;
			this->swords->Text = L"Мечи";
			this->swords->UseVisualStyleBackColor = false;
			this->swords->Click += gcnew System::EventHandler(this, &TestForm::swords_Click);
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(813, 514);
			this->Controls->Add(this->swords);
			this->Controls->Add(this->wands);
			this->Controls->Add(this->major_arcana);
			this->Controls->Add(this->bowls);
			this->Controls->Add(this->pentacles);
			this->Controls->Add(this->general_issues);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"TestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TestForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void вернутьсяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Owner->Show();
		this->Close();
	}
private: System::Void general_issues_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SMF t;
	t.Tem_num = 0;
	MainTest^ MT = gcnew MainTest();
	MT->Owner = this;
	MT->Show();
	this->Hide();
}
private: System::Void pentacles_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SMF t;
	t.Tem_num = 1;
	MainTest^ MT = gcnew MainTest();
	MT->Owner = this;
	MT->Show();
	this->Hide();
}
private: System::Void bowls_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SMF t;
	t.Tem_num = 2;
	MainTest^ MT = gcnew MainTest();
	MT->Owner = this;
	MT->Show();
	this->Hide();
}
private: System::Void major_arcana_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SMF t;
	t.Tem_num = 3;
	MainTest^ MT = gcnew MainTest();
	MT->Owner = this;
	MT->Show();
	this->Hide();
}
private: System::Void wands_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SMF t;
	t.Tem_num = 4;
	MainTest^ MT = gcnew MainTest();
	MT->Owner = this;
	MT->Show();
	this->Hide();
}
private: System::Void swords_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SMF t;
	t.Tem_num = 5;
	MainTest^ MT = gcnew MainTest();
	MT->Owner = this;
	MT->Show();
	this->Hide();
}
};
}
