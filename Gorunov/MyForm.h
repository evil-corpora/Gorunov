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
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ��22ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��23ToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ ��24ToolStripMenuItem;

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


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��23ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��24ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��22ToolStripMenuItem,
					this->��23ToolStripMenuItem, this->��24ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(861, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��22ToolStripMenuItem
			// 
			this->��22ToolStripMenuItem->Name = L"��22ToolStripMenuItem";
			this->��22ToolStripMenuItem->Size = System::Drawing::Size(52, 22);
			this->��22ToolStripMenuItem->Text = L"�� 2.2";
			// 
			// ��23ToolStripMenuItem
			// 
			this->��23ToolStripMenuItem->Name = L"��23ToolStripMenuItem";
			this->��23ToolStripMenuItem->Size = System::Drawing::Size(52, 22);
			this->��23ToolStripMenuItem->Text = L"�� 2.3";
			// 
			// ��24ToolStripMenuItem
			// 
			this->��24ToolStripMenuItem->Name = L"��24ToolStripMenuItem";
			this->��24ToolStripMenuItem->Size = System::Drawing::Size(52, 22);
			this->��24ToolStripMenuItem->Text = L"�� 2.4";
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
			this->groupBox1->Text = L"������ �� ������";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(135, 86);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"���������";
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
			this->groupBox2->Text = L"�������������� ������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 99);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"��������";
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
			this->textBox2->Text = L"AsE�����";
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
			this->groupBox3->Text = L"������ �� ��������� �������";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(115, 166);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"������";
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
			this->button5->Text = L"������";
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
			this->label4->Text = L"�����";
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
			this->button4->Text = L"������";
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
			this->button3->Text = L"�������";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 314);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"������ � �������� ������- ��. 22��1 � ���������� �� ��������";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//������ ����
		int N = Convert::ToInt32(textBox1->Text);
		MyClass23 a(N);
		for (int i = 0; i < N; i++) {
			//���� �� ����� �������� �������� Convert::ToString
			listBox1->Items->Add((a.getvec(i)));
		};
		listBox2->Items->Add(Convert::ToString(a.countPairs()));
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//������� �� ������ ������ (������ ����)
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
		// ������������� �������
		int nR = Convert::ToInt32(textBox4->Text),
			nC = Convert::ToInt32(textBox5->Text);
		dataGridView1->RowCount = nR; // ���������� ��������,
		dataGridView1->ColumnCount = nC; // ���������� ��������,
		// ��������:
		dataGridView1->ColumnHeadersVisible = false; // ��������� ��������,
		dataGridView1->RowHeadersVisible = false; // ��������� �����,
		// ������������� ������ �������� = 30:
		for (int i = 0; i < dataGridView1->ColumnCount; i++)
			dataGridView1->Columns[i]->Width = 30;
		lb24 b(nR, nC); // ���������� ���������� ������ B.
		// ���������� �������� ������� � ������� �������:
		for (int i = 0; i < nR; i++)
			for (int j = 0; j < nC; j++)
				dataGridView1->Rows[i]->Cells[j]->Value =
				b.Ar2[i][j].ToString();
		button4->Enabled = true; // ������ �������� ����� ��������.int lab24(int rows, int colms)
		button5->Enabled = true;
		button6->Enabled = true;
	}
		   int lab24(int nR, int nC, lb24 b) {
			   int minElem = 55555;
			   for (int i = 0; i < nR; i++) {
				   int curMin = 55555; // ���������� ��� �������� ����������� �������� � ������� ������
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
		//������ ���� 24
		int nRows = dataGridView1->RowCount, // ���������� �����
			nCols = dataGridView1->ColumnCount; // ���������� ��������
		lb24 a(nRows, nCols);
		for (int i = 0; i < nRows; i++)
		{
			for (int j = 0; j < nCols; j++)
			{
				// �������������� �������� ���� ��������� �� System::String � �����:
				a.Ar2[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		if (lab24(nRows, nCols, a) != 55555) {
			label4->Text = lab24(nRows, nCols, a).ToString();
		}
		else {
			label4->Text = "��� ������ �����";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//������
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			int R = dataGridView1->RowCount, // ���-�� ����� � �������,
				C = dataGridView1->ColumnCount; // ���-�� �������� � �������
			String^ filepath = saveFileDialog1->FileName;
			System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(filepath);
			file->WriteLine(Convert::ToString(R)); // ���-�� ����� � ����,
			file->WriteLine(Convert::ToString(C)); // ���-�� �������� � ����
			for (int i = 0; i < R; i++)
				for (int j = 0; j < C; j++)
					file->WriteLine(dataGridView1->Rows[i]->Cells[j]->Value);
			file->Close();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//������
		System::String^ line, ^ lineR, ^ lineC;
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
			// ���� ��� ����� �������:
		{// �������� ���� � �����:
			String^ filepath = openFileDialog1->FileName;
			// ������ ����� ��� ������:
			System::IO::StreamReader^ file = gcnew System::IO::StreamReader(filepath);
			try
			{ // �������� ��������� ������ �� �����:
				lineR = file->ReadLine(); int R = Convert::ToInt32(lineR); // ���-�� �����,
				lineC = file->ReadLine(); int C = Convert::ToInt32(lineC); // ���-�� ��������.
				if (R != dataGridView1->RowCount || C != dataGridView1->ColumnCount)
					// ������� ������� ����� ������������� � ���������� � ����� �� �����:
				{
					line = L"������: ������� ������� �.�. " + lineR + L" ����� � " + lineC + L" ����";
					MessageBox::Show(line); // �������� �� ������,
					return; // � ������� �� �����������.
				}
				// ������ ��������� ���-�� ����� �� ����� � �������� �������:
				for (int i = 0; i < R; i++)
					for (int j = 0; j < C; j++)
						dataGridView1->Rows[i]->Cells[j]->Value = file->ReadLine();
			}
			catch (System::IO::IOException^ e) // ��������� ����������,
			{
				MessageBox::Show(e->Message);
			}
			file->Close();
		}
	}
	};
#pragma endregion
}

