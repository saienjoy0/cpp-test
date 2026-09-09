#include<bits/stdc++.h>
using namespace std;

class IntArray  {
    int *a; 
    int n;
public:
    IntArray(int n=1):n(n)  {
        a=new int[n];
        for (int i=0;i<n;++i) a[i]=i; 
    }
    IntArray(const IntArray& other) {
    	cout << "aaaaa"  <<endl;
        n=other.n;
        a=new int[n];
        memcpy(a,other.a,sizeof(int)*n);            
    }
    ~IntArray() {
        cout << "release p=" << a <<endl;
        delete[] a;
    }
    int& operator[](int i) {
    	cout << "bbbb"  <<endl;
        if (i>=0 && i < n) return a[i];
        throw std::out_of_range("out of range");
    } 
    const int& operator[](int i) const{
    	cout << "ccccc"  <<endl;
        if (i>=0 && i < n) return a[i];
        throw std::out_of_range("out of range");
    }
    void print() const {
        for (int i=0;i<n;++i) cout<<a[i]<<" ";
        cout<<endl;
    }
};
int main()  {
    IntArray a(4);
    for (int i=0;i<4;i++) a[i]=i+1;
    a.print();
    const IntArray b=a;
    cout << "b[0] = " << b[0] <<endl;
    b.print();
    return 0;
}
