#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b;
    float k;
    printf("1.Add\n2.Subtract\n3.Square Root\nEnter a number(1 to 3): ");
    scanf("%d",&n);
    switch(n){
        case 1 :
        printf("Enter a,b: ");
        scanf("%d %d",&a,&b);
        printf("Sum: %d",a+b);
        break;
        case 2 :
        printf("Enter a,b: ");
        scanf("%d %d",&a,&b);
        printf("Difference b/w a and b: %d",a-b);
        break;
        case 3 :
        printf("Enter number: ");
        scanf("%f",&k);
        float m= sqrt(k);
        printf("%f",m);
        break;
        default :
        printf("Enter valid number");
    }
    return 0;
}

// #include<stdio.h>
// int add(int x, int y){
//     int z= x+y;
//     return z;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d",add(a,b));
//     return 0;
// }

// int a=1;
// int v= a++ + ++a + ++a;
// printf("%d",v);
// return 0;
// }