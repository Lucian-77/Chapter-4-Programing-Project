// Chapter 4 Programing Project.cpp : This file contains the 'Area Calculator' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    std::cout << "1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Quit\nEnter your choice (1-4): ";
    int choice;
    std::cin >> choice;
    while (choice < 1 || choice > 4) {
        std::cout << "Please enter a selection 1 - 4 ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> choice;
    }

    return 0;
}
