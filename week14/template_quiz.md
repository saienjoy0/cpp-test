# Week14 模板（Template）课后选择题

## Question 1 - 单选题

关于泛型编程，下列说法正确的是哪一项？

A.

泛型编程强调代码独立于具体数据类型，可以用相同代码处理不同类型的数据

B.

泛型编程只能用于处理 int 类型数据

C.

泛型编程只能通过继承和虚函数实现

D.

泛型编程要求程序运行时才生成所有代码

---

Standard Answer: A

## Question 2 - 单选题

在 C++ 中，模板体现的多态性通常属于哪一种？

A.

运行时多态

B.

编译时多态

C.

动态绑定多态

D.

只能通过虚函数实现的多态

---

Standard Answer: B

## Question 3 - 单选题

关于模板实例化，下列说法正确的是哪一项？

A.

模板实例化是指编译器根据模板实参生成具体函数或具体类代码的过程

B.

模板实例化只能由程序员手动完成，编译器不会自动完成

C.

模板实例化发生在程序运行过程中

D.

模板实例化只适用于类模板，不适用于函数模板

---

Standard Answer: A

## Question 4 - 单选题

下列哪个函数模板的定义格式是正确的？

A.

```cpp
template <typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
```

B.

```cpp
template T
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
```

C.

```cpp
typename <T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
```

D.

```cpp
template <>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
```

---

Standard Answer: A

## Question 5 - 单选题

对于如下函数模板：

```cpp
template <typename T>
void printValue(T value) {
    cout << value << endl;
}
```

调用 printValue(10); 时，模板参数 T 会被推断为什么类型？

A.

int

B.

double

C.

char

D.

string

---

Standard Answer: A

## Question 6 - 单选题

对于如下函数模板：

```cpp
template <typename T>
void f(T a, T b) {
    cout << a << " " << b << endl;
}
```

若只有这个函数模板存在，下列哪个调用能够正常通过模板实参推断？

A.

`f(3, 5);`

B.

`f(3, 5.5);`

C.

`f(3.2, 'a');`

D.

`f("hello", 3);`

---

Standard Answer: A

## Question 7 - 单选题

阅读下面程序片段：

```cpp
template <typename T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int x = 3, y = 5;
Swap(x, y);
cout << x << " " << y;
```

程序输出结果是什么？

A.

3 5

B.

5 3

C.

3 3

D.

5 5

---

Standard Answer: B

## Question 8 - 单选题

关于函数模板调用时的隐式类型转换，下列说法正确的是哪一项？

A.

函数模板实参推断时，一般不会为了推断模板参数而进行普通隐式类型转换

B.

函数模板总是优先把所有实参转换为 double

C.

函数模板只能接受完全相同的变量名

D.

函数模板不能处理基本数据类型

---

Standard Answer: A

## Question 9 - 单选题

下列哪个写法表示对函数模板进行 int 类型的显式特化？

A.

```cpp
template <>
void Swap<int>(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
```

B.

```cpp
template <typename int>
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
```

C.

```cpp
template int
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
```

D.

```cpp
special template
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
```

---

Standard Answer: A

## Question 10 - 单选题

阅读下面程序片段：

```cpp
template <typename T>
void fun(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <>
void fun<int>(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    a += 10;
    b += 10;
}

int x = 1, y = 2;
fun(x, y);
cout << x << " " << y;
```

程序输出结果是什么？

A.

2 1

B.

12 11

C.

11 12

D.

1 2

---

Standard Answer: B

## Question 11 - 单选题

下面哪个选项体现了函数模板重载？

A.

```cpp
template <typename T>
void print(T a, T b);

template <typename T>
void print(T a);
```

B.

```cpp
int x;
double y;
```

C.

```cpp
class A {};
class B {};
```

D.

```cpp
int a[10];
```

---

Standard Answer: A

## Question 12 - 单选题

阅读下面程序片段：

```cpp
template <typename T>
void demoPrint(const T a, const T b) {
    cout << "template";
}

void demoPrint(const double a, const double b) {
    cout << "non-template";
}

demoPrint(2.0, 3.0);
```

程序输出结果是什么？

A.

template

B.

non-template

C.

编译错误

D.

不输出任何内容

---

Standard Answer: B

## Question 13 - 单选题

阅读下面程序片段：

```cpp
template <typename T>
void demoPrint(const T a, const T b) {
    cout << "template";
}

void demoPrint(const double a, const double b) {
    cout << "non-template";
}

demoPrint(3, 4.5);
```

程序输出结果是什么？

A.

template

B.

non-template

C.

template non-template

D.

一定编译错误

---

Standard Answer: B

## Question 14 - 单选题

关于类模板，下列说法正确的是哪一项？

A.

类模板是通用类模型，必须实例化后才能创建具体对象

B.

类模板本身就是一个普通对象

C.

类模板只能用于 int 类型

D.

类模板不能包含成员函数

---

Standard Answer: A

## Question 15 - 单选题

若已经定义类模板：

```cpp
template <typename T>
class Box {
public:
    Box(T v);
};
```

下列哪个写法可以创建一个保存整数的 Box 对象？

A.

`Box<int> b(10);`

B.

`Box b<int>(10);`

C.

`template Box<int> b(10);`

D.

`Box(T) b(10);`

---

Standard Answer: A

## Question 16 - 单选题

对于如下类模板：

```cpp
template <typename T>
class Box {
public:
    T getValue() const;
};
```

如果在类外定义成员函数 getValue，下列写法正确的是哪一项？

A.

```cpp
template <typename T>
T Box<T>::getValue() const {
    // ...
}
```

B.

```cpp
T Box::getValue() const {
    // ...
}
```

C.

```cpp
template <typename T>
T Box::getValue<T>() const {
    // ...
}
```

D.

```cpp
Box<T>::T getValue() const {
    // ...
}
```

---

Standard Answer: A

## Question 17 - 单选题

关于模板的编译模型，下列说法正确的是哪一项？

A.

模板进行实例化时，编译器通常需要能够看到模板定义的源代码

B.

模板只需要声明，永远不需要定义

C.

模板的定义必须只能写在 .cpp 文件中，不能写在头文件中

D.

模板不能放在头文件中

---

Standard Answer: A

## Question 18 - 单选题

关于非类型模板形参，下列说法正确的是哪一项？

A.

非类型模板形参可以表示模板内部使用的编译期常量

B.

非类型模板形参只能表示字符串

C.

非类型模板形参只能在运行时输入

D.

非类型模板形参和普通函数局部变量完全相同

---

Standard Answer: A

## Question 19 - 单选题

阅读下面代码：

```cpp
template <typename T, int N>
class FixedArray {
private:
    T data[N];
};
```

其中 N 的含义是什么？

A.

非类型模板形参，表示数组大小

B.

类型模板形参，表示元素类型

C.

普通成员函数名

D.

普通对象名

---

Standard Answer: A

## Question 20 - 单选题

对于如下函数模板：

```cpp
template <typename T, int N>
void printValues(T (&arr)[N]) {
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << endl;
    }
}
```

下列说法正确的是哪一项？

A.

参数 arr 是数组引用，N 可以由实参数组长度推断出来

B.

参数 arr 会退化为指针，因此无法知道数组长度

C.

该函数只能处理长度为 1 的数组

D.

该函数只能处理 int 数组

---

Standard Answer: A

## 完成情况

选择题进度 20 / 20
