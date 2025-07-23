#include<iostream>
#include<vector>
using namespace std;
int main(){
    //For Loop:

    // vector<int> v(6); //size declared intitially;
    // for(int i=0;i<=7;i++){ //But,we give Loop 8 iterations
    //     cin>>v[i];
    // }
    // for(int i=0;i<=7;i++){
    //     cout<<v[i]<<" ";
    // }
    // //Ab vo size already 6 declare kr diya tha..but vo dynamically adjust ho jaega..agar hum loop 6 se ZYADA baar run krte hai toh.



    // vector<int> v;
    // for(int i=0;i<=4;i++){
    //     int p;
    //     cin>>p;
    //     v.push_back(p);
    // }
    // for(int i=0;i<=v.size()-1;i++){
    //     cout<<v[i]<<" ";
    // }





    // For Each Loop:
    vector<int> v;
    for(int i=0;i<=6;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(auto m:v){
        cout<<m<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+3,90);
    for(auto m:v){
        cout<<m<<" ";
    }
    cout<<endl;
    v.erase(v.end()-3);
    for(auto m:v){
        cout<<m<<" ";
    }








    //While Loop:
    // int i=0;
    // vector<int> v;
    // while(i<=4){
    //     int p;
    //     cin>>p;
    //     v.push_back(p);
    //     i++;
    // }
    // i=0;
    // while(i<=v.size()-1){
    //     cout<<v[i++]<<" ";
    // }


}