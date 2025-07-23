#include <stdio.h>
int main(){
    //1,1,2,3,5,8,13,21,34,55,89,...
    int a;
    printf("Enter the term you want: ");
    scanf("%d",&a);
    int b=1;
    int c=1;
    int sum=1;
    for(int i=1;i<=a-2;i++){ //Bcoz we were getting the (a+2)th term in output for entering a.Like it was giving 5 as 3rd fibonacci no.
    //This is bcoz loop is running from 2,3,5,8... as we have already taken 1,1 as input so it is running at 2 terms ahead of us.
    //So, we make i<=a-2. 
        sum=b+c;
        b=c;
        c=sum;
    }
    printf("The %dth fibonacci number is %d",a,sum);
    return 0;
}