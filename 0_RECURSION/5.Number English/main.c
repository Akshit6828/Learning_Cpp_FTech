 #include <stdio.h>
#include <stdlib.h>
void english(int );
int main()
{
    int n,e;
    printf("Enter n");
    scanf("%d",&n);
    e=n;
    english(e);
    return 0;
}
void english(int e)
{
    int n,z;
    int op,tp,hp;
    if(e>100)
    {
     hp=e/100;
     int z=hp;
     goto print;
     e=e-100;
     english(e);
    }
    else if(e>10&&e<100)
    {
     tp=e/10;
     e=tp;
     z=e;
     goto print;
     e=e%10;
     english(e);
    }
    else
    {
        z=e;
        goto print;
    }
    print:
    switch(z)
    {

    case 1:
    printf("One\t");
    break;
    case 2:
    printf("Two\t");
    break;
    case 3:
    printf("Three\t");
    break;
    case 4:
    printf("Four\t");
    break;
    case 5:
    printf("Five\t");
    break;
    case 6:
    printf("Six\t");
    break;
    case 7:
    printf("Seven\t");
    break;
    case 8:
    printf("Eight\t");
    break;
    case 9:
    printf("Nine\t");
    break;
    default:
    printf("Zero\t");
    }
}
