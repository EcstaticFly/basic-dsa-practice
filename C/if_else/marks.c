#include <stdio.h>
int main(){
    int a;
    printf("Enter percentage: ");
    scanf("%d",&a);
    // 91-100 Excellent
    // 81-90 very good
    // 71-80 good
    // 61-70 can do better
    // 51-60 average
    // 41-50 below average
    // <40 fail
    if(a>=91 && a<=100){
        printf("Excellent");
    }
    else if(a>=81 && a<=90){
        printf("Very Good");
    }
    else if(a>=71 && a<=80){
        printf("Good");
    }
    else if(a>=61 && a<=70){
        printf("Can Do Better");
    }
    else if(a>=51 && a<=60){
        printf("Average");
    }
    else if(a>=40 && a<=50){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}