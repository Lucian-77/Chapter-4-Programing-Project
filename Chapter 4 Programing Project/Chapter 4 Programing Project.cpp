// Chapter 4 Programing Project.cpp : This file contains the 'Days' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "How much does the package weigh in Kilograms? ";
    float weight;
    std::cin >> weight;
    while (weight <= 0) {
        std::cout << "Please enter a weight between 1 and 20 kilos ";
    }
    std::cout << "How far do you wish to ship the package in miles? ";
    float distance;
    std::cin >> distance;

    return 0;
}
