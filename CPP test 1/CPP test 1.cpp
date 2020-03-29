// CPP test 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    // NUMERIC DATA TYPES

    int i{ 3 / 2 }; // This is acceptable but the result will be truncated
    std::cout << "3/2 as int:" << i << "\n"; // 1
    double j{ 3 / 2 }; // Similarly to above the assignment here is between two integer values even though the data type of j is double
    std::cout << "3/2 as double:" << j << "\n"; // 1
    double k{ 3.0 / 2 }; // The correct way to do this is by doing the operation with a double data type like 3.0
    std::cout << "3/2 as double:" << k << "\n"; // 1.5

    auto l{ 3 / 2 }; // Auto will tell you what's the data type in use. In this case both are integer.
    auto m{ 3.0 / 2 }; // But in this case 3.0 is double.
}