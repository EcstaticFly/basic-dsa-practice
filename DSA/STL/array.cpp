#include<iostream>
#include<array>
using namespace std;

int main(){
    int BasicArray[3]={1,2,3};
    //Array in STL:(Rarely used)(Just know something this stupid EXISTS)
    array<int,4> arr={1,2,3,4};
    int size =arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd index: "<<arr.at(2)<<endl;
    cout<<"First Element: "<<arr.front()<<endl;
    cout<<"Last Element: "<<arr.back()<<endl;
    cout<<"Empty or Not(boolean): "<<arr.empty()<<endl;

}