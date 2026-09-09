# Week 3

Extracted source/text files from `26程序设计II-week3.zip`.

## `02-w3-sources/01_Date.cpp`

```cpp
#include <iostream> 
#include <math.h>
#include "DATE.hpp"

using namespace std;

void DATE::Set(int newYear, int newMonth,int newDay ) {
    month = newMonth;
    day = newDay;
    year = newYear; 
}

int DATE::getMonth() const
{
    return month;
}

int DATE::getDay() const
{
    return day;
}

int DATE::getYear() const
{
    return year;
}

void DATE::Print() const
{
   	switch(month)
    {
        case 1:
            cout << "January ";
            break;
        case 2:
            cout << "February ";
            break;
        case 3:
            cout << "March ";
            break;
        case 4:
            cout << "April ";
            break;
        case 5:
            cout << "May ";
            break;
        case 6:
            cout << "June ";
            break;
        case 7:
            cout << "July ";
            break;
        case 8:
            cout << "Aguest ";
            break;
        case 9:
            cout << "September ";
            break;
        case 10:
            cout << "October ";
            break;
        case 11:
            cout << "November ";
            break;
        case 12:
            cout << "December ";
            break;
    }
    cout << ' ' << day << ", " << year << endl << endl;
}

void DATE::Increment()
{
    day++;
    if (day > DaysInMonth(month, year))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}

void DATE::Decrement()
{  day--;
    if ( day == 0 )
    {
        if( month == 1 )
        { 
             day = 31;
             month = 12;
             year--;
        }
        else
        {
             month--;
             day = DaysInMonth( month, year );
        }
    }
}

int DaysInMonth( /* in */ int mo, /* in */ int yr  )
{
    switch (mo)
   {
     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
              return 31;
     case 4: case 6: case 9: case 11:
             return 30;
     case 2:  
          if ((yr % 4 == 0 && yr % 100 != 0) ||yr % 400 == 0)
              return 29;
          else
              return 28;
    }
}



int main()
{
     DATE date1, date2;
     int tmp;

     date1.Set( 1999, 10, 1 );
     date1.Print();
     date1.Increment();
     date1.Print();

     date2.Set( 1997, 7, 1 );
     date2.Print();
     date2.Decrement();
     date2.Print();

     tmp = date1.getYear();
     tmp++;
     date1.Set( tmp, 12, 20 );
     date1.Print();

     //cout << date1.year;  

     return 0;
}
```

## `02-w3-sources/02_clientDATE.cpp`

```cpp
//client.cpp
#include <iostream>
#include "DATE.hpp"

using namespace std;

int main()
{
     DATE date1, date2;
     int tmp;

     date1.Set( 1999, 10, 1 );
     date1.Print();
     date1.Increment();
     date1.Print();

     date2.Set( 1997, 7, 1 );
     date2.Print();
     date2.Decrement();
     date2.Print();

     tmp = date1.getYear();
     tmp++;
     date1.Set( tmp, 12, 20 );
     date1.Print();

     //cout << date1.year;  

     return 0;
}
```

## `02-w3-sources/02_date.dev`

```text
[Project]
FileName=02_date.dev
Name=02_date.dev
Type=1
Ver=2
ObjFiles=
Includes=
Libs=
PrivateResource=
ResourceIncludes=
MakeIncludes=
Compiler=
CppCompiler=
Linker=
IsCpp=1
Icon=
ExeOutput=
ObjectOutput=
LogOutput=
LogOutputEnabled=0
OverrideOutput=0
OverrideOutputName=
HostApplication=
UseCustomMakefile=0
CustomMakefile=
CommandLine=
Folders=
IncludeVersionInfo=0
SupportXPThemes=0
CompilerSet=0
CompilerSettings=00000000a0000000000000000
UnitCount=2

[VersionInfo]
Major=1
Minor=0
Release=0
Build=0
LanguageID=1033
CharsetID=1252
CompanyName=
FileVersion=
FileDescription=Developed using the Dev-C++ IDE
InternalName=
LegalCopyright=
LegalTrademarks=
OriginalFilename=
ProductName=
ProductVersion=
AutoIncBuildNr=0
SyncProduct=1

[Unit1]
FileName=02_clientDATE.cpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=

[Unit2]
FileName=DATE.cpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=
```

## `02-w3-sources/03_clientDATE_inline.cpp`

```cpp
//client.cpp
#include <iostream>
#include "DATE_inline.hpp"

using namespace std;

int main()
{
     DATE date1, date2;
     int tmp;

     date1.Set( 1999, 10, 1 );
     date1.Print();
     date1.Increment();
     date1.Print();

     date2.Set( 1997, 7, 1 );
     date2.Print();
     date2.Decrement();
     date2.Print();

     tmp = date1.getYear();
     tmp++;
     date1.Set( tmp, 12, 20 );
     date1.Print();

     //cout << date1.year;  

     return 0;
}
```

## `02-w3-sources/DATE.cpp`

```cpp
#include <iostream> 
#include <math.h>
#include "DATE.hpp"

using namespace std;

void DATE::Set(int newYear, int newMonth,int newDay ) {
    month = newMonth;
    day = newDay;
    year = newYear; 
}

int DATE::getMonth() const
{
    return month;
}

int DATE::getDay() const
{
    return day;
}

int DATE::getYear() const
{
    return year;
}

void DATE::Print() const
{
   	switch(month)
    {
        case 1:
            cout << "January ";
            break;
        case 2:
            cout << "February ";
            break;
        case 3:
            cout << "March ";
            break;
        case 4:
            cout << "April ";
            break;
        case 5:
            cout << "May ";
            break;
        case 6:
            cout << "June ";
            break;
        case 7:
            cout << "July ";
            break;
        case 8:
            cout << "Aguest ";
            break;
        case 9:
            cout << "September ";
            break;
        case 10:
            cout << "October ";
            break;
        case 11:
            cout << "November ";
            break;
        case 12:
            cout << "December ";
            break;
    }
    cout << ' ' << day << ", " << year << endl << endl;
}

void DATE::Increment()
{
    day++;
    if (day > DaysInMonth(month, year))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}

void DATE::Decrement()
{  day--;
    if ( day == 0 )
    {
        if( month == 1 )
        { 
             day = 31;
             month = 12;
             year--;
        }
        else
        {
             month--;
             day = DaysInMonth( month, year );
        }
    }
}

int DaysInMonth( /* in */ int mo, /* in */ int yr  )
{
    switch (mo)
   {
     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
              return 31;
     case 4: case 6: case 9: case 11:
             return 30;
     case 2:  
          if ((yr % 4 == 0 && yr % 100 != 0) ||yr % 400 == 0)
              return 29;
          else
              return 28;
    }
}
```

## `02-w3-sources/DATE.hpp`

```cpp
#pragma once 

int DaysInMonth( int, int ); 

class DATE {
    public:
		void Set( int, int, int );
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
```

## `02-w3-sources/DATE_inline.hpp`

```cpp
#pragma once 
#include<iostream>
using namespace std;

int DaysInMonth( int, int ); 

class DATE {
    public:
		void Set(int newYear, int newMonth,int newDay ) {
            month = newMonth;
            day = newDay;
            year = newYear; 
        }
        
        int getMonth() const {
            return month;
        }
        int getDay() const {
            return day;
        }
        int getYear() const {
            return year;
        }
        
        void Print() const {
            const char* MONTHS[] = {"January","February",
            "March","April","May","June","July","Aguest",
            "September","October","November","December"}; 
            cout << MONTHS[month-1] << ' ' << day << ", " 
                 << year << endl << endl;
        }

        void Increment() {
            day++;
            if (day > DaysInMonth(month, year))
            {
                day = 1;
                month++;
                if (month > 12)
                {
                    month = 1;
                    year++;
                }
            }
        }
        
        void Decrement() {  
            day--;
            if ( day == 0 )
            {
                if( month == 1 )
                { 
                     day = 31;
                     month = 12;
                     year--;
                }
                else
                {
                     month--;
                     day = DaysInMonth( month, year );
                }
            }
        }
        
    private:
        int month;
        int day;
        int year;	
};



int DaysInMonth( /* in */ int mo, /* in */ int yr  )
{
    switch (mo)
   {
     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
              return 31;
     case 4: case 6: case 9: case 11:
             return 30;
     case 2:  
          if ((yr % 4 == 0 && yr % 100 != 0) ||yr % 400 == 0)
              return 29;
          else
              return 28;
    }
}
```

## `02-w3-sources/Vector3/Makefile.win`

```text
# Project: 项目1
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe -D__DEBUG__
CC       = gcc.exe -D__DEBUG__
WINDRES  = windres.exe
OBJ      = Vector3/point.o Vector3/Vector3_class.o Vector3/Vector3_struct.o Vector3/Vector3_union.o
LINKOBJ  = Vector3/point.o Vector3/Vector3_class.o Vector3/Vector3_struct.o Vector3/Vector3_union.o
LIBS     = -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib" -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc -g3
INCS     = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = 项目1.exe
CXXFLAGS = $(CXXINCS) -g3 -std=c++11
CFLAGS   = $(INCS) -g3 -std=c++11
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

Vector3/point.o: Vector3/point.cpp
	$(CPP) -c Vector3/point.cpp -o Vector3/point.o $(CXXFLAGS)

Vector3/Vector3_class.o: Vector3/Vector3_class.cpp
	$(CPP) -c Vector3/Vector3_class.cpp -o Vector3/Vector3_class.o $(CXXFLAGS)

Vector3/Vector3_struct.o: Vector3/Vector3_struct.cpp
	$(CPP) -c Vector3/Vector3_struct.cpp -o Vector3/Vector3_struct.o $(CXXFLAGS)

Vector3/Vector3_union.o: Vector3/Vector3_union.cpp
	$(CPP) -c Vector3/Vector3_union.cpp -o Vector3/Vector3_union.o $(CXXFLAGS)
```

## `02-w3-sources/Vector3/Vector3/CMakeLists.txt`

```text
cmake_minimum_required(VERSION 3.22)
project(Vector3)

set(CMAKE_CXX_STANDARD 14)

add_executable(point Vector3_class.cpp point.cpp Vector3_class.hpp Vector3_struct.hpp Vector3_struct.cpp Vector3_union.hpp Vector3_union.cpp)
```

## `02-w3-sources/Vector3/Vector3/point.cpp`

```cpp
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
```

## `02-w3-sources/Vector3/Vector3/Vector3_class.cpp`

```cpp
// vector3.cpp

#include "Vector3_class.hpp"
#include <iomanip>
#include <iostream>
#include <valarray>

// 构造函数
Vector3_class::Vector3_class(float x, float y, float z) : x(x), y(y), z(z) {}

// 获取向量长度
float Vector3_class::getMagnitude() const {
    return sqrt(x * x + y * y + z * z);
}

// 设置向量分量
void Vector3_class::set(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// 返回格式化的字符串
std::string Vector3_class::toString() const {
    char buffer[50];
    std::sprintf(buffer, "%.2f %.2f %.2f", x, y, z);
    return std::string(buffer);
}

// 根据指定格式返回格式化字符串
std::string Vector3_class::toString(const std::string& format) const {
    char buffer[50];
    snprintf(buffer, sizeof(buffer), format.c_str(), x, y, z);
    return std::string(buffer);
}
```

## `02-w3-sources/Vector3/Vector3/Vector3_class.hpp`

```cpp
//
// Created by 96581 on 2024/3/11.
//

#ifndef MAIN_CPP_VECTOR3_CLASS_HPP
#define MAIN_CPP_VECTOR3_CLASS_HPP
#include <string>

class Vector3_class {
public:
    // 数据成员声明
    float x;
    float y;
    float z;
    // 构造函数
    Vector3_class(float x = 0.0f, float y = 0.0f, float z = 0.0f);

    // 成员函数声明
    float getMagnitude() const;
    void set(float x, float y, float z);
    std::string toString() const;
    std::string toString(const std::string& format) const;
};
#endif //MAIN_CPP_VECTOR3_CLASS_HPP
```

## `02-w3-sources/Vector3/Vector3/Vector3_struct.cpp`

```cpp
#include "Vector3_struct.hpp"
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>

float Vector3_struct::getMagnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

void Vector3_struct::set(float xVal, float yVal, float zVal) {
    x = xVal;
    y = yVal;
    z = zVal;
}

std::string Vector3_struct::toString() const {
    char buffer[50];
    std::sprintf(buffer, "%.2f %.2f %.2f", x, y, z);
    return std::string(buffer);
}

std::string Vector3_struct::toString(const std::string& fm) const {
    char buffer[50];
    snprintf(buffer, sizeof(buffer), fm.c_str(), x, y, z);
    return std::string(buffer);
}
```

## `02-w3-sources/Vector3/Vector3/Vector3_struct.hpp`

```cpp
//
// Created by 96581 on 2024/3/11.
//

#ifndef MAIN_CPP_VECTOR3_STRUCT_HPP
#define MAIN_CPP_VECTOR3_STRUCT_HPP

#include <string>
struct Vector3_struct {
    float x, y, z;

    Vector3_struct(float x = 0.0f, float y = 0.0f, float z = 0.0f) : x(x), y(y), z(z) {}

    float getMagnitude() const;
    void set(float x, float y, float z);
    std::string toString() const;
    std::string toString(const std::string& fm) const;
};


#endif //MAIN_CPP_VECTOR3_STRUCT_HPP
```

## `02-w3-sources/Vector3/Vector3/Vector3_union.cpp`

```cpp
#include "Vector3_union.hpp"
#include <cmath>
#include <cstdio>
#include <cstring>

void setVector3Union(Vector3_union& v, float x, float y, float z) {
    v.x = x;
    v.y = y;
    v.z = z;
}

float getMagnitude(const Vector3_union& v) {
    return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

std::string toString(const Vector3_union& v) {
    char buffer[50];
    std::sprintf(buffer, "%.2f %.2f %.2f", v.x, v.y, v.z);
    return std::string(buffer);
}

std::string toString(const Vector3_union& v, const std::string& fm) {
    char buffer[50];
    snprintf(buffer, sizeof(buffer), fm.c_str(), v.x, v.y, v.z);
    return std::string(buffer);
}
```

## `02-w3-sources/Vector3/Vector3/Vector3_union.hpp`

```cpp
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
```

## `02-w3-sources/Vector3/项目1.dev`

```text
[Project]
FileName=项目1.dev
Name=项目1
Type=1
Ver=2
ObjFiles=
Includes=
Libs=
PrivateResource=
ResourceIncludes=
MakeIncludes=
Compiler=
CppCompiler=
Linker=
IsCpp=1
Icon=
ExeOutput=
ObjectOutput=
LogOutput=
LogOutputEnabled=0
OverrideOutput=0
OverrideOutputName=
HostApplication=
UseCustomMakefile=0
CustomMakefile=
CommandLine=
Folders=
IncludeVersionInfo=0
SupportXPThemes=0
CompilerSet=0
CompilerSettings=0000000000000000001000000
UnitCount=7

[VersionInfo]
Major=1
Minor=0
Release=0
Build=0
LanguageID=1033
CharsetID=1252
CompanyName=
FileVersion=
FileDescription=Developed using the Dev-C++ IDE
InternalName=
LegalCopyright=
LegalTrademarks=
OriginalFilename=
ProductName=
ProductVersion=
AutoIncBuildNr=0
SyncProduct=1

[Unit1]
FileName=Vector3\point.cpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=

[Unit2]
FileName=Vector3\Vector3_class.cpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=

[Unit3]
FileName=Vector3\Vector3_class.hpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=

[Unit4]
FileName=Vector3\Vector3_struct.cpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=

[Unit5]
FileName=Vector3\Vector3_struct.hpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=

[Unit6]
FileName=Vector3\Vector3_union.cpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=

[Unit7]
FileName=Vector3\Vector3_union.hpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=
```

## `02-w3-sources/Vector3/项目1.layout`

```text
[Editor_0]
CursorCol=2
CursorRow=23
TopLine=1
LeftChar=1
[Editors]
Order=0
Focused=0
```
