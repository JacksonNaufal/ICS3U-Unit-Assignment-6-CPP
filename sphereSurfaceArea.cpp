// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder

#include <iostream>
#include <cmath>

float VolumeConversion(float radius) {
    float volume;

    volume = M_PI * (radius * radius) * 4;

    return volume;
}
main() {
    std::string radiusUserString;
    float radiusUser;
    float VolumeCalculation;

        // input
    std::cout << "Enter your radius! (mm): ";
    std::cin >> radiusUserString;


    try {
        radiusUser = std::stoi(radiusUserString);
        VolumeCalculation = VolumeConversion(radiusUser);
        std::cout << "The volume is " << VolumeCalculation  <<
        "mm³" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\n Invalid integer!" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
