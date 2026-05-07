#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

double stdev(double x[], int n){
    // Calculating mean
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += x[i];
    }
    double mean = sum / n;

    // Calculating standard deviation
    double sq_sum = 0;
    for (int i = 0; i < n; i++){
        sq_sum += (x[i] - mean) * (x[i] - mean);
    }
    return sqrt(sq_sum / n - 1);
}

int main (){
    double x[] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5}; // Array
    int n = sizeof(x) / sizeof(x[0]); // Size of the array

    cout << "Standard Deviation: " << stdev(x, n) << endl; // Function call and output

    system("pause");
    return 0;
}
