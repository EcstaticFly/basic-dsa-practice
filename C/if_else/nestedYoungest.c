#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter age of Ram: ");
    scanf("%d", &a);
    printf("Enter age of Shyam: ");
    scanf("%d", &b);
    printf("Enter age of Ajay: ");
    scanf("%d", &c);
    if(a<b){ //b out of race.
        if(a<c){
            printf("Ram is youngest.");
        }
        else{ //a>c.
        printf("Ajay is youngest.");
        }
    }
    else{ //a>b.
    if(b>c){
    printf("Ajay is youngest.");
    }
    else{ //c>b
    printf("Shyam is youngest.");
    }
    }
    return 0;
}