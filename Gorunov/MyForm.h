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
	private: System::Windows::Forms::ToolStripMenuItem^ лБ25ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лБ27ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Timer^ timer2;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->лБ22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лБ23ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лБ24ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лБ25ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лБ27ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->лБ22ToolStripMenuItem,
					this->лБ23ToolStripMenuItem, this->лБ24ToolStripMenuItem, this->лБ25ToolStripMenuItem, this->лToolStripMenuItem, this->лБ27ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1871, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// лБ22ToolStripMenuItem
			// 
			this->лБ22ToolStripMenuItem->Name = L"лБ22ToolStripMenuItem";
			this->лБ22ToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->лБ22ToolStripMenuItem->Text = L"ЛБ 2.2";
			// 
			// лБ23ToolStripMenuItem
			// 
			this->лБ23ToolStripMenuItem->Name = L"лБ23ToolStripMenuItem";
			this->лБ23ToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->лБ23ToolStripMenuItem->Text = L"ЛБ 2.3";
			// 
			// лБ24ToolStripMenuItem
			// 
			this->лБ24ToolStripMenuItem->Name = L"лБ24ToolStripMenuItem";
			this->лБ24ToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->лБ24ToolStripMenuItem->Text = L"ЛБ 2.4";
			// 
			// лБ25ToolStripMenuItem
			// 
			this->лБ25ToolStripMenuItem->Name = L"лБ25ToolStripMenuItem";
			this->лБ25ToolStripMenuItem->Size = System::Drawing::Size(83, 29);
			this->лБ25ToolStripMenuItem->Text = L"Л.Б 2.5";
			// 
			// лToolStripMenuItem
			// 
			this->лToolStripMenuItem->Name = L"лToolStripMenuItem";
			this->лToolStripMenuItem->Size = System::Drawing::Size(83, 29);
			this->лToolStripMenuItem->Text = L"Л.Б 2.6";
			this->лToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лToolStripMenuItem_Click);
			// 
			// лБ27ToolStripMenuItem
			// 
			this->лБ27ToolStripMenuItem->Name = L"лБ27ToolStripMenuItem";
			this->лБ27ToolStripMenuItem->Size = System::Drawing::Size(83, 29);
			this->лБ27ToolStripMenuItem->Text = L"Л.Б 2.7";
			this->лБ27ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::лБ27ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(364, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 218);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задача на массив";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 135);
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
			this->listBox2->Location = System::Drawing::Point(202, 31);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 84);
			this->listBox2->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(14, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 84);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(14, 37);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(304, 217);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Преобразование строки";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(96, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"заменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(272, 26);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L" ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(8, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(272, 26);
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
			this->groupBox3->Location = System::Drawing::Point(753, 37);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(378, 315);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Задача на двумерный массивв";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(172, 255);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 35);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Чтение";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(172, 209);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 35);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Запись";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(208, 71);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"3";
			this->textBox5->UseWaitCursor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(208, 38);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"5";
			this->textBox4->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(172, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Ответ";
			this->label4->UseWaitCursor = true;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(172, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Решить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(172, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"инициал";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(172, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"C=";
			this->label3->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(172, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"R=";
			this->label2->UseWaitCursor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(160, 151);
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
			this->groupBox4->Location = System::Drawing::Point(21, 369);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox4->Size = System::Drawing::Size(1110, 437);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Построение графиков";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(546, 397);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(148, 26);
			this->textBox8->TabIndex = 5;
			this->textBox8->Text = L"2";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(366, 394);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 35);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Построить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(183, 397);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(148, 26);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"6,28";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(10, 397);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 26);
			this->textBox6->TabIndex = 2;
			this->textBox6->Text = L"-6,28";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// chart2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(546, 29);
			this->chart2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Polar;
			series1->Legend = L"Legend1";
			series1->Name = L" = 2a(1−cos)";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(555, 351);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart2_Click);
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(9, 29);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"y = sin(ln x)";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(513, 351);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->dataGridView2);
			this->groupBox5->Location = System::Drawing::Point(1163, 50);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(422, 231);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Случайное блуждание с отражающими экранами";
			this->groupBox5->Visible = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(278, 136);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 37);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Стоп";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(180, 136);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 37);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Старт";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 20);
			this->label5->TabIndex = 2;
			this->label5->Text = L"p=";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(42, 136);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"0,4";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(22, 40);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(382, 79);
			this->dataGridView2->TabIndex = 0;
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1871, 898);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
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
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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
		   long double x;
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//Построение графика
		chart1->Series[0]->Points->Clear(); // очистка диаграммы,
		chart2->Series[0]->Points->Clear();
		x = x.Parse(textBox6->Text); // x = A.
		a = a.Parse(textBox7->Text);
		timer1->Enabled = true;
	}
		   double a;
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
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void лToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   int NC;
	private: System::Void лБ27ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Нажатие на кнопку 2.7
		groupBox1->Visible = false;
		groupBox2->Visible = false;
		groupBox3->Visible = false;
		groupBox4->Visible = false;
		groupBox5->Visible = true;
		// Изменяем свойства dataGridView2:
		dataGridView2->ColumnCount = 78;
		dataGridView2->RowCount = 1;
		// Сокрытие заголовков строк и столбцов:
		dataGridView2->ColumnHeadersVisible = false; // столбцов,
		dataGridView2->RowHeadersVisible = false; // строк,
		// Устанавка ширины столбцов = 7:
		for (int c = 0; c < dataGridView2->ColumnCount; c++)
			dataGridView2->Columns[c]->Width = 7;
		// Начальное положение частицы:
		NC = dataGridView2->ColumnCount / 2; // координата,
		dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::Red; // цвет
		// ячейки.
		srand(time(0));
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		//Лабораторная 27
		timer2->Enabled = true; // включили timer2
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		//Лабораторная 27 кнопка стоп
		timer2->Enabled = false; // выключили timer2.
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Таймер 27 лаба
		double p = Convert::ToDouble(textBox8->Text); // вероятность смещения влево,
		double t = (rand() % 100 * 1.0) / 100; // получили очередное случайное число,
		if (t <= p && NC > 0)
		{// выпало смещение влево и частица не у левого конца отрезка:
		// в ячейке, где частица меняем цвет на белый:
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::White;
			--NC; // смещение влево
			// в ячейке, в которую сместилась частица меняем цвет на красный:
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::Red;
		}

		if (t <= p && NC == 0)
		{// выпало смещение влево и частица у левого конца отрезка:
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::White;
			++NC; // отражение частицы от левого экрана вправо,
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::Red;
		}
		if (t > p && NC < dataGridView2->ColumnCount - 1)
		{// выпало смещение вправо и частица не у правого конца отрезка:
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::White;
			++NC; // смещение вправо,
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::Red;
		}
		if (t > p && NC == dataGridView2->ColumnCount - 1)
		{// выпало смещение вправо и частица у правого конца отрезка:
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::White;
			--NC; // отражение частицы от правого экрана влево.
			dataGridView2->Rows[0]->Cells[NC]->Style->BackColor = Color::Red;
		}
	}

	private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
#pragma endregion
}

