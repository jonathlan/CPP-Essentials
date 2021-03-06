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

    // This class is defined in the Rectangle.h that is added to this file by the include statement #include "ectangle.h"
    Rectangle smallRectangle{1,2}; // It's always important to initialize the variables. {1,2}
    smallRectangle.resize(3, 2);

    Rectangle largeRectangle;
    largeRectangle.resize(6, 3);

    cout << "Small Rectangle height: " << smallRectangle.get_Heigth() << " width: " << smallRectangle.get_Width() << endl;
    cout << "Large Rectangle height: " << largeRectangle.get_Heigth() << " width: " << largeRectangle.get_Width() << endl;

    // ENCAPSULATION
    Rectangle uninitalized; // Variables will be initalized by the constructor {1,1}, but it's not recommended.
    Rectangle value{}; // Brakets tells the reader that we will use the default constructor{1,1}, this is better.
    Rectangle aggregate{ 1, 2 }; // Here we actually initialize the variables

    aggregate.resize(10, 5);
    int area_of_aggregate{ aggregate.area() };

    // CONSTANT OBJECTS
    // Similarly to variables those are objects that does not change
    // Think about constant objects sinze the very begininig it leads to better and more encapsulated code

    const Rectangle immutable_Rectangle{3, 6};
    // It will not work just to call any function, like:
    // int area{ immutable_Rectangle.area() };
    // We need to modify the method to be constant so that the compiler knows that it does not change the object.
    int area{immutable_Rectangle.area()};
    // Watch out because resize() method actually changes the object.
    // Get withd and height does not change the object. They're constant too
    int vWidth{ immutable_Rectangle.get_Width() };
    int vHeight{ immutable_Rectangle.get_Heigth() };

    return 0;
}