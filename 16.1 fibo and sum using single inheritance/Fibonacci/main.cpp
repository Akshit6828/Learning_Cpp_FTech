#include <iostream>

using namespace std;
class fibo
{
protected:
    int a,b,c;
public:
    fibo()
    {
        a=1;
        b=1;
        c=1;
    }
    int calculate(int x,int y)
    {
        a=x+y;
        return(a);
    }
};
class fibosum:public fibo
{
   public:
       void start()
       {
         int a=0,b=1,c,n;
         cout<<"Enter number till you wana print fibo"<<"\n"; 
         cin>>n;
         while(a<n)
         {

            cout<<a<<"\t";
            c=calculate(a,b);
            a=b;
            b=c;
        }
       }
};

int main()
{
    fibosum p;
    p.start();
    return 0;
}
