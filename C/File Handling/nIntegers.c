#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    int *p=ptr;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    for(int i=0;i<=n-1;i++){
        printf("%d",*p);
        p++;
    }
    return 0;
}