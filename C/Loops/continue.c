#include <stdio.h>
int main(){
for(int i=1;i<=100;i++){
  if(i%2==0){
   continue; //not really necessary statement, may be used once in a while. Although break; is really imp.
//continue; means "skip that round" basically whenever i%2==0 happens continue; skips this loop round.
//So,as soon as,say,i=2 comes,i%2==0 becomes true.So, as per continue; inside [if] it skips this round.
}

     printf("%d ",i);
}
    return 0;
}