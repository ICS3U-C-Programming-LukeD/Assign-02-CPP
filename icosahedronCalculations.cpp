// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March 5, 2025
// Calculates volume and surface area for icosahedron using the edge length

#include <cmath>
// adds math library
#include <iomanip>
// adds iomanip library for rounding
#include <iostream>
// adds iostream library
#include <string>
// adds string library
int main() {
    float edgeLength;
    // creates a variable to store edge length input
    int roundTo;
    // creates a variable to store which decimal to round to
    std::string units;
    // creates a variable to store the users units
    std::cout <<
    "Welcome to Luke's icosahedron surface area and volume calculator!"
    << std::endl;
    // introduces program
    std::cout << "Please enter unit of measurement: ";
    // ask for units to use
    std::cin >> units;
    // takes input and stores it in units variable
    std::cout << "Please enter edge length: ";
    // prompts user to give edge length in centimeters
    std::cin >> edgeLength;
    // stores user input in edgeLength variable
    std::cout << "Enter number to round to (int): ";
    // prompts user to give which decimal to round to
    std::cin >> roundTo;
    // stores user input inside the roundTo variable
    float surfaceArea = 5 * (sqrt(3) * pow(edgeLength, 2));
    // calculates surface area and stores it in a variable
    float volume = (5 * (3 + sqrt(5)) / 12) * pow(edgeLength, 3);
    // calculates volume and stores it in a variable
    std::cout << std::fixed << std::setprecision(roundTo);
    // rounds surface area to users decimal places
    std::cout << "" << std::endl;
    std::cout <<
    "The surface area is: "
    << (surfaceArea) << (units) + "^2" << std::endl;
    // displays surface area with proper units measurement
    std::cout << "The volume is: " << (volume) << (units) + "^3\n" << std::endl;
    // displays the volume with proper units of measurement
    std::cout << "Thank you for using this calculator program!\n\n";
    // outro line
}
