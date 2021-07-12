 #include <stdio.h>
#include <stdlib.h>
void print_English(int );


void solve(int n){
    if(n==0){
        return;
    }
     else{
         int t = n%10;
         solve(n/10);
         print_English(t);
     }
}

int main()
{
    int n,e;
    printf("Enter n");
    scanf("%d",&n);
    solve(n);
    return 0;
}
void print_English(int e){
    switch(e)
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
