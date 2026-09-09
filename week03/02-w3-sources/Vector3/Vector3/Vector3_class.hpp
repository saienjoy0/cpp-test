//
// Created by 96581 on 2024/3/11.
//

#ifndef MAIN_CPP_VECTOR3_CLASS_HPP
#define MAIN_CPP_VECTOR3_CLASS_HPP
#include <string>

class Vector3_class {
public:
    // 数据成员声明
    float x;
    float y;
    float z;
    // 构造函数
    Vector3_class(float x = 0.0f, float y = 0.0f, float z = 0.0f);

    // 成员函数声明
    float getMagnitude() const;
    void set(float x, float y, float z);
    std::string toString() const;
    std::string toString(const std::string& format) const;
};
#endif //MAIN_CPP_VECTOR3_CLASS_HPP
