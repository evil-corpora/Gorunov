#pragma once
#include <iostream>


int lab24www(int rows, int cols, int* arr[4]) {
    /*const int rows = 3;
    const int cols = 4;
    int arr[rows][cols] = { {1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 2, 12} };
    */
    int minVal = arr[0][0]; // ��������� �������� ������������ ��������
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < cols - 1; j++) { // �� ������������� ������� �������
            if (arr[i][j] > arr[i][j - 1] && arr[i][j] < arr[i][j + 1]) {
                // ������� ������������� �������
                if (arr[i][j] < minVal) {
                    // ��������� �������� ������������ ��������
                    minVal = arr[i][j];
                }
            }
        }
    }
    return minVal;
}

