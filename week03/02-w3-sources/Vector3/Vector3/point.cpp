// point.cpp

#include "Vector3_class.hpp"
#include "Vector3_struct.hpp"
#include "Vector3_union.hpp"
#include <iostream>

int main() {
    // 创建Vector3对象
    Vector3_class p_class(1.0f, 1.0f, 1.0f);
    // 输出对象
    std::cout << "Point p_class: " << p_class.toString() << std::endl;


    Vector3_struct p_struct(1.0f, 1.0f, 1.0f);
    std::cout << "Point p_struct: " << p_struct.toString() << std::endl;

    Vector3_union p_union;
    setVector3Union(p_union, 1.0f, 1.0f, 1.0f);
    std::cout << "Point p_union: " << toString(p_union) << std::endl;

    return 0;
}
