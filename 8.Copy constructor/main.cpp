#include <iostream>
using namespace std;
class c
{
  private:
   int x,y,z;
  public:
    c()
    {
        x=1;
        y=1;
        z=1;
    }
    c( c&p)
    {
    x=p.x;
    y=p.y;
    z=p.z;
    }
    void input()
    {
        cout<<"Enter x and y";
        cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum is "<<z;
    }
    void show()
    {    z=x+y;
        cout<<"\n"<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"Sum z="<<z<<"\n";
    }

};

int main()
{
    c p;
    p.show();
    c k(p); //p object is passed as an argument//
    k.input();
    k.sum();
    k.show();
    return 0;
}
