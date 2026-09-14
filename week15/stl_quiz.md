# 26程序设计II-周15-课后选择题

**Question 1 - 单选题**

关于 STL 的说法，下列哪一项是正确的？

A.

STL 是 C 语言标准库的一部分

B.

STL 与 C++ 标准库没有关系

C.

STL 通常被认为是 C++ 标准库中的一部分

D.

STL 只能用于字符串处理

---

Standard Answer: C

**Question 2 - 单选题**

在课堂内容中，STL 主要涉及下面哪几类库？

A.

容器库、迭代器库、算法库

B.

图形库、网络库、数据库库

C.

文件库、线程库、图像库

D.

输入库、输出库、异常库

---

Standard Answer: A

**Question 3 - 单选题**

vector<int> 最接近下面哪种数据结构？

A.

固定长度数组

B.

动态连续数组

C.

双链表

D.

哈希表

---

Standard Answer: B

**Question 4 - 单选题**

关于 vector 的元素访问，下列说法正确的是？

A.

v[i] 会检查下标是否越界

B.

v.at(i) 会检查下标是否越界

C.

v.front() 返回最后一个元素

D.

v.back() 返回第一个元素

---

Standard Answer: B

**Question 5 - 单选题**

对于非空 vector<int> v，v.front() 返回的是？

A.

第一个元素的引用

B.

最后一个元素的引用

C.

容器长度

D.

指向最后一个元素之后位置的迭代器

---

Standard Answer: A

**Question 6 - 单选题**

对于容器 c，c.end() 表示什么？

A.

指向第一个元素

B.

指向最后一个元素

C.

指向最后一个元素的下一位置

D.

指向第一个元素的前一位置

---

Standard Answer: C

**Question 7 - 单选题**

对于容器 c，c.rbegin() 表示什么？

A.

指向第一个元素

B.

指向最后一个元素

C.

指向最后一个元素的下一位置

D.

指向第一个元素的前一位置

---

Standard Answer: B

**Question 8 - 单选题**

下面哪种写法可以用 auto 自动推导迭代器类型？

A.

`auto it = v.begin();`

B.

`auto = v.begin();`

C.

`it auto = v.begin();`

D.

`v.begin() auto it;`

---

Standard Answer: A

**Question 9 - 单选题**

关于 decltype(expr)，下列说法正确的是？

A.

它用于输出表达式的值

B.

它用于从表达式得到类型

C.

它只能用于 int 类型

D.

它只能用于数组

---

Standard Answer: B

**Question 10 - 单选题**

C++ 标准容器大致可以分为哪几类？

A.

顺序容器、关联容器、无序关联容器、容器适配器

B.

整数容器、浮点容器、字符容器、布尔容器

C.

输入容器、输出容器、错误容器、异常容器

D.

静态容器、动态容器、私有容器、公有容器

---

Standard Answer: A

**Question 11 - 单选题**

下列哪一个顺序容器是固定长度数组？

A.

vector

B.

list

C.

deque

D.

array

---

Standard Answer: D

**Question 12 - 单选题**

关于 list 的说法，下列哪一项是正确的？

A.

list 是动态连续数组

B.

list 是双链表

C.

list 支持下标随机访问

D.

list 只能在尾部插入元素

---

Standard Answer: B

**Question 13 - 单选题**

关于 deque 的说法，下列哪一项是正确的？

A.

deque 适合在两端进行插入和删除

B.

deque 不允许存放重复元素

C.

deque 是固定长度容器

D.

deque 只能通过键访问元素

---

Standard Answer: A

**Question 14 - 单选题**

C<T> c(n, t); 的含义是？

A.

创建一个空容器

B.

创建一个包含 n 个元素的容器，每个元素的值为 t

C.

创建一个包含 t 个元素的容器，每个元素的值为 n

D.

删除容器中的 n 个元素

---

Standard Answer: B

**Question 15 - 单选题**

顺序容器中的 c.insert(iter, t) 表示什么？

A.

在 iter 所指元素之后插入 t

B.

在 iter 所指元素之前插入 t

C.

删除 iter 所指元素

D.

查找值为 t 的元素

---

Standard Answer: B

**Question 16 - 单选题**

顺序容器中的 c.erase(iter) 会删除什么？

A.

删除容器中的所有元素

B.

删除容器中的第一个元素

C.

删除 iter 所指向的元素

D.

删除容器中的最后一个元素

---

Standard Answer: C

**Question 17 - 单选题**

关于区间 [b, e)，下列说法正确的是？

A.

包括 b 指向的元素，也包括 e 指向的元素

B.

不包括 b 指向的元素，但包括 e 指向的元素

C.

包括 b 指向的元素，但不包括 e 指向的元素

D.

b 和 e 指向的元素都不包括

---

Standard Answer: C

**Question 18 - 单选题**

关于 map<K, T>，下列说法正确的是？

A.

map 通过下标数字访问元素

B.

map 通过键 key 存取对应的值

C.

map 中不能存放字符串

D.

map 中所有键都可以重复出现

---

Standard Answer: B

**Question 19 - 单选题**

对于 std::pair<T1, T2> p，访问第一个元素和第二个元素应使用？

A.

p.left 和 p.right

B.

p.key 和 p.value

C.

p.first 和 p.second

D.

p.begin() 和 p.end()

---

Standard Answer: C

**Question 20 - 单选题**

关于 set 的说法，下列哪一项是正确的？

A.

set 中允许相同元素重复出现

B.

set 中每个元素本身就是关键字

C.

set 支持 operator[] 下标访问

D.

set 只能存放整数，不能存放字符串

---

Standard Answer: B

选择题进度 20 / 20
