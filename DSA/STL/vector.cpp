#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    // cout<<"Size: "<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"Size: "<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"Size: "<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"Size: "<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"Size: "<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"Size: "<<v.capacity()<<endl;

    // cout<<"No. of elements "<<v.size()<<endl;

    
    //Intialising size & default value of elements of vector:
    vector<int> a(5,1);
    for(auto m:a){
        cout<<m<<" ";
    }

    //To copy a vector into another vector:
    vector<int> luffy(a);
    for(auto m: luffy){
        cout<<m<<" ";
    }

    


}