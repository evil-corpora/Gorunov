#pragma once
#include<vector>
#include<ctime>
#include<string>


class MyClass23
{
private:
	int size;
	std::vector<int> myVector;
public:
		MyClass23(int newSize) { // �����������
			size = newSize;
			myVector.resize(size);
			srand(time(0)); // ������������� ���������� ��������� �����
			for (int i = 0; i < size; i++) {
				myVector[i] = rand() % 101 - 50; // ��������� ����� �� ������� [-50; 50]
			}
		}

		int countPairs() { // ����� ��� �������� ��� �������� ������ ���������
			int count = 0;
			for (int i = 0; i < size - 1; i++) {
				if (myVector[i] == myVector[i + 1]) {
					count++;
				}
			}
			return count;
		}
		int getvec(int i) {
			return myVector[i];
	}
};
	/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Нажатие на кнопку
		String^ string = safe_cast<String^> (this->TextBox1->Text);
		int count = 0;
		String^ gl = "А,Я,У,Ю,О,Ё,Е,Э,И,Ы,а,я,у,ю,о,ё,е,э,и,ы";
		for (int f = 0; f < string->Length; f++) {
			for (int i = 0; i < gl->Length; i++) {
				if (string[f] == gl[i]) {
					count++;
				}
			}
		}
		float kol = count;
		float del = string->Length;
		kol = kol / del;
		kol = kol * 100;
		string = System::Convert::ToString(kol);
		this->textBox2->Text = string;

	}*/

