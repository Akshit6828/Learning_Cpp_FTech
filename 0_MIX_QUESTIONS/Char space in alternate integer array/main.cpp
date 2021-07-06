#include <iostream>

using namespace std;

int main()
{
    int x[10],i,depend;
    cout<<"Enter 0 to start integer array with integer Else Press 1 to start with space";
    cin>>depend;
    cout<<"Enter elements in Array"<<endl;
        if(depend==0)
        {
          for(i=0;i<10;i=i+2)
          cin>>x[i];
          for(i=1;i<10;i=i+2)
           x[i]=' ';
        }
        else
        {
          for(i=1;i<10;i=i+2)
          cin>>x[i];
          for(i=0;i<10;i=i+2)
          x[i]=' ';
        }
    cout<<"\nThe Array Stored is as follow"<<endl<<endl;
    for(i=0;i<10;i=i+1)
    {
        char check=x[i];

        if(check!=' ')
        {
            cout<<x[i];
        }
        else
        {
            cout<<check;
        }
    }
    if(depend==0)
    {
      for(i=0;i<10;i=i+2)
      {
           for(int j=8;j>i;j=j-2)
           {
                if(x[i]<x[j])
                {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
                }
           }
      }
    }
    else
    {
     for(i=1;i<10;i=i+2)
      {
           for(int j=9;j>i;j=j-2)
           {
                if(x[i]<x[j])
                {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
                }
           }
      }
    }
            cout<<"\n\nAfter sorting array is"<<endl<<endl;
            for(i=0;i<10;i=i+1)
            {
                 char check=x[i];

                 if(check!=' ')
                 {
                 cout<<x[i];
                 }
                 else
                {
                cout<<check;
                }
            }
 if(depend==0)
 cout<<"\n\nThird Largest Element is "<<x[4]<<endl<<endl;
else
   cout<<"\n\nThird Largest Element is "<<x[5]<<endl<<endl;


    return 0;
}
