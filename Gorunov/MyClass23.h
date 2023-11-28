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
		MyClass23(int newSize) { // конструктор
			size = newSize;
			myVector.resize(size);
			srand(time(0)); // инициализация генератора случайных чисел
			for (int i = 0; i < size; i++) {
				myVector[i] = rand() % 101 - 50; // случайные числа из отрезка [-50; 50]
			}
		}

		int countPairs() { // метод для подсчета пар соседних равных элементов
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


