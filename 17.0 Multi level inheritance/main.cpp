#include <iostream>
using namespace std;
class c1
{
protected:
    int x,y,z;
public:
    void input()
    {
        cout<<"Enter x and y\n";
        cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum is "<<z;
    }
};
class c2:public c1
{
public:
    void sub()
    {
        z=x-y;
        cout<<"\nDifference is "<<z;
    }
};
class c3:public c2
{
public:
    void multiply()
    {
        z=x*y;
        cout<<"\nProduct is "<<z;
    }
};
int main()
{
    c3 p;
    p.input();
    p.sum();
    p.sub();
    p.multiply();
    return 0;
}
