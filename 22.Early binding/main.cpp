#include <iostream>
using namespace std;
class c1
{
private:
    int x,y,z;
public:
    void calculate()
    {
        cout<<"Enter x and y";
        cin>>x>>y;
        z=x+y;
        cout<<"Sum is "<<z;
    }
};
class c2:public c1
{
public:
    int a,b,c;
public:
    void calculate()
    {
        cout<<"Enter a and b";
        cin>>a>>b;
        c=a-b;
        cout<<"Subtract is "<<c;
    }
};
int main()
{ int t;

    c1 *p;
    c2 k;
    p=&k;
    p->calculate();
    return 0;
}
