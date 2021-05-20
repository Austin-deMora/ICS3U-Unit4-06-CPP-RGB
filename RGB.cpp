// Copyright (c) 2021 Austin de Mora All rights reserved.
//
// Created by: Austin de Mora
// Created on: May 2021
// This program displays every RGB value using nested loops

#include <iostream>

int main() {
    // This function displays every RGB value using nested loops

    std::cout << "This program displays all RGB values from "
              << "(0,0,0) to (255,255,255)."
              << std::endl;

    // variable declarations
    int counterR;
    int counterG;
    int counterB;

    // process
    for (counterR = 0; counterR < 256; counterR++) {
        for (counterG = 0; counterG < 256; counterG++) {
            for (counterB = 0; counterB < 256; counterB++) {
                std::cout << "RGB (" << counterR << "," << counterG
                          << "," << counterB << ")" <<std::endl;
            }
        }
    }
}
