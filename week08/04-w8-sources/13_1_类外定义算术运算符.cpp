#include<bits/stdc++.h>
using namespace std;
struct Integer {
    int x;
public:
    Integer(int x=0):x(x) {}
    Integer operator - (const Integer& Int) { return Integer(x-Int.x); }
    Integer operator - () { return Integer(-x); }
    void print() { cout<<x<<endl; }
};
Integer operator+(const Integer& lhs,const Integer& rhs) { return Integer(lhs.x+rhs.x); }
int main()  {
    Integer a=3,b,c;
    b = a + 4;
    c = 5 + a;
    b.print();
    c.print();
    return 0;
}
