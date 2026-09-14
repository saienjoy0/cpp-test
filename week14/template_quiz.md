# Week14 模板（Template）复习题

## 重点

- 泛型编程（Generic Programming）
- 函数模板（Function Template）
- 类模板（Class Template）
- 模板实例化（Template Instantiation）
- 显式特化（Explicit Specialization）
- 非类型模板参数（Non-type Template Parameter）

## 核心知识

### 1. 泛型编程

模板允许代码独立于具体数据类型，用同一份代码处理不同类型数据。

### 2. 函数模板

```cpp
template <typename T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
```

### 3. 模板多态

模板属于编译时多态（compile-time polymorphism）。

### 4. 类模板

```cpp
template <typename T>
class Box {
public:
    T value;
};

Box<int> b;
```

### 5. 非类型模板参数

```cpp
template <typename T, int N>
class Array {
    T data[N];
};
```

其中 N 是编译期常量。
