#pragma once
#include "MyClass23.h"
#include "lab22.h"

namespace podolsky {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ лЅ22ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лЅ23ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->лЅ22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лЅ23ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->лЅ22ToolStripMenuItem,
					this->лЅ23ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1086, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// лЅ22ToolStripMenuItem
			// 
			this->лЅ22ToolStripMenuItem->Name = L"лЅ22ToolStripMenuItem";
			this->лЅ22ToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->лЅ22ToolStripMenuItem->Text = L"ЋЅ 2.2";
			// 
			// лЅ23ToolStripMenuItem
			// 
			this->лЅ23ToolStripMenuItem->Name = L"лЅ23ToolStripMenuItem";
			this->лЅ23ToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->лЅ23ToolStripMenuItem->Text = L"ЋЅ 2.3";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(364, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(341, 218);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"«адача на массив";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(203, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"¬ычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 133);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"N=";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(203, 30);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 84);
			this->listBox2->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(14, 30);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 84);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(13, 37);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(305, 217);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ѕреобразование строки";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(96, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"заменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(273, 26);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L" ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(273, 26);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"AsEпќрќк";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1086, 386);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"ќќяи—ѕ Ц  урсовой проект- гр. 22¬√1 Ц ѕодольский ян ѕавлович";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int N = Convert::ToInt32(textBox1->Text);
		MyClass23 a(N);
		for (int i=0; i < N; i++) {
			//≈сли не будет работать вставить Convert::ToString
			listBox1->Items->Add((a.getvec(i)));
		};
		listBox2->Items->Add(Convert::ToString(a.countPairs()));
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//нажатие на вторую кнопку (втора€ лаба)
	String^ string = safe_cast<String^> (this->textBox2->Text);
	std::string str2 = msclr::interop::marshal_as<std::string>(string);
	this->textBox3->Text = Convert::ToString(kol(str2));
}
};
#pragma endregion
}

