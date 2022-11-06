// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program displays the sum of numbers from 0 until a users number


#include <iomanip>
#include <iostream>

int main() {
    // declare variables
    // the final output(sum of all the numbers up until the users number)
    int sumOfNumbers = 0;
    // initialize counter
    int counter = 0;
    // initialize the integer type of input
    int userNumInt;
    // users chosen number
    std::string userNumString;
    // get the users chosen positive number
    std::cout << "Enter a positive whole number: ";
    std::cin >> userNumString;

    try {
        // convert input from string to int
        userNumInt = std::stoi(userNumString);
        // use if statement to make sure user does not input 0
        if (userNumInt == 0 || userNumInt < 0) {
            std::cout << "Enter a POSITIVE number." << std::endl;
        } else {
            // use while loop to calculate the sum of all the numbers
            while (counter <= userNumInt) {
                // add to the sum of numbers
                sumOfNumbers = sumOfNumbers + counter;
                // increment by 1
                counter++;
            }
            // print the final sum
            std::cout << "The sum of numbers is: " << sumOfNumbers << "."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        // display if error is encountered - an invalid year
        std::cout << "Please enter a valid positive whole number." <<
        std::endl;
    }
    // thank the user - execute no matter what
    std::cout << "Thanks for playing." << std::endl;
}
