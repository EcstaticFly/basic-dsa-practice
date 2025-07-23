#include<stdio.h>
int main(){
    int mark[10];
    for(int i=0;i<=9;i++){
        printf("Enter marks of roll no. %d: ",i);
        scanf("%d",&mark[i]);
    }
    for(int i=0;i<=9;i++){
        if(mark[i]<35){
            printf("Roll no.: %d\n",i);
        }
    }
    return 0;
}

//Another way to write array: int b=10,arr[b]; 