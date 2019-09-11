//Quinton Negron
//This program takes a file and reads the content ,namely numbers,
//and reports a sum
#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    //Declare what our sums will be
    //newsum is 0 to start our computations
    //seperate sum so as to not confuse the program/Users/quintonnegron/Desktop/Personal Buisness:School/calc3.cpp
    int totalsum = 0;
    std::cin >> totalsum;
    char op;
    int val;
    {
        
        //Allows us to take inputs and put them into the sum
        while (cin >> op >> val)
        {
            //Allows me to switch between different signs present in the line of numbers
            switch(op)
            {
                    //we could do normal expressions like x + val to get our operations
                    //but this is a nice shortcut to use. Thanks c++.
                case '+':
                    totalsum += val;
                    break;
                case '-':
                    totalsum -= val;
                    break;
                case '^':
                	totalsum *= val;
                	break;
                case ';':
                    cout << totalsum << endl;
                    totalsum = val;
                default:
                    break;
            }
        }
        cout << totalsum << endl;
    }
    return 0;
}
