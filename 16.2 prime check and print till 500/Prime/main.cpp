#include <iostream>
using namespace std;
class prime
{
private:
    int n;
public:
    int check(int a)
    {
    n=a;
    int i;
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            return (0);
        }
        else
        {
           if(i==n-1)
          {
             return(1);
          }
        }
    }
    }
};
class primelist:public prime
{
public:
    void list()
    {
        int count =0;
        int i;
        for(i=1; ;i++)
        {
            if(check(i))
            {
               count++;
               cout<<" "<<i;
            }

            if(count==500)
            {
                break;
            }
        }
    }
};

int main()
{
    primelist  p;

    p.list();
    return 0;
}
