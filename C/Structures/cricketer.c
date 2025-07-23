#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricket{ //cricket datatype created,typedef can be ued to directly acces the DT bt cricket
        char name[60];
        int age;
        int testmatches;
        float average;
    } cricket;
    cricket arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].testmatches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<=2;i++){
        printf("Name: %s\nAge: %d\nTest Matches: %d\nAverage: %f\n\n",arr[i].name,arr[i].age,arr[i].testmatches,arr[i].average);
    }

    return 0;
}