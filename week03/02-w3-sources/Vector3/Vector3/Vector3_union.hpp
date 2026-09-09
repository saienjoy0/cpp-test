//
// Created by 96581 on 2024/3/11.
//

#ifndef MAIN_CPP_VECTOR3_UNION_HPP
#define MAIN_CPP_VECTOR3_UNION_HPP

#include <string>
union Vector3_union {
    struct {
        float x, y, z;
    };
    float components[3];

    // 构造函数不能直接在union中定义
    // 成员函数也是如此
};
// 外部定义操作函数
void setVector3Union(Vector3_union& v, float x, float y, float z);
float getMagnitude(const Vector3_union& v);
std::string toString(const Vector3_union& v);
std::string toString(const Vector3_union& v, const std::string& fm);

#endif //MAIN_CPP_VECTOR3_UNION_HPP
