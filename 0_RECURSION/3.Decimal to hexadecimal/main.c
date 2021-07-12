 #include <stdio.h>
#include <stdlib.h>
void solve(int n);
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    solve(n);
    return 0;
}
void solve(int n)
{

    if(n>0)
    {
        int z=n%16;
        n=n/16;
        solve(n);

      switch(z)
      {
        case 10:
        printf("A\t");
        break;
        case 11:
        printf("B\t");
        break;
        case 12:
        printf("C\t");
        break;
        case 13:
        printf("D\t");
        break;
        case 14:
        printf("E\t");
        break;
        case 15:
        printf("F\t");
        break;
        default:
        printf("%d\t",z);

        }
    }

}
