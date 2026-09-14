# 2026 程序设计 II - 第5周课后选择题

## 主题
程序内存布局、new/delete、指针、内存管理、=default

---

# Question 1 - 单选题
关于程序内存布局，下列说法正确的是

A. 函数参数通常存放在堆
B. 自动变量通常存放在栈
C. 动态分配对象通常存放在代码区
D. 字符串字面量通常存放在栈

**Standard Answer: B**

---

# Question 2 - 单选题
执行 `char *s1 = "Literal";` 后，下列说法正确的是

A. 可以安全执行 `s1[0] = 'I';`
B. `s1` 指向的是可修改数组
C. `s1` 指向字符串字面量，不应修改其内容
D. `s1` 一定在堆上

**Standard Answer: C**

---

# Question 3 - 单选题
表达式 `new int` 的返回值类型是

A. `void*`
B. `int`
C. `int*`
D. `int&`

**Standard Answer: C**

---

# Question 4 - 单选题
关于 `new` 的说法正确的是

A. 只分配空间，不做初始化
B. 分配失败返回 `NULL`
C. 对类类型对象会分配空间并调用构造函数
D. 只能用于基本类型

**Standard Answer: C**

---

# Question 5 - 单选题
已执行 `int* p = new int[10];`，正确的释放方式是

A. `free(p)`
B. `delete p`
C. `delete[] p`
D. `remove(p)`

**Standard Answer: C**

---

# Question 6 - 单选题
关于栈上对象与堆上对象，下列说法正确的是

A. 栈上对象必须手动 `delete`
B. 堆上对象离开作用域会自动析构
C. 栈上对象离开作用域通常会自动析构
D. 二者都必须手动释放

**Standard Answer: C**

---

# Question 7 - 单选题
若 `Text* p = &obj;`，访问成员函数 `Print()` 的正确写法是

A. `p.Print()`
B. `*p.Print()`
C. `p->Print()`
D. `p::Print()`

**Standard Answer: C**

---

# Question 8 - 单选题
下列哪种情况最容易产生野指针问题

A. 两个指针指向同一动态对象，其中一个 `delete` 后另一个继续使用
B. 指针只读不写
C. 指针只在定义时赋值一次
D. 使用栈对象

**Standard Answer: A**

---

# Question 9 - 单选题
下列代码最直接导致内存泄漏的是

A. `int* p = new int(7); delete p;`
B. `int* p = new int(7); p = nullptr;`
C. `int x = 7; int* p = &x;`
D. `int* p = nullptr;`

**Standard Answer: B**

---

# Question 10 - 单选题
`=default` 主要用于

A. 删除一个成员函数
B. 请求编译器生成默认实现的特殊成员函数
C. 强制函数变为虚函数
D. 申请动态内存

**Standard Answer: B**

---

# 完成情况

选择题进度：20 / 20
