//
// Created by 96581 on 2024/3/11.
//

#ifndef MAIN_CPP_VECTOR3_STRUCT_HPP
#define MAIN_CPP_VECTOR3_STRUCT_HPP

#include <string>
struct Vector3_struct {
    float x, y, z;

    Vector3_struct(float x = 0.0f, float y = 0.0f, float z = 0.0f) : x(x), y(y), z(z) {}

    float getMagnitude() const;
    void set(float x, float y, float z);
    std::string toString() const;
    std::string toString(const std::string& fm) const;
};


#endif //MAIN_CPP_VECTOR3_STRUCT_HPP
