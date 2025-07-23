#include <stdio.h>
int main(){
    double x,y;
    printf("Enter x: ");
    scanf("%lf",&x);
    printf("Enter y: ");
    scanf("%lf",&y);
    if(y==0 && x==0){
        printf("(%lf,%lf) lies on origin.",x,y);
    }
    else if(x==0){
        printf("(%lf,%lf) lies on y-axis",x,y);
    }
    else if(y==0){
        printf("(%lf,%lf) lies on x-axis.",x,y);
    }
    else{
        printf("(%lf,%lf) does not lie on x-axis or y-axis.",x,y);
    }
    return 0;
}