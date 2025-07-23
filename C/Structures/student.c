#include<stdio.h>
#include<string.h>
typedef struct student{
        int roll;
        char name[50];
        char department[15];
        char course[15];
        int year;
    } student;
void check(student x, student y){
    char d1[40],d2[40];
    strcpy(d1,x.department);
    strcpy(d2,y.department);
    int p=strlen(d1),q=strlen(d2),m=0;
    if(p!=q){
        printf("NO\n");
        return;
    }    
    else{
        for(int i=0;i<=p-1;i++){
            if(d1[i]!=d2[i]){
                m=1;
                printf("NO\n");
                break;
            }
        }
        if(m==0) printf("YES\n");
        return;
    }
}

int main(){
    student x,y;
    strcpy(x.department,"ECE");
    strcpy(y.department,"CSE");
    check(x,y);
    return 0;
}