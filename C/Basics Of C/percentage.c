#include <stdio.h>
int main()
{
    float subject1,subject2,subject3,subject4,subject5;
    printf("marks in subject1=  ");
    scanf("%f",&subject1);
    printf("marks in subject2=  ");
    scanf("%f",&subject2);
    printf("marks in subject3=  ");
    scanf("%f",&subject3);
    printf("marks in subject4=  ");
    scanf("%f",&subject4);
    printf("marks in subject5=  ");
    scanf("%f",&subject5);

    printf("Percentage obtained=%f", ((subject1+subject2+subject3+subject4+subject5)/500.0)*100.0);
    return 0;
}