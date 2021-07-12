#include <stdio.h>
#include <stdlib.h>

void calculate(int n);
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    calculate(n);
        return 0;
}
void calculate(int n)
{
    if(n>8)
    {
        int z=n%8;
        n=n/8;
        calculate(n);
        printf("%d\t",z);
    }
    else
    {
        printf("%d\t",n);
    }
}
