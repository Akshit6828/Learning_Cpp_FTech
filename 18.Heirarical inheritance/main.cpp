#include <iostream>
using namespace std;
class c1
{
protected:
    int x,y,z;
public:
    void input()
    {
    cout<<"\nEnter x and y";
    cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum is "<<z<<"\n";
    }
};
class c2:public c1
{   public:
    void sub()
    {
        z=x-y;
        cout<<"Difference is ="<<z;
    }
};

class c3:public c1
{
public:
    void multiply()

    {
        z=x*y;
        cout<<"product ="<<z<<"\n";
    }
    void divide()
    {
        z=x/y;
        cout<<"Divide ="<<z<<"\n";
    }
};
int main()
{
    c3 p;
    p.input();
    p.multiply();
    p.divide();
    c2 k;
    k.input();
    k.sum();
    k.sub();
    return 0;
}
