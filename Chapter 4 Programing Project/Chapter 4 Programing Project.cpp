// Chapter 4 Programing Project.cpp : This file contains the 'Days' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a month ";
    float month;
    std::cin >> month;
    while(month - floor(month) > 0 || month < 1 || month > 12) {
        std::cout << "Please enter an integer 1 - 12 ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> month;
    }
    std::cout << "Enter a year ";
    float year;
    std::cin >> year;
    while(year - floor(year ) > 0) {
        std::cout << "Please enter an integer ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> year;
    }
    int intMonth = month;
    int intYear = year;
    switch (intMonth) {
    case 1: std::cout << "31 days";
        break;
    case 2: {
        if ((intYear % 400) == 0) {
            std::cout << "29 days";
        }
        else {
            if ((intYear % 4) == 0) {
                std::cout << "29 days";
            }
            else {
                std::cout << "28 days";
            }
        }
    }
        break;
    case 3: std::cout << "31 days";
        break;
    case 4: std::cout << "30 days";
        break;
    case 5: std::cout << "31 days";
        break;
    case 6: std::cout << "30 days";
        break;
    case 7: std::cout << "31 days";
        break;
    case 8: std::cout << "31 days";
        break;
    case 9: std::cout << "30 days";
        break;
    case 10: std::cout << "31 days";
        break;
    case 11: std::cout << "30 days";
        break;
    case 12: std::cout << "31 days";
        break;
    default: std::cout << "Error";
    }

    return 0;
}
