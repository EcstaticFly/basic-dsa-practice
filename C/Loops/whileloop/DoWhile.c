#include <stdio.h>
int main(){
    int i=10;
    // while(i<10){ //Since 10 is not less than 10. So, code will not run even once.
    //     printf("YO!");
    //     i++;
    // }
    do{ //But here,Code will run ONCE no matter if condition is possible or not.
        printf("YO!"); 
        i++;
    } while(i<10); //i=10 and i<10 still shouldn't run but [do] operator runs it once without considering any condition.
    //And then, it puts the code on loop if condition satifies.
    //First time:Just do it without caring about conditions.
    //Then, put it on loop if the condition satisfies.
    //So, normally [while] aur [do-while] mein boht farq nhi hota.Agar tumhe ek baar chalana hi chalana hai code, tb do use kr lo.
    return 0;
}