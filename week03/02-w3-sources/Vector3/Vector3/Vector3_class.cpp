// vector3.cpp

#include "Vector3_class.hpp"
#include <iomanip>
#include <iostream>
#include <valarray>

// 构造函数
Vector3_class::Vector3_class(float x, float y, float z) : x(x), y(y), z(z) {}

// 获取向量长度
float Vector3_class::getMagnitude() const {
    return sqrt(x * x + y * y + z * z);
}

// 设置向量分量
void Vector3_class::set(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// 返回格式化的字符串
std::string Vector3_class::toString() const {
    char buffer[50];
    std::sprintf(buffer, "%.2f %.2f %.2f", x, y, z);
    return std::string(buffer);
}

// 根据指定格式返回格式化字符串
std::string Vector3_class::toString(const std::string& format) const {
    char buffer[50];
    snprintf(buffer, sizeof(buffer), format.c_str(), x, y, z);
    return std::string(buffer);
}