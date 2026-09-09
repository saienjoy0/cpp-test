#include "Vector3_struct.hpp"
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>

float Vector3_struct::getMagnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

void Vector3_struct::set(float xVal, float yVal, float zVal) {
    x = xVal;
    y = yVal;
    z = zVal;
}

std::string Vector3_struct::toString() const {
    char buffer[50];
    std::sprintf(buffer, "%.2f %.2f %.2f", x, y, z);
    return std::string(buffer);
}

std::string Vector3_struct::toString(const std::string& fm) const {
    char buffer[50];
    snprintf(buffer, sizeof(buffer), fm.c_str(), x, y, z);
    return std::string(buffer);
}