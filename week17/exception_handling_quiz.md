# 2026 程序设计 II - 第17周课后选择题

## Question 1 - 单选题
下列哪一种错误通常会导致程序无法通过编译？

A. 语法错误

B. 逻辑错误

C. 文件打开失败

D. 数组下标越界

**Standard Answer: A**

---

## Question 2 - 单选题
程序能够正常运行，但得到的结果不符合预期，这通常属于哪一类错误？

A. 语法错误

B. 逻辑错误

C. 链接错误

D. 编译器错误

**Standard Answer: B**

---

## Question 3 - 单选题
在传统的 C 风格错误处理中，函数返回空指针通常表示什么？

A. 函数执行成功

B. 函数执行失败

C. 函数没有返回值

D. 函数返回了整数 0

**Standard Answer: B**

---

## Question 4 - 单选题
C++ 异常处理机制的主要作用是？

A. 自动修复所有程序错误

B. 将正常处理代码与异常处理代码分离

C. 保证程序永远不会终止

D. 代替所有条件判断语句

**Standard Answer: B**

---

## Question 5 - 单选题
在 C++ 中，抛出一个异常应使用哪个关键字？

A. catch

B. throw

C. try

D. error

**Standard Answer: B**

---

## Question 6 - 单选题
执行下面的语句后，当前正常执行流程会发生什么？

```cpp
throw 10;
```

A. 程序继续执行下一条语句

B. 抛出一个 int 类型的异常

C. 创建一个值为 10 的普通变量

D. 自动返回函数值 10

**Standard Answer: B**

---

## Question 7 - 单选题
可能抛出异常的代码通常应放在哪个代码块中？

A. if 块

B. for 块

C. try 块

D. switch 块

**Standard Answer: C**

---

## Question 8 - 单选题
如果 try 块中的代码没有抛出异常，紧跟在后面的 catch 块会怎样？

A. 一定执行

B. 不执行

C. 只执行第一个

D. 只执行最后一个

**Standard Answer: B**

---

## Question 9 - 单选题
当 try 块中抛出异常后，try 块中位于 throw 之后的语句会怎样？

A. 继续正常执行

B. 重复执行

C. 不再执行

D. 只执行一次后再进入 catch

**Standard Answer: C**

---

## Question 10 - 单选题
多个 catch 子句按照什么顺序检查？

A. 按异常类型名称的字典序

B. 按它们书写的先后顺序

C. 从最后一个向前检查

D. 随机检查

**Standard Answer: B**

---

## Question 11 - 单选题
下面哪一个 catch 可以捕获任意类型的异常？

A. catch (int)

B. catch (std::exception&)

C. catch (...)

D. catch (void)

**Standard Answer: C**

---

## Question 12 - 单选题
关于 catch (...) 的位置，下列说法正确的是？

A. 必须写在所有 catch 之前

B. 通常应写在所有其他 catch 之后

C. 只能单独使用，不能和其他 catch 同时出现

D. 必须写在 try 块内部

**Standard Answer: B**

---

## Question 13 - 单选题
捕获标准异常时，下面哪一种写法更推荐？

A. catch (std::exception e)

B. catch (const std::exception& e)

C. catch (std::exception* e)

D. catch (void e)

**Standard Answer: B**

---

## Question 14 - 单选题
标准异常对象的 what() 函数通常用于做什么？

A. 返回异常的说明信息

B. 重新抛出异常

C. 判断异常类型

D. 结束程序

**Standard Answer: A**

---

## Question 15 - 单选题
使用 vector::at() 访问越界下标时，通常会抛出哪种异常？

A. std::invalid_argument

B. std::out_of_range

C. std::bad_alloc

D. std::overflow_error

**Standard Answer: B**

---

## Question 16 - 单选题
当函数参数的取值不合法时，下面哪种标准异常比较合适？

A. std::invalid_argument

B. std::bad_alloc

C. std::out_of_range

D. std::underflow_error

**Standard Answer: A**

---

## Question 17 - 单选题
如果当前函数没有捕获它所接收到的异常，该异常通常会怎样？

A. 自动消失

B. 转换为返回值

C. 向调用该函数的上一层传播

D. 自动改为警告信息

**Standard Answer: C**

---

## Question 18 - 单选题
在 catch 块中单独使用下面的语句表示什么？

```cpp
throw;
```

A. 创建一个新的整数异常

B. 重新抛出当前正在处理的异常

C. 结束当前循环

D. 忽略当前异常

**Standard Answer: B**

---

## Question 19 - 单选题
自定义异常类通常建议继承下面哪个标准类？

A. std::string

B. std::vector

C. std::exception 或其派生类

D. std::iostream

**Standard Answer: C**

---

## Question 20 - 单选题
如果一个对象的构造函数在构造过程中抛出异常，下列说法正确的是？

A. 该对象已经构造成功，并会正常调用析构函数

B. 该对象没有构造成功，因此不会调用该对象的析构函数

C. 程序一定会忽略该异常

D. 构造函数会自动重新执行一次

**Standard Answer: B**
