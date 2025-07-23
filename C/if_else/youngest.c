#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter age of Ram: ");
    scanf("%d",&a);
    printf("Enter age of Shyam: ");
    scanf("%d",&b);
    printf("Enter age of Ajay: ");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("Ram is the youngest among the three.");
        
    }
    if(b<a && b<c){
        printf("Shyam is the youngest among the three.");

    }
    if(c<a && c<b){
        printf("Ajay is the youngest among the three.");
    }
    return 0;
}