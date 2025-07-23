#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of times you want to print: ");
    scanf("%d",&n);
    int i; //we can also declare it directly like for(int i=1,i<+6,i++).But this will limit the 'i' to 'for' operator only. and will not perform print fxn.
    for(i=1;i<=n;i++){
        printf("Hello World\n");
    }
    printf("%d",i); //Here,finally when 'i=n',it undergoes updation for last time(i=i+1) and when loop terminates i++ is printed.
    return 0;
}