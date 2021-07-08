#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    s:
    int n,c;
    int i;
    int sum=0;
    int check;

    cout<<"Enter till the number you want to have sum";
    cin>>n;
    cout<<"Enter 1 to execute for loop \n 2 to execute while\n 3 to execute do while loop for odd number sum\n ";
    cin>>c;
    label:
    switch(c)
    {
    case 1:
        {
            // Just checking if empty brackets would do anything new.
        }
        for(i=0;i<=n;i++)
        {
        sum=sum+i;
        }
        cout<<"Sum through for loop is "<<sum;
        cout<<"\nPress 1 to Sum again";
        cin>>c;
        if(c==1)
        goto s;
        break;
    case 2:
        {
         i=0;
        while(i<=n)
        {
            sum=sum+i;
            i++;
        }
        cout<<"Sum through while loop is= "<<sum;
        cout<<"\nPress 1 to Sum again";
        cin>>c;
        if(c==1)
        goto s;
        break;
        }
    case 3:
        {
         i=2;
        check =1;
        do
        {
            sum=sum+i;
            i=i+2;
            check++;
        }
        while(check<=n);
        cout<<"Sum of even through do-while is "<<sum;
        cout<<"\nPress 1 to Sum again";
        cin>>c;
        goto s;
            break;
        }
    default:
        {
            again:
          cout<<"Please enter correct choice" ;
          cin>>c;
          if(c==1||c==2||c==3)
          {
              goto label;
          }
          else
            goto again;
        }

    }


    return 0;
}
