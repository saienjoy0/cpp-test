# Week 4

Extracted source/text files from `26程序设计II-week4.zip`.

## `02-w4-sources/11_public.cpp`

```cpp
#include<iostream> 
#include "public.hpp" 
using namespace std; 
using namespace sysu_cplus;
 
// 程序的主函数 
int main( ) { 
    Line line; 
    // 设置长度 
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl; 
    // 不使用成员函数设置长度 
    line.length = 10.0; 
    // OK: 因为 length 是公有的
    cout << "Length of line : " << line.length <<endl; 
    // Error: 破坏包装的后果 
    line.length = -10.0;
    cout << "Length of line : " << line.getLength() <<endl;
    // 使用函数
    line.setLength(-6.0);  
    return 0; 
}
```

## `02-w4-sources/12_private.cpp`

```cpp
#include <iostream> 
#include "private.hpp" 
using namespace std;
using namespace sysu_cplus; 

// 程序的主函数 
int main( ) { 
    Box box; 
    // 不使用成员函数设置长度 
    box.length = 10.0; 
    // OK: 因为 length 是公有的 
    cout << "Length of box : " << box.length <<endl; 
    // 不使用成员函数设置宽度 
    // box.width = 10.0; 
    // Error: 因为 width 是私有的 
    // 使用成员函数设置宽度 
	box.setWidth(10.0); 
    cout << "Width of box : " << box.getWidth() <<endl;
    // 请计算并输出面积，保留两位小数
    // 思考，将长度赋值负数，负面后果有哪些？  
    return 0; 
}
```

## `02-w4-sources/13_无参构造函数.cpp`

```cpp
#include <iostream> 
#include "constructor.hpp" 
using namespace std; 
using namespace sysu_cplus;

// 程序的主函数 
int main() { 
    Line line; 
    // 设置长度 
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl; 
    return 0; 
}
```

## `02-w4-sources/14_带参数的构造函数.cpp`

```cpp
#include <iostream>
#include "constructor_para.hpp" 
using namespace std; 
using namespace sysu_cplus;

// 程序的主函数 
int main( ) { 
    Line line(10.0);  //Line line = 10.0; //Line line{10.0} 
	Line line1;  //Error，没有默认构造 
    // 获取默认设置的长度 
    cout << "Length of line : " << line.getLength() <<endl; 
    // 再次设置长度 
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl;    
    return 0; 
}
```

## `02-w4-sources/15_析构函数.cpp`

```cpp
#include <iostream> 
#include "destructor.hpp" 
using namespace std; 
using namespace sysu_cplus; 

// 程序的主函数 
int main( ) { 
    Line line; 
    //设置长度 
	line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl; 
    return 0; 
}
```

## `02-w4-sources/16_This指针.cpp`

```cpp
#include <iostream> 
using namespace std; 

class Box { 
    public: 
        // 构造函数定义 
        Box(double l=2.0, double b=2.0, double h=2.0) { 
            cout <<"Constructor called." << endl; 
            length = l; 
            breadth = b; 
            height = h; 
        } 
        double Volume() { 
            return length * breadth * height; 
        } 
        int compare(Box box) { 
            return this->Volume() > box.Volume(); 
        } 
    private: 
        double length; // Length of a box 
        double breadth; // Breadth of a box 
        double height; // Height of a box 
};

int main(void) { 
    Box Box1(3.3, 1.2, 1.5); // Declare box1 
    Box Box2(8.5, 6.0, 2.0); // Declare box2 
    if(Box1.compare(Box2)) { 
        cout << "Box2 is smaller than Box1" <<endl; 
    } else { 
        cout << "Box2 is equal to or larger than Box1" <<endl; 
    } 
    return 0; 
}
```

## `02-w4-sources/17_1_构造函数例子-Date例子.cpp`

```cpp
#include <iostream>
using namespace std;
int DaysInMonth( int, int ); 

class DATE
{
    public:
         DATE( int, int, int ); //构造函数
         DATE();              //缺省构造函数

         void Set( int, int, int);
         int getMonth() const;
         int getDay() const;
         int getYear() const;
         void Print() const;
         void Increment();
         void Decrement();
                    
    private:
            int month;
            int day;
            int year;	
};
DATE::DATE( int initYear, int initMonth, int initDay )
{
     year = initYear;          //在构造函数中进行初始化
     month = initMonth;
     day  = initDay;
}
DATE::DATE()
{
     year = 2000;
     month = 1;
     day = 1;
}

int DATE::getMonth() const { return month; }
int DATE::getDay() const { return day; }
int DATE::getYear() const { return year; }

void DATE::Print() const
{
   	switch(month)
    {
        case 1: cout << "January "; break;
        case 2: cout << "February "; break;
        case 3: cout << "March "; break;
        case 4: cout << "April "; break;
        case 5: cout << "May "; break;
        case 6: cout << "June "; break;
        case 7: cout << "July "; break;
        case 8: cout << "Aguest "; break;
        case 9: cout << "September "; break;
        case 10: cout << "October "; break;
        case 11: cout << "November "; break;
        case 12: cout << "December "; break;
    }
    cout << ' ' << day << ", " << year << endl << endl;
}

void DATE::Increment()
{
    day++;
    if (day > DaysInMonth(month, year)) {
        day = 1; month++;
        if (month > 12) { month = 1; year++; }
    }
}

void DATE::Decrement()
{  day--;
    if ( day == 0 ) {
        if( month == 1 ) { day = 31; month = 12; year--; }
        else { month--; day = DaysInMonth( month, year ); }
    }
}

int DaysInMonth( int mo, int yr )
{
    switch (mo) {
     case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
     case 4: case 6: case 9: case 11: return 30;
     case 2: return ((yr % 4 == 0 && yr % 100 != 0) ||yr % 400 == 0) ? 29 : 28;
    }
    return 0;
}

int main()
{
     DATE date1;
     DATE date2( 1976, 12, 20 );
     date1.Print(); 
     date2.Print(); 
     return 0; 
}
```

## `02-w4-sources/17_2_构造函数例子-Date默认构造函数.cpp`

```cpp
#include <iostream>
using namespace std;
int DaysInMonth( int, int ); 
class DATE
{
    public:
         DATE( int = 2000, int = 1, int = 1 );
         void Set( int, int, int);
         int getMonth() const;
         int getDay() const;
         int getYear() const;
         void Print() const;
         void Increment();
         void Decrement();
    private:
         int month;
         int day;
         int year; 
};

DATE::DATE( int initYear, int initMonth, int initDay ) { year = initYear; month = initMonth; day = initDay; }
int DATE::getMonth() const { return month; }
int DATE::getDay() const { return day; }
int DATE::getYear() const { return year; }
void DATE::Print() const { cout << month << "/" << day << "/" << year << endl; }
void DATE::Increment() { day++; }
void DATE::Decrement() { day--; }
int DaysInMonth(int mo, int yr) { return 31; }

int main() {
     DATE date1;
     DATE date2( 1976 );
     DATE date3( 1976, 12 );
     DATE date4( 1976, 12, 20 );
     date1.Print(); date2.Print(); date3.Print(); date4.Print();
     return 0;
}
```

## `02-w4-sources/18_静态成员.cpp`

```cpp
#include <iostream>
using namespace std;

class DATE {
public:
    DATE(int y=2000,int m=1,int d=1):year(y),month(m),day(d){count++;}
    static void getCount(){ cout << "There are " << count << " objects now." << endl; }
private:
    int month, day, year;
    static int count;
};
int DATE::count = 0;

int main() {
    DATE date1;
    date1.getCount();
    DATE date2(1976);
    DATE::getCount();
    return 0;
}
```

## `02-w4-sources/constructor.hpp`

```cpp
#pragma once
#include<iostream> 
namespace sysu_cplus { 
class Line { public: void setLength(double len); double getLength(void); Line(); private: double length; }; 
}
sysu_cplus::Line::Line(void) { std::cout << "Object is being created" << std::endl; }
void sysu_cplus::Line::setLength(double len) { length = len; }
double sysu_cplus::Line::getLength(void) { return length; }
```

## `02-w4-sources/constructor_default_para.hpp`

```cpp
#pragma once
#include <iostream> 
namespace sysu_cplus {
class Line { public: Line(double len=0); void setLength(double len); double getLength(void); private: double length; };
}
sysu_cplus::Line::Line(double len) { length=len; std::cout << "Object is being created, length = " << len << std::endl; }
void sysu_cplus::Line::setLength(double len) { length=len; }
double sysu_cplus::Line::getLength(void) { return length; }
```

## `02-w4-sources/constructor_para.hpp`

```cpp
#pragma once
#include <iostream> 
namespace sysu_cplus {
class Line { public: Line(double len); void setLength(double len); double getLength(void); private: double length; };
}
sysu_cplus::Line::Line(double len) { length=len; std::cout << "Object is being created, length = " << len << std::endl; }
void sysu_cplus::Line::setLength(double len) { length=len; }
double sysu_cplus::Line::getLength(void) { return length; }
```

## `02-w4-sources/destructor.hpp`

```cpp
#pragma once
#include<iostream> 
namespace sysu_cplus { class Line { public: void setLength(double len); double getLength(void); Line(); ~Line(); private: double length; }; }
sysu_cplus::Line::Line(void) { std::cout << "Object is being created" << std::endl; }
sysu_cplus::Line::~Line(void) { std::cout << "Object is being deleted" << std::endl; }
void sysu_cplus::Line::setLength(double len) { length=len; }
double sysu_cplus::Line::getLength(void) { return length; }
```

## `02-w4-sources/private.hpp`

```cpp
#pragma once
#include<stdexcept>
namespace sysu_cplus { class Box { public: double length; void setWidth(double wid); double getWidth(void) const; double getArea(); private: double width; }; }
double sysu_cplus::Box::getWidth(void) const { return width; }
void sysu_cplus::Box::setWidth(double w) { if (w<0) throw std::invalid_argument("invalid w < 0."); width=w; }
```

## `02-w4-sources/public.hpp`

```cpp
#pragma once
#include<stdexcept> 
namespace sysu_cplus { class Line { public: double length; void setLength(double len); double getLength(void); }; }
double sysu_cplus::Line::getLength(void) { return length; }
void sysu_cplus::Line::setLength(double len) { if (len<0) throw std::out_of_range("Invalid parameter len！"); length=len; }
```
