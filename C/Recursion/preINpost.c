#include <stdio.h>
void preINpost(int x)
{
    if (x == 0)
        return;
    printf("Pre %d\n", x);
    preINpost(x - 1);
    printf("In %d\n", x);
    preINpost(x - 1);
    printf("Post %d\n", x);
    return;
}
int main()
{
    int n;
    printf("Enter no.: ");
    scanf("%d", &n);
    preINpost(n);
    return 0;
}