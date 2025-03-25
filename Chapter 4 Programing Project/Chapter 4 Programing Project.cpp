// Chapter 4 Programing Project.cpp : This file contains the 'Month Days' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a month: ";
    float month;
    std::cin >> month;
    while(month - floor(month) > 0 || month < 1 || month > 12) {
        std::cout << "Please enter an integer 1 - 12: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> month;
    }
    std::cout << "\nEnter a year: ";
    float year;
    std::cin >> year;
    while(year - floor(year ) > 0) {
        std::cout << "Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> year;
    }
    int intMonth = month;
    int intYear = year;
    switch (intMonth) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        std::cout << "\nThis month has 31 days\n";
        break;
    case 2: {
        if ((intYear % 400) == 0) {
            std::cout << "\nThis month has 29 days\n";
        }
        else {
            if ((intYear % 4) == 0) {
                std::cout << "\nThis month has 29 days\n";
            }
            else {
                std::cout << "\nThis month has 28 days\n";
            }
        }
    }
        break;
    case 4: case 6: case 9: case 11:
        std::cout << "\nThis month has 30 days\n";
        break;
    default: std::cout << "\nError\n";
    }

    return 0;
}
