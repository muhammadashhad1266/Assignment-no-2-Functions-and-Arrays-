#include <iostream>
#include <stdlib.h>

using namespace std;
// Function to find the minimum and maximum elements in an array
void getExtremes(float &min, float &max, float arr[], int n)
{
    min = arr[0]; // Initialize min and max
    max = arr[0]; 
    for (int i = 1; i < n; i++) // Loop through the array
    {
        if (arr[i] < min)  // Update min and max
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}
// Main function
int main()
{
    float min, max; // Variables to store the minimum and maximum data
    float arr[] = {0.2941, 0.8173, 0.0528, 0.6402, 0.1197, 0.9325, 0.3856, 0.5014, 0.7769, 0.2231}; // Array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    getExtremes(min, max, arr, n); // Function call

    // Print the minimum and maximum values
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    system("pause");
    return 0;
}
