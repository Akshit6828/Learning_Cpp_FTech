#include <iostream>
using namespace std;
class prime
{
private:
    int n,i,j,f;
public:
    void print()
    {
        cout<<"Enter n";
        cin>>n;
        cout<<"Prime numbers are\n";
        for(i=1;i<=n;i++)
        { f=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
             {
                f=f+1;
             }

        }
        if(f==2)
        {
         cout<<i<<"\t";
        }
        }
    }
};
int main()
{
    prime p;
    p.print();
    return 0;
}
