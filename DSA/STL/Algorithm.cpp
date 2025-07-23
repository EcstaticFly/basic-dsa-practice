#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    vector<int> v={1,3,6,7};
    cout<<binary_search(v.begin(),v.end(),5);
    cout<<endl;

    //Finding lower bound:
    cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    //Finding upper bound:
    cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<endl<<endl;
    int a=21,b=28;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    cout<<"max"<<max(a,b)<<endl;
    cout<<"min"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"Swapped"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;

    cout<<endl;
    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    cout<<endl;

    cout<<"Rotate Vector"<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(auto m:v) cout<<m<<" ";
    cout<<endl<<endl;;

    //Sort array:
    cout<<"Sort array:"<<endl;
    sort(v.begin(),v.end());
    for(auto m:v) cout<<m<<" ";
    cout<<endl<<endl;

    //Sum of elements:
    int p=accumulate(v.begin(),v.end(),0);
    cout<<"SUM: "<<p<<endl;

    //Gcd:
    int m=__gcd(a,b);
    cout<<"gcd of a,b: "<<m<<endl;

    //string to integer and vice versa:
    string r="43221";
    int x=stoi(r);
    cout<<x<<endl;

    //Integer to string:
    int q=12347;
    string l=to_string(q);
    cout<<l<<"  "<<l.length()<<endl;
    cout<<endl;

    //Concatnate string;
    string str1="Suyash";
    string str2="Pandey";
    str1="Mr."+str1+str2;
    cout<<str1<<endl;

}