// class activity -12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Finding factorial of a number

#include <iostream>
using namespace std;
int main()
{
    int factorial=1;
    int n;
    cout << "Enter a postive number: ";
    cin >> n;
    if (n < 0) {
        cout << "This is not a postive number" << endl;
    } 
    else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        cout << "The factorial of " << n << " is " << factorial << endl;
    }
    return 0;
}

