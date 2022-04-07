// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Apr 2022
// This program is to determine a leap year

#include <iostream>
#include <string>

int main() {
    // this function is a leap year function
    std::string yearAsString;
    int yearAsInt;

    // input
    std::cout << "Please enter the year: ";
    std::cin >> yearAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        yearAsInt = std::stoi(yearAsString);
        if (yearAsInt % 4 == 0) {
            if (yearAsInt % 100 == 0) {
                if (yearAsInt % 400 == 0) {
                    std::cout << "It is a leap year.";
                } else {
                    std::cout << "It is not a leap year.";
                }
            } else {
                std::cout << "It is a leap year.";
            }
        } else {
            std::cout << "It is not a leap year.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer.";
        }
    std::cout << "\nDone." << std::endl;
}
