#include <stdio.h>
int main(){
    //*
    //**
    //***
    //**** and so on,notice 1st row=1 star, 2nd row=2 star,3rd row=3star;...i.e i=j.
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}