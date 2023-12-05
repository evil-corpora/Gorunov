#pragma once
#include <vector>
#include <stdlib.h> // ��� ������� srand � rand,
#include <ctime> // ��� ������� time()
#include <iostream>
class lb24
{
public:
	int nRows, nCols; // nStr �����, nCol ��������.
	int** Ar2; // ������������ ��������� ������.
	// ����������� �� ���������:
	lb24(int n = 5, int m = 7)
	{
		nRows = n; nCols = m;
		// ��������� ������ ��� �������:
		Ar2 = new int* [nRows];
		for (int k = 0; k < nRows; k++) Ar2[k] = new int[nCols];
		// ��������� ���������� ���������� �����:
		srand(time(0));
		// ������������� ���������� ������������� �������:
		for (int i = 0; i < nRows; i++)
			for (int k = 0; k < nCols; k++)
			{
				int t = (rand() % 80);
				Ar2[i][k] = t - 40;
			}
	}
};