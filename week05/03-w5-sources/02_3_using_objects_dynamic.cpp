#include<iostream>
using namespace std;

class Text {
public:	
     Text(const char* s);
     ~Text();
     void Print();
private:
    string s;	
};

Text::Text(const char* s){
    this->s = string(s);
    cout <<"Creating " << this->s << endl; 
}

Text::~Text() {
    cout <<"Releasing " << this->s << endl; 
}

void Text::Print(){
    cout <<"print " << this->s << endl; 
}

int main() {
    Text* str_ptr = new Text[3]{"on heap 1","on heap 2","on heap 3"};
    
    Text* p = str_ptr;
    p++->Print();
    p->Print();
    
    delete []str_ptr; //重要，数组对象析构 
    //delete str_ptr; 错误  
}
