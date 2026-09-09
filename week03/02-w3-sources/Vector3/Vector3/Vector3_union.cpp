#include "Vector3_union.hpp"
#include <cmath>
#include <cstdio>
#include <cstring>

void setVector3Union(Vector3_union& v, float x, float y, float z) {
    v.x = x;
    v.y = y;
    v.z = z;
}

float getMagnitude(const Vector3_union& v) {
    return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

std::string toString(const Vector3_union& v) {
    char buffer[50];
    std::sprintf(buffer, "%.2f %.2f %.2f", v.x, v.y, v.z);
    return std::string(buffer);
}

std::string toString(const Vector3_union& v, const std::string& fm) {
    char buffer[50];
    snprintf(buffer, sizeof(buffer), fm.c_str(), v.x, v.y, v.z);
    return std::string(buffer);
}