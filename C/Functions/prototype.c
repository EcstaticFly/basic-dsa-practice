#include<stdio.h>
int main(){
    void fun(); //ye daalne ke baad fun() chahe upr likho ya neeche koi farq nhi padta,code chalega
    fun(); //so,kabhi tumhare pass multiple fxns hue to tum ise likh do,fir fxn chahe jahan likho koi tension nhi.
    return 0;
}
void fun(){ //usually ise main() ke upar likha jata hai.But prototype se tum ise kahin bhi likh skte ho.
    printf("Hello");
    return;
}