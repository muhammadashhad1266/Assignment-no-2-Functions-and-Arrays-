#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

double mean(double arr[], int n)
{
    double sum = 0; // Initialize sum
    for (int i = 0; i < n; i++)
        sum += arr[i]; // Summation

    return sum / n; // Return mean
}

double median(double arr[], int n)
{
    sort(arr, arr + n); // Sorting array
    double median = 0;  // Initialize median
    if (n % 2 == 0)     // If n is even
    {
        median = (arr[n / 2] + arr[n / 2 - 1]) / 2;
    }
    else // If n is odd
    {
        median = arr[n / 2];
    }
    return median; // Return median
}

double mode(double arr[], int n)
{
    double mode = 0;            // Initialize mode
    int freq = 0;               // Initialize frequency
    for (int i = 0; i < n; i++) // Element loop
    {
        int count = 0;              // Initialize count
        for (int j = 0; j < n; j++) // Comparison loop
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > freq) // If count is greater
        {
            freq = count;  // Update frequency
            mode = arr[i]; // Update mode
        }
    }
    return mode; // Return mode
}

int main()
{
    double arr[] = {7.2, 15.5, 3.1, 22.4, 15.5, 8.9, 12.0, 4.4, 15.5, 29.1, 7.2, 18.3, 11.6, 15.5, 5.8, 22.4, 10.0, 15.5, 6.3, 11.6, 25.0, 4.4, 15.5, 9.7, 13.2}; // Array
    int n = sizeof(arr) / sizeof(arr[0]);                                                                                                                         // Size of the array

    // Function calls and output
    cout << "Mean: " << mean(arr, n) << endl;
    cout << "Median: " << median(arr, n) << endl;
    cout << "Mode: " << mode(arr, n) << endl;

    system("pause");
    return 0;
}