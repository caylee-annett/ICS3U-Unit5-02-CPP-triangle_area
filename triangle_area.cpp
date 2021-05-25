// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program calculates the area of a triangle with a function

#include <iostream>
#include <string>

void CalculateArea(float height, float base) {
    // This function calculates the area
    float area;

    // Process
    area = (base * height) / 2;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The area is " << area << " cm²." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}


main() {
    // This function gets the height and base lengths
    std::string heightInputString;
    int heightInputInteger;
    std::string baseInputString;
    int baseInputInteger;

    // Input
    std::cout << "This program calculates the area of a triangle."
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> heightInputString;
    std::cout << "Enter the length of the base (cm): ";
    std::cin >> baseInputString;

    // Process
    while (true) {
        try {
            heightInputInteger = std::stoi(heightInputString);

            if (heightInputInteger > 0) {
                break;
            } else {
                std::cout << "Must be a positive integer. Enter the "
                    "height (cm): ";
                std::cin >> heightInputString;
            }
        } catch (std::invalid_argument) {
                std::cout << heightInputString << " is not a valid input. "
                    "Enter the height (cm): ";
                std::cin >> heightInputString;
        }
    }
    while (true) {
        try {
            baseInputInteger = std::stoi(baseInputString);

            if (baseInputInteger > 0) {
                break;
            } else {
                std::cout << "Must be a positive integer. Enter the "
                    "length of the base (cm): ";
                std::cin >> baseInputString;
            }
        } catch (std::invalid_argument) {
                std::cout << baseInputString << " is not a valid input. Enter "
                    "the length of the base (cm): ";
                std::cin >> baseInputString;
        }
    }

    // Call functions
    CalculateArea(heightInputInteger, baseInputInteger);
}
