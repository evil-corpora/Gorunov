#pragma once
#include<vector>
#include<ctime>
#include<string>


class MyClass23
{
private:
	int size;
	std::vector<std::string> myVector;
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
		std::string getvec(int i) {
			return myVector[i];
	}
};

