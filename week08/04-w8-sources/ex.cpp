#include <iostream>
class Fraction
{
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int n, d;
public:
    Fraction(int n, int d = 1) : n(n/gcd(n, d)), d(d/gcd(n, d)) { }
    int num() const { return n; }
    int den() const { return d; }
    Fraction& operator*=(const Fraction& rhs)
    {
        int new_n = n * rhs.n/gcd(n * rhs.n, d * rhs.d);
        d = d * rhs.d/gcd(n * rhs.n, d * rhs.d);
        n = new_n;
        return *this;
    }
};
std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
   return out << f.num() << '/' << f.den() ;
}
int main()
{
   Fraction f1(3, 8), f2(2, 4), f3(12, 2);
   std::cout << f1 << '\n';
}
