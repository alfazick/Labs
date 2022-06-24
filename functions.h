//
// Created by Askar Nurbekov on 6/24/22.
//

#ifndef LABS_FUNCTIONS_H
#define LABS_FUNCTIONS_H

#endif //LABS_FUNCTIONS_H

#include <vector>
#include <iostream>
#include <exception>

long sumVector(std::vector<int> arr) {
    long acc = 0;
    for(int i = 0; i < arr.size(); i++) {
        acc += arr.at(i);
    }
    return acc;
}

long sumVectorModN(std::vector<int> arr, int n) {
    if (n <= 0) throw std::logic_error("Modular arithmetic undefined for non-positive integers!");
    return sumVector(arr) % n;
}