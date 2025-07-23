#include <stdio.h>
int main(){
    //3,12,48,192,..
    int a;
  printf("Enter the number of terms you want: ");
    scanf("%d",&a);
    int b=3;
    for(int i=1;i<=a;i=i+1){
        printf("%d\n",b);
        b=b*4;
    }
    return 0;
}