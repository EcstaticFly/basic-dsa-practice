#include <stdio.h>
int main(){
    //print AP->100,97,94,...upto all +ve terms.
    // int a=34; since,34th term=+41 is last +ve term. 
    int b=100;
    for(int i=1;b>0;i++){ //b>0 condition will give the same result as i<=a [where a=34].
        printf("%d ",b);
        b=b-3;
    }
    return 0;
}