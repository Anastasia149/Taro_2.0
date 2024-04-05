#pragma once
#include"FisRasclad.h"
#include"VirtualRasclad.h"
#include"TestForm.h"

namespace Taro20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TaroForm
	/// </summary>
	public ref class TaroForm : public System::Windows::Forms::Form
	{
	public:
		TaroForm(void)
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
		~TaroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ FisRascl;
	private: System::Windows::Forms::Button^ Test;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::Button^ VistRascl;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TaroForm::typeid));
			this->FisRascl = (gcnew System::Windows::Forms::Button());
			this->Test = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->VistRascl = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// FisRascl
			// 
			this->FisRascl->BackColor = System::Drawing::Color::Transparent;
			this->FisRascl->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FisRascl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FisRascl->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FisRascl->Location = System::Drawing::Point(125, 155);
			this->FisRascl->Name = L"FisRascl";
			this->FisRascl->Size = System::Drawing::Size(219, 88);
			this->FisRascl->TabIndex = 11;
			this->FisRascl->Text = L"Физический расклад";
			this->FisRascl->UseVisualStyleBackColor = false;
			this->FisRascl->Click += gcnew System::EventHandler(this, &TaroForm::FisRascl_Click);
			// 
			// Test
			// 
			this->Test->BackColor = System::Drawing::Color::Transparent;
			this->Test->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Test->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Test->ForeColor = System::Drawing::SystemColors::Control;
			this->Test->Location = System::Drawing::Point(295, 341);
			this->Test->Name = L"Test";
			this->Test->Size = System::Drawing::Size(219, 88);
			this->Test->TabIndex = 12;
			this->Test->Text = L"Тест";
			this->Test->UseVisualStyleBackColor = false;
			this->Test->Click += gcnew System::EventHandler(this, &TaroForm::Test_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помощьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(813, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// VistRascl
			// 
			this->VistRascl->BackColor = System::Drawing::Color::Transparent;
			this->VistRascl->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->VistRascl->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->VistRascl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VistRascl->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->VistRascl->Location = System::Drawing::Point(491, 155);
			this->VistRascl->Name = L"VistRascl";
			this->VistRascl->Size = System::Drawing::Size(219, 88);
			this->VistRascl->TabIndex = 14;
			this->VistRascl->Text = L"Виртуальный расклад";
			this->VistRascl->UseVisualStyleBackColor = false;
			this->VistRascl->Click += gcnew System::EventHandler(this, &TaroForm::VistRascl_Click);
			// 
			// TaroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(813, 554);
			this->Controls->Add(this->VistRascl);
			this->Controls->Add(this->Test);
			this->Controls->Add(this->FisRascl);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TaroForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaroForm";
			this->Load += gcnew System::EventHandler(this, &TaroForm::TaroForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FisRascl_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		FisRasclad^ FR = gcnew FisRasclad();
		FR->Owner = this;
		FR->Show();
		this->Hide();
	}
private: System::Void VistRascl_Click(System::Object^ sender, System::EventArgs^ e) 
{
	VirtualRasclad^ VR = gcnew VirtualRasclad();
	VR->Owner = this;
	VR->Show();
	this->Hide();
}
private: System::Void Test_Click(System::Object^ sender, System::EventArgs^ e) 
{
	TestForm^ Test = gcnew TestForm();
	Test->Owner = this;
	Test->Show();
	this->Hide();
}
private: System::Void TaroForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
