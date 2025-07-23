#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n; //m:rows,n:cols

    //Creation of 2D array:
    int **arr=new int*[m]; //m-pointers created(for each row)

    for(int i=0;i<m;i++){
        arr[i]=new int[n]; //each of the m-pointers get an n-sized array(m*n matrix).
    }

    //Taking i/p:
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    //Output:
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    //Releasing Memory:
    for(int i=0;i<m;i++){ 
        delete []arr[i]; //Deletes all the n-sized array associated with each of the m-pointers.
    }
    delete []arr; //Deletes the array of m-pointers.
    


    

}