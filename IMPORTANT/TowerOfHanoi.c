#include<stdio.h>
void tower(int x, char s, char h, char d){ //s=source,h=helper,d=destination.
if(x==0) return;
tower(x-1,s,d,h);
printf("Move disc %d from %c --> %c\n",x,s,d);
tower(x-1,h,s,d);
return;
}
int main(){
    int n;
    printf("Enter number of discs: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}