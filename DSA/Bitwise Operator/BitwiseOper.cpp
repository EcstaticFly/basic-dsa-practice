#include<iostream>
using namespace std;

int main(){
    int a=4,b=6;

    cout<<"a&b(AND): "<<(a&b)<<endl;
    cout<<"a|b(OR): "<<(a|b)<<endl;
    cout<<"~a(NOT): "<<~a<<endl;
    cout<<"a^b(XOR): "<<(a^b)<<endl;

    cout<< (17>>1) <<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;
}