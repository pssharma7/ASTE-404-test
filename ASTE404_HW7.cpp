// ASTE404_HW7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "vec.h"

/**
 * @brief Main function to demonstrate vector operations.
 *
 * This program creates two 3D vectors and demonstrates subtraction
 * and dot product operations, outputting the results to the console.
 *
 * @param num_args The number of command-line arguments (unused).
 * @param args The array of command-line arguments (unused).
 * @return int 0 if the program completes successfully.
 */
int main(int num_args, char** args) {
    double3 a{ 0, 1, 2 };
    double3 b{ 0, 0, 1 };

    // Perform vector subtraction and dot product, then print results
    std::cout << a - b << std::endl;
    std::cout << dot(a, b) << std::endl;

    return 0;
}
