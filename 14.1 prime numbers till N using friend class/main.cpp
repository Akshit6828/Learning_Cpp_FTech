#include <iostream>
using namespace std;
class prime
{
private:
    int n,f;
public:
    friend class solve;
    void input()
    {
        cout<<"Enter till prime numbers yo want ";
        cin>>n;
    }
};
class solve
{
public:
    void print()
    {
        int i,j;
         prime k;
         k.input();
        for(i=1;i<=k.n;i++)
        {
            k.f=0;
          for(j=1;j<=k.n;j++)
          {
            if(i%j==0)
            {
             k.f=k.f+1;
            }
          }
             if(k.f==2)
             {
              cout<<i<<"\t";
             }
        }
    }
};
int main()
{
    solve p;
    p.print();
    return(0);
}

