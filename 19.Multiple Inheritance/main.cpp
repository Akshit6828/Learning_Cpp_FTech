#include <iostream>

using namespace std;
class c1
{
protected:
    int x,y,z;
public:
    c1()
    {
        cout<<"Constructing memory for c1\n";
        x=1;
        y=1;
        z=1;
    }
    ~c1()
    {
        cout<<"Destructing Memory for c1\n";
    }
    void input()
    {
        cout<<"Enter x and y\n";
        cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum  ="<<z;
    }
};
class c2
{
protected:
    int a,b,c;
public:
    c2()
    {
     cout<<"Constructing memory for c2\n";
    a=1;
    b=1;
    c=1;
    }
    ~c2()
    {
        cout<<"Destructing memory for c2\n";
    }
    void get()
    {
        cout<<"\n\nEnter a and b\n";
        cin>>a>>b;
    }
    void subtract()
    {
        c=a-b;
        cout<<"Difference is "<<c<<"\n";    }
};
class c3:public c1,public c2
{
public:
    c3()
    {
        cout<<"Constructing memory for c3\n";//It will follow (BASE + DERIEVED)Or(PARENT->CHILD) Rule of Constructor under inheritance.
    }
    ~c3()
    {
        cout<<"Destructing Memory for c3\n";//It will follow (DERIEVED + BASE) or(CHILD->PARENT)Rule of Constructor under inheritance.
    }
    void multiply()
    {
        z=x*y;
        cout<<"\nProduct is "<<z<<"\n";
    }
    void divide()
    {
        c=a/b;
        cout<<"Divided result is "<<c<<"\n";
    }
};
    int main()
{
    c3 p;
    p.input();
    p.sum();
    p.multiply();
    p.get();
    p.subtract();
    p.divide();
    return 0;
}
