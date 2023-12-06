#pragma once
#include "MyClass23.h"
#include "lab22.h"
#include "lb24.h"

namespace podolsky {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ лБ22ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лБ23ToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ лБ24ToolStripMenuItem;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Timer^ timer1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->лБ22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лБ23ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лБ24ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->лБ22ToolStripMenuItem,
					this->лБ23ToolStripMenuItem, this->лБ24ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(861, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// лБ22ToolStripMenuItem
			// 
			this->лБ22ToolStripMenuItem->Name = L"лБ22ToolStripMenuItem";
			this->лБ22ToolStripMenuItem->Size = System::Drawing::Size(52, 22);
			this->лБ22ToolStripMenuItem->Text = L"ЛБ 2.2";
			// 
			// лБ23ToolStripMenuItem
			// 
			this->лБ23ToolStripMenuItem->Name = L"лБ23ToolStripMenuItem";
			this->лБ23ToolStripMenuItem->Size = System::Drawing::Size(52, 22);
			this->лБ23ToolStripMenuItem->Text = L"ЛБ 2.3";
			// 
			// лБ24ToolStripMenuItem
			// 
			this->лБ24ToolStripMenuItem->Name = L"лБ24ToolStripMenuItem";
			this->лБ24ToolStripMenuItem->Size = System::Drawing::Size(52, 22);
			this->лБ24ToolStripMenuItem->Text = L"ЛБ 2.4";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(243, 23);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(227, 142);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задача на массив";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(135, 86);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 86);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 88);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"N=";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(135, 20);
			this->listBox2->Margin = System::Windows::Forms::Padding(2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(81, 56);
			this->listBox2->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(9, 20);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(81, 56);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(9, 24);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(203, 141);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Преобразование строки";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 99);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"заменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(4, 69);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 20);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L" ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(5, 31);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"AsEпОрОк";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Location = System::Drawing::Point(502, 24);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(252, 205);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Задача на двумерный массивв";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(115, 166);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Чтение";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(115, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Запись";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(139, 46);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(68, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"3";
			this->textBox5->UseWaitCursor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(139, 25);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"5";
			this->textBox4->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(115, 119);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Ответ";
			this->label4->UseWaitCursor = true;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(115, 94);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Решить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(115, 67);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 25);
			this->button3->TabIndex = 3;
			this->button3->Text = L"инициал";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(115, 46);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"C=";
			this->label3->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 31);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"R=";
			this->label2->UseWaitCursor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(4, 19);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(107, 98);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->chart2);
			this->groupBox4->Controls->Add(this->chart1);
			this->groupBox4->Location = System::Drawing::Point(14, 240);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(740, 284);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Построение графиков";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(364, 258);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 5;
			this->textBox8->Text = L"2";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(244, 256);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Построить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(122, 258);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"10";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(7, 258);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 2;
			this->textBox6->Text = L"0";
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(364, 19);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L" = 2a(1−cos)";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(370, 228);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(6, 19);
			this->chart1->Name = L"chart1";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"y = sin(ln x)";
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(342, 228);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 584);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"ООЯиСП – Курсовой проект- гр. 22ВГ1 – Подольский Ян Павлович";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Третья лаба
		int N = Convert::ToInt32(textBox1->Text);
		MyClass23 a(N);
		for (int i = 0; i < N; i++) {
			//Если не будет работать вставить Convert::ToString
			listBox1->Items->Add((a.getvec(i)));
		};
		listBox2->Items->Add(Convert::ToString(a.countPairs()));
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//нажатие на вторую кнопку (вторая лаба)
		String^ string = safe_cast<String^> (this->textBox2->Text);
		std::string str2 = msclr::interop::marshal_as<std::string>(string);
		this->textBox3->Text = Convert::ToString(kol(str2));
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// button3
		// Инициализация таблицы
		int nR = Convert::ToInt32(textBox4->Text),
			nC = Convert::ToInt32(textBox5->Text);
		dataGridView1->RowCount = nR; // количество столбцов,
		dataGridView1->ColumnCount = nC; // количество столбцов,
		// скрываем:
		dataGridView1->ColumnHeadersVisible = false; // заголовки столбцов,
		dataGridView1->RowHeadersVisible = false; // заголовки строк,
		// устанавливаем ширину столбцов = 30:
		for (int i = 0; i < dataGridView1->ColumnCount; i++)
			dataGridView1->Columns[i]->Width = 30;
		lb24 b(nR, nC); // объявление экземпляра класса B.
		// Отображаем элементы массива в ячейках таблицы:
		for (int i = 0; i < nR; i++)
			for (int j = 0; j < nC; j++)
				dataGridView1->Rows[i]->Cells[j]->Value =
				b.Ar2[i][j].ToString();
		button4->Enabled = true; // кнопка «решить» стала доступна.int lab24(int rows, int colms)
		button5->Enabled = true;
		button6->Enabled = true;
	}
		   int lab24(int nR, int nC, lb24 b) {
			   int minElem = 55555;
			   for (int i = 0; i < nR; i++) {
				   int curMin = 55555; // Переменная для хранения наименьшего элемента в текущей строке
				   for (int j = 1; j < nC - 1; j++) {
					   if (b.Ar2[i][j] > b.Ar2[i][j - 1] && b.Ar2[i][j] < b.Ar2[i][j + 1]) {
						   if (b.Ar2[i][j] < curMin) {
							   curMin = b.Ar2[i][j];
						   }
					   }
				   }
				   if (curMin < minElem || minElem == 0) {
					   minElem = curMin;
				   }
			   }
			   return minElem;
		   }
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//писать сюда 24
		int nRows = dataGridView1->RowCount, // количество строк
			nCols = dataGridView1->ColumnCount; // количество столбцов
		lb24 a(nRows, nCols);
		for (int i = 0; i < nRows; i++)
		{
			for (int j = 0; j < nCols; j++)
			{
				// преобразование значения типа указатель на System::String в целое:
				a.Ar2[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		if (lab24(nRows, nCols, a) != 55555) {
			label4->Text = lab24(nRows, nCols, a).ToString();
		}
		else {
			label4->Text = "Нет такого числа";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//Запись
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			int R = dataGridView1->RowCount, // кол-во строк в таблице,
				C = dataGridView1->ColumnCount; // кол-во столбцов в таблице
			String^ filepath = saveFileDialog1->FileName;
			System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(filepath);
			file->WriteLine(Convert::ToString(R)); // кол-во строк в файл,
			file->WriteLine(Convert::ToString(C)); // кол-во столбцов в файл
			for (int i = 0; i < R; i++)
				for (int j = 0; j < C; j++)
					file->WriteLine(dataGridView1->Rows[i]->Cells[j]->Value);
			file->Close();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//Чтение
		System::String^ line, ^ lineR, ^ lineC;
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
			// если имя файла выбрано:
		{// получаем путь к файлу:
			String^ filepath = openFileDialog1->FileName;
			// создаём поток для чтения:
			System::IO::StreamReader^ file = gcnew System::IO::StreamReader(filepath);
			try
			{ // пытаемся прочитать строку из файла:
				lineR = file->ReadLine(); int R = Convert::ToInt32(lineR); // кол-во строк,
				lineC = file->ReadLine(); int C = Convert::ToInt32(lineC); // кол-во столбцов.
				if (R != dataGridView1->RowCount || C != dataGridView1->ColumnCount)
					// размеры таблицы после инициализации и записанные в файле не равны:
				{
					line = L"Ошибка: размеры таблицы д.б. " + lineR + L" строк и " + lineC + L" стлб";
					MessageBox::Show(line); // сообщаем об ошибке,
					return; // и выходим из обработчика.
				}
				// читаем известное кол-во строк из файла в элементы таблицы:
				for (int i = 0; i < R; i++)
					for (int j = 0; j < C; j++)
						dataGridView1->Rows[i]->Cells[j]->Value = file->ReadLine();
			}
			catch (System::IO::IOException^ e) // обработка исключения,
			{
				MessageBox::Show(e->Message);
			}
			file->Close();
		}
	}
	private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
		   double x, a;
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//Построение графика
		chart1->Series[0]->Points->Clear(); // очистка диаграммы,
		chart2->Series[0]->Points->Clear();
		x = x.Parse(textBox6->Text); // x = A.
		a = a.Parse(textBox7->Text);
		timer1->Enabled = true;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (x <= x.Parse(textBox8->Text)) {// При построении точек аргументы округляем до 3 знаков после запятой.
			// строим точку (x, f1(x)):
			chart1->Series[0]->Points->AddXY(Math::Round(x, 3), sin(log(x)));
			// строим точку (x, f2(x)):
			double angle = (10 * Math::Round(x, 3) * Math::PI) / 180.0;
			chart2->Series[0]->Points->AddXY(10 * x, 2 * a * (1 - cos(angle)));
			x += 0.1; // увеличили аргумент.
		}
		else // x > B,
			timer1->Enabled = false; // выключили таймер
	}
	};
#pragma endregion
}

