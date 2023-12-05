#pragma once
#include <vector>
#include <stdlib.h> // для функций srand и rand,
#include <ctime> // для функции time()
#include <iostream>
class lb24
{
public:
	int nRows, nCols; // nStr строк, nCol столбцов.
	int** Ar2; // динамический двумерный массив.
	// Конструктор по умолчанию:
	lb24(int n = 5, int m = 7)
	{
		nRows = n; nCols = m;
		// Выделение памяти для массива:
		Ar2 = new int* [nRows];
		for (int k = 0; k < nRows; k++) Ar2[k] = new int[nCols];
		// Установка начального случайного числа:
		srand(time(0));
		// Инициализация двумерного динамического массива:
		for (int i = 0; i < nRows; i++)
			for (int k = 0; k < nCols; k++)
			{
				int t = (rand() % 80);
				Ar2[i][k] = t - 40;
			}
	}
};