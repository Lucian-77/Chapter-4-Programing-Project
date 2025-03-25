// Chapter 4 Programing Project.cpp : This file contains the 'Area Calculator' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    std::cout << "1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Quit\n\nEnter your choice (1-4): ";
    int choice;
    std::cin >> choice;
    while (choice < 1 || choice > 4) {
        std::cout << "Please enter a selection 1 - 4: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> choice;
    }
    float area;
    switch (choice) {
    case 1:
        std::cout << "\nWhat is the radius of the circle? ";
        float radius;
        std::cin >> radius;
        while (radius < 0) {
            std::cout << "Please enter a valid radius:      ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> radius;
        }
        area = 3.14159 * radius * radius;
        std::cout << std::fixed << std::setprecision(2) << "\nThe area of the circle is " << area << " square units\n";
        break;
    case 2:
        std::cout << "\nWhat is the length of the rectangle? ";
        float length;
        std::cin >> length;
        while (length < 0) {
            std::cout << "Please enter a valid length:         ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> length;
        }
        std::cout << "\nWhat is the width of the rectangle?  ";
        float width;
        std::cin >> width;
        while (width < 0) {
            std::cout << "Please enter a valid width:          ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> width;
        }
        area = length * width;
        std::cout << std::fixed << std::setprecision(2) << "\nThe area of the rectangle is " << area << " square units\n";
        break;
    case 3: 
        std::cout << "\nWhat is the base of the triangle?    ";
        float base;
        std::cin >> base;
        while (base < 0) {
            std::cout << "Please enter a valid base:           ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> base;
        }
        std::cout << "\nWhat is the height of the rectangle? ";
        float height;
        std::cin >> height;
        while (height < 0) {
            std::cout << "Please enter a valid height:         ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> height;
        }
        area = 0.5 * base * height;
        std::cout << std::fixed << std::setprecision(2) << "\nThe area of the triangle is " << area << " square units\n";
        break;
    case 4: 
        return 0;
        break;
    }

    return 0;
}
