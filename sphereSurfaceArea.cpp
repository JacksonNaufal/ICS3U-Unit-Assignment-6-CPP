// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a sphere area function calculator

#include <iostream>
#include <cmath>

float SurfaceAreaSphereFunction(float radius) {
    float surfaceArea;

    surfaceArea = M_PI * pow(radius , 2) * 4;

    return surfaceArea;
}
main() {
    std::string radiusUserString;
    float radiusUser;
    float SphereCalculation;

        // input
    std::cout << "Enter your radius! (mm): ";
    std::cin >> radiusUserString;


    try {
        radiusUser = std::stoi(radiusUserString);
        SphereCalculation = SurfaceAreaSphereFunction(radiusUser);
        std::cout << "The surfaceArea is " << SphereCalculation  <<
        " mm²" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\n Invalid integer!" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
