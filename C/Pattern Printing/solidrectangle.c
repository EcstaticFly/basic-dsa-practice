#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Number of rows: ");
    scanf("%d",&a);
    printf("Enter Number of columns: ");
    scanf("%d",&b);
    // Below code will print ****... a times.
    //Now, if we want to print ****... in different lines, we use nested loops.
    // for(int i=1;i<=a;i++){
    //     printf("*");
    // }
    for(int i=1;i<=a;i++){ //OUTER LOOP signifies number of lines or rows.
    for(int i=1;i<=b;i++){ //INNER LOOP signifies number of * in each line i.e number of columns.
        printf("* ");
    }
    printf("\n"); //har row ke baad dusri line mein shift krne ke liye.
    }
    return 0;
}