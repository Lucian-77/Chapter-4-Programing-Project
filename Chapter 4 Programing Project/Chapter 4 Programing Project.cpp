// Chapter 4 Programing Project.cpp : This file contains the 'Shipping Charges' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    std::cout << std::left << std::setw(68) << "How much does the package weigh in Kilograms? (20 kilo max)" << std::right << "Kg:    ";
    float weight;
    std::cin >> weight;
    while (weight <= 0 || weight > 20) {
        if (weight <= 0) {
            std::cout << std::left << std::setw(68) << "Please enter a weight greater than 0 kilos " << std::right << "Kg:    ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> weight;
        }
        if (weight > 20) {
            std::cout << std::left << std::setw(68) << "Please enter a weight less than 20 kilos " << std::right << "Kg:    ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> weight;
        }
    }
    std::cout << std::left << std::setw(69) << "\nHow far do you wish to ship the package in miles? (3,000 mile max)" << std::right << "Miles: ";
    float distance;
    std::cin >> distance;
    while (distance < 10 || distance > 3000) {
        if (distance < 10) {
            std::cout << std::left << std::setw(68) << "Please enter a distance greater than 10 miles " << std::right << "Miles: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> distance;
        }
        if (distance > 3000) {
            std::cout << std::left << std::setw(68) << "Please enter a distance less than 3,000 miles " << std::right << "Miles: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> distance;
        }
    }
    int weight2 = ceil(weight);
    float cost = 1;
    switch (weight2) {
    case 1: case 2:
        cost = (distance / 500) * 1.10;
        break;
    case 3: case 4: case 5: case 6:
        cost = (distance / 500) * 2.20;
        break;
    case 7: case 8:case 9: case 10:
        cost = (distance / 500) * 3.70;
        break;
    case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
        cost = (distance / 500) * 4.80; 
        break;
    }
    std::cout << std::fixed << std::setprecision(2) << "\nTo ship " << weight << "Kg " << distance << " miles, it will cost $" << cost << '\n';

    return 0;
}
