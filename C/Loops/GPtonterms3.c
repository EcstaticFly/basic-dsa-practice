#include <stdio.h>
int main(){
    //100,50,25,...
    float n;
    printf("Enter the number of terms you want: ");
    scanf("%f",&n);
    float a=100.0;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a*0.5;
    }
    return 0;
}