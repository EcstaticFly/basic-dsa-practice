#include<stdio.h>
int main(){
    int n;
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Power\n6.factorial\nChose a number: ");
    scanf("%d",&n);
    if(n==1){
        int a,b;
        printf("Enter a,b: ");
        scanf("%d %d",&a,&b);
        printf("Sum of a and b: %d",a+b);
    }
    else if(n==2){
        int a,b;
        printf("Enter a,b: ");
        scanf("%d %d",&a,&b);
        printf("Difference b/w a and b: %d",a-b);
    }
    else if(n==3){
        int a,b;
        printf("Enter a,b: ");
        scanf("%d %d",&a,&b);
        printf("a*b: %d",a*b);
    }
    else if(n==4){
        float a,b;
        printf("Enter a,b: ");
        scanf("%f %f",&a,&b);
        printf("a/b: %f",a/b);
    }
    else if(n==5){
        int a,b,product=1;
        printf("Enter base: ");
        scanf("%d",&a);
        printf("Enter power: ");
        scanf("%d",&b);
        for(int i=1;i<=b;i++){
            product=product*a;
        }
        printf("%d raised to power %d is %d",a,b,product);
    }
    else if(n==6){
        int a,p=1;
        printf("Enter a: ");
        scanf("%d",&a);
        for(int i=1;i<=a;i++){
            p=p*i;
        }
        printf("factorial: %d",p);
    }
    else printf("Please enter a valid number.");
    return 0;
}