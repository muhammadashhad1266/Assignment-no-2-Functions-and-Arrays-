#include <iostream>
#include <stdlib.h>

using namespace std;

void input(int &spc, int &tab, int &charc, int &lns)
{
    string line = ""; // Variable for input

    cout << "To Input Text press Ctrl + Z to generate EOF character in next line and hit return." << endl;
    cout << "Enter text: ";
    while (getline(cin, line)) // Input loop (TRUE until Ctrl + Z is pressed)
    {
        // Counting spaces, tabs and characters
        for (char c : line) //  for char c in line
        {
            if (c == ' ')
                spc++;
            else if (c == '\t')
                tab++;
            charc++;
        }
        lns++; // Counting lines
    }
}

int main()
{
    int spc = 0, tab = 0, charc = 0, lns = 0; // Variable for results

    input(spc, tab, charc, lns); // Function call for input and results
   
    // Print results
    cout << "Spaces: " << spc << endl;
    cout << "Tabs: " << tab << endl;
    cout << "Characters: " << charc << endl;
    cout << "Lines: " << lns << endl;

    system("pause");
    return 0;
}
