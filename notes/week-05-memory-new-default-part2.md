# 2026 程序设计 II - 第5周课后选择题（Part 2）

## 主题
=default、=delete、成员初始化器列表、nullptr、内存管理

---

# Question 11 - 单选题

下列哪一个写法是合法的 `=default` 用法

A. `int func() = default;`

B. `A(int,int) = default;`

C. `A() = default;`

D. `A(int=0) = default;`

**Standard Answer: C**

---

# Question 12 - 单选题

关于删除函数，下列说法正确的是

A. 可以先声明，稍后在类外第一次定义为 `=delete`

B. `=delete` 定义必须是该函数的首次声明

C. 删除函数只能用于析构函数

D. 删除函数只能用于 `private` 成员

**Standard Answer: B**

---

# Question 13 - 单选题

下列哪一种成员通常必须放在成员初始化器列表中初始化

A. 普通 `int` 局部变量

B. `const` 成员

C. 静态成员函数

D. 普通全局变量

**Standard Answer: B**

---

# Question 14 - 单选题

关于成员初始化顺序，下列说法正确的是

A. 按成员在初始化器列表中的书写顺序

B. 按成员在类中声明的顺序

C. 先执行构造函数体，再初始化成员

D. 顺序由编译器随机决定

**Standard Answer: B**

---

# Question 15-20

重点：

- `delete` 与 `delete[]`
- 野指针与重复释放
- 成员初始化器列表
- `nullptr`
- 内存泄漏

**Standard Answers:**

15: B, A, C  
16: A, B, C  
17: A, B, C, D  
18: B, C, D  
19: D, A, B, C  
20: A, C, D

---

# 知识点总结

## =default

请求编译器生成默认实现的特殊成员函数。

## =delete

用于删除函数，使其不可调用。

## 成员初始化器列表

用于初始化：

- const成员
- 引用成员
- 没有默认构造函数的类类型成员
- 基类

## nullptr

C++11引入的空指针常量，比NULL和0更安全。
