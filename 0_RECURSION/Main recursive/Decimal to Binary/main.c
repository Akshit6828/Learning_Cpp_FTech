#include <stdio.h>
#include <stdlib.h>

void calculate(int n);
int main()
{
    int n,r;
    printf("Enter decimal number\n");
    scanf("%d",&n);
    calculate(n);

    return 0;
}
void calculate(int n)
{
    if(n>0)
    {
       int z=n%2;
         n=n/2;
        calculate(n);
        printf("%d  ",z);
    }
}
