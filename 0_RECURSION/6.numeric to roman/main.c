#include <stdio.h>

int main()
{
    int n,i=0;
    int x[]={1000,500,100,50,10,5,1};
    char y[]={"MDCLXVI"};
    printf("Enter  n");
    scanf("%d",&n);
    while(n>0)
    {
        while(n>=x[i])
            {
            printf("%c",y[i]);
            n=n-x[i];
            }
            i++;
    }
            return 0;
}
