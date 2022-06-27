//
// Created by Askar Nurbekov on 6/24/22.
//

#ifndef LABS_FUNCTIONS_H
#define LABS_FUNCTIONS_H

#endif //LABS_FUNCTIONS_H

#include <vector>
#include <iostream>
#include <exception>
#include <cmath>
#include <iomanip>

double round_off(double x, int digits){
    return floor(x * pow(10.0,digits) + 0.5 )/ pow(10.0, digits);
}