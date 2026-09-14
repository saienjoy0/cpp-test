# 2026 程序设计 II - 第16周课后选择题

## Question 1 - 单选题
关于容器适配器，下列说法正确的是？

A. 容器适配器是一种全新的基本数据类型

B. 容器适配器是在已有顺序容器基础上提供特定功能接口

C. 容器适配器只能存放整数

D. 容器适配器不能使用 STL 容器实现

**Standard Answer: B**

---

## Question 2 - 单选题
下列哪一个是 STL 中的容器适配器？

A. vector

B. list

C. stack

D. map

**Standard Answer: C**

---

## Question 3 - 单选题
stack 的元素访问规则是？

A. 先进先出

B. 后进先出

C. 随机访问

D. 按关键字访问

**Standard Answer: B**

---

## Question 4 - 单选题
在 `stack<int> s` 中，向栈顶加入元素 x 应使用哪个操作？

A. `s.insert(x)`

B. `s.push(x)`

C. `s.front(x)`

D. `s.add(x)`

**Standard Answer: B**

---

## Question 5 - 单选题
在 `stack<int> s` 中，访问栈顶元素应使用哪个操作？

A. `s.front()`

B. `s.back()`

C. `s.top()`

D. `s.first()`

**Standard Answer: C**

---

## Question 6 - 单选题
关于 stack 的 pop() 操作，下列说法正确的是？

A. 删除栈顶元素，并返回该元素

B. 删除栈底元素，并返回该元素

C. 删除栈顶元素，但没有返回值

D. 返回栈顶元素，但不删除元素

**Standard Answer: C**

---

## Question 7 - 单选题
queue 的元素访问规则是？

A. 后进先出

B. 先进先出

C. 按优先级访问

D. 按字典序访问

**Standard Answer: B**

---

## Question 8 - 单选题
在 `queue<int> q` 中，访问队首元素应使用哪个操作？

A. `q.top()`

B. `q.front()`

C. `q.begin()`

D. `q.first()`

**Standard Answer: B**

---

## Question 9 - 单选题
在 `queue<int> q` 中，访问队尾元素应使用哪个操作？

A. `q.back()`

B. `q.top()`

C. `q.end()`

D. `q.last()`

**Standard Answer: A**

---

## Question 10 - 单选题
对于默认的 `priority_queue<int> q`，`q.top()` 返回的是？

A. 当前最小值

B. 当前最大值

C. 最早插入的元素

D. 最晚插入的元素

**Standard Answer: B**

---

## Question 11 - 单选题
默认情况下，stack 和 queue 使用的底层容器是？

A. vector

B. list

C. deque

D. set

**Standard Answer: C**

---

## Question 12 - 单选题
默认情况下，priority_queue 使用的底层容器是？

A. vector

B. list

C. map

D. set

**Standard Answer: A**

---

## Question 13 - 单选题
下列哪种迭代器支持 ++ 和 --，但不支持 it + n？

A. 输入迭代器

B. 输出迭代器

C. 双向迭代器

D. 随机访问迭代器

**Standard Answer: C**

---

## Question 14 - 单选题
vector 的迭代器属于哪一类？

A. 正向迭代器

B. 双向迭代器

C. 随机访问迭代器

D. 输出迭代器

**Standard Answer: C**

---

## Question 15 - 单选题
list 的迭代器支持下列哪种操作？

A. `it++` 和 `it--`

B. `it + 3`

C. `it[2]`

D. `it += 5`

**Standard Answer: A**

---

## Question 16 - 单选题
下列哪种写法是 C++11 范围 for 遍历容器的正确形式？

A. `for (auto x : container) { ... }`

B. `for auto x in container { ... }`

C. `for (container : auto x) { ... }`

D. `foreach (x in container) { ... }`

**Standard Answer: A**

---

## Question 17 - 单选题
在遍历 vector 并使用 erase() 删除元素时，比较安全的做法是？

A. 删除后继续使用原来的迭代器

B. 删除后直接让迭代器加 2

C. 使用 erase() 的返回值更新迭代器

D. 删除元素后立即结束程序

**Standard Answer: C**

---

## Question 18 - 单选题
`sort(vec.begin(), vec.end())` 默认会如何排序？

A. 降序排序

B. 升序排序

C. 随机排序

D. 不改变顺序

**Standard Answer: B**

---

## Question 19 - 单选题
下列哪段代码可以使 `vector<int> vec` 按降序排序？

A. `sort(vec.begin(), vec.end());`

B. `sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });`

C. `sort(vec.end(), vec.begin());`

D. `sort(vec.begin(), vec.end(), [](int a, int b) { return a == b; });`

**Standard Answer: B**

---

## Question 20 - 单选题
关于 count_if 和 accumulate，下列说法正确的是？

A. count_if 用于统计满足条件的元素个数

B. count_if 只能统计所有元素的总和

C. accumulate 不能设置初始值

D. accumulate 定义在 `<stack>` 中

**Standard Answer: A**
