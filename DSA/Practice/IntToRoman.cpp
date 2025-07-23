//Convert an integer 1<=num<=3999 to roman.

#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    cout<<"Enter number b/w 1 & 3999(inclusive): ";
    cin>>num;
    string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hnd[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string thsnd[]={"","M","MM","MMM"};

    cout<<thsnd[num/1000]+hnd[(num%1000)/100]+tens[(num%100)/10]+ones[(num%10)];
    
}