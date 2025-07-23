#include <stdio.h>
int main(){
    //4,7,10,13,16,19...
    int a;
    printf("Enter number of terms you want: ");
    scanf("%d",&a);
    for(int i=4;i<=4+(a-1)*3;i=i+3){
        printf("%d ",i);
    }
    return 0;
}