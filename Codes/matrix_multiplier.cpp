#include <iostream>
#include <stdlib.h>

using namespace std;

// Function to get values
void GetValue(int (&arrA)[3][3], int (&arrB)[3][3])
{
    // First matrix
    for (int i = 0; i < 3; i++) // Row loop
    {
        for (int j = 0; j < 3; j++) // Column loop
        {
            cout << "Enter value for first arr[" << i << "][" << j << "]: ";
            cin >> arrA[i][j]; // User enters value
        }
    }

    // Second matrix
    for (int i = 0; i < 3; i++) // Row loop
    {
        for (int j = 0; j < 3; j++) // Column loop
        {
            cout << "Enter value for second arr[" << i << "][" << j << "]: ";
            cin >> arrB[i][j]; // User enters value
        }
    }
}

// Function to compute AxA
void ComputeAxA(int arrA[][3], int arrB[][3], int (&res)[3][3])
{
    for (int i = 0; i < 3; i++) // Row loop
    {
        for (int j = 0; j < 3; j++) // Column loop
        {
            for (int k = 0; k < 3; k++) // Multiplication loop
            {
                res[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }
}
// Function to print the array
void PrintArray(int res[][3])
{
    for (int i = 0; i < 3; i++) // Row loop
    {
        for (int j = 0; j < 3; j++) // Column loop
        {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arrA[3][3], arrB[3][3], res[3][3] = {0}; // 3x3 2D arrays

    GetValue(arrA, arrB);        // Get values
    ComputeAxA(arrA, arrB, res); // Compute
    PrintArray(res);             // Print

    system("pause");
    return 0;
}
