// CPP test 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "Rectangle.h"

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

    // STRINGS

    char myString[] = "Hello"; // This is an array of characters. Compiler will atuomatically infere the size of the array.
    char myStringWithSize[4] = "Bye"; // In this case the size is specified. Consider that C++ requires an extra space to store the null character \0, required for strings

    // An easier way to do this is to use the std namespace
    // using namespace std;
    // But we can skip above line by referencing it direclty with std::
    std::string thisIsAString = "My String"; // Not very useful if you're planning to use many string variables
    
    // STRUCTURES

    // Structures are user defined types that can store multiple data types
    struct coffeBean
    {
        string name = "";
        string country = "";
        int strength = 0;
    };

    // You can assgin values directly in braces
    coffeBean colombiaBean = { "Strata", "Colombia", 10 };

    // Or using dot notation:
    coffeBean newBean;
    newBean.name = "Flora";
    newBean.country = "M�xico";
    newBean.strength = 9;

    cout << "Coffe Bean " + colombiaBean.name + " is from " + colombiaBean.country << endl; // Coffe Bean Strata is from Colombia

    // UNION

    // Similar to structures, but can only store one value at a time.
    union numericUnion
    {
        int intVal;
        double doubleVal;
        long longVal;
    };

    numericUnion myUnion;
    myUnion.intVal = 3; // First value stored
    cout << "Integer value: " << myUnion.intVal << endl; // 3
    myUnion.doubleVal = 2.5; // Unions can only store 1 value at a time this will erase intVal
    cout << "Double value: " << myUnion.doubleVal << endl; // 2.5
    cout << "Integer value again: " << myUnion.intVal << endl; // 0; intVal has been already replaced by doubleVal

    // ENUM

    // A way to create simbolic constants.
    // The most common example is the days of the week.
    // Enums always start from zero but you can change that.

    enum WeekDay {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

    WeekDay payDay = Sunday;
    payDay = Friday;
    cout << "Pay day number" << payDay << endl; // 6; Enums internally store numbers not strings

    // FOR LOOP

    int base{ 2 },
        exponent{ 4 },
        result{ base };

    for (int cicle = 1; cicle < exponent; cicle++)
    {
        result *= base;
    }
    std::cout << base << " Raised to the power of " << exponent << " = " << result << endl;

    // Switch

    char letter = 'n';
    switch (letter) 
    {
    case ('Y'):
        std::cout << "You chose: Y" << endl;
        break;
    case ('y'):
        std::cout << "You chose: y" << endl;
        break;
    case ('N'):
        std::cout << "You chose: N" << endl;
        break;
    case ('n'):
        std::cout << "You chose: n" << endl;
        break;
    default:
        std::cout << "You didn't choose a valid option" << endl;
        break;
    }

    // OBJECTS

    // This class is defined in the Rectangle.h that is added to this file by the include statement #include "Rectangle.h"
    Rectangle smallRectangle{1,2}; // It's always important to initialize the variables. {1,2}
    smallRectangle.width = 3;
    smallRectangle.height = 1;    

    Rectangle largeRectangle;
    largeRectangle.width = 6;
    largeRectangle.height = 2;

    cout << "Small Rectangle height: " << smallRectangle.height << " width: " << smallRectangle.width << endl;
    cout << "Large Rectangle height: " << largeRectangle.height << " width: " << largeRectangle.width << endl;

    return 0;
}