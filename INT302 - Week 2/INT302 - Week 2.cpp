// INT302 - Week 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    int people = 0;

    cout << "Please enter the total number of people who will ride the elevator: ";
    cin >> people;

    int weight = 0;
    int totalweight = 0;

    for (int i = 0; i < people; i++)
    {
        cout << "Enter weight for person #" << (i + 1) << ": ";
        cin >> weight;
        totalweight += weight;
    }

    if (totalweight > 2500)
    {
        cout << "Unfortunately, the total weight of the people exceeds the allowable weight for the elevator.";
    }
    else
    {
        cout << "Congrats! You the elevator can accommodate the total weight of the people!";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
