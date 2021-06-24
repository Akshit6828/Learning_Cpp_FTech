#include <iostream>
using namespace std;
class c1
{
public:
    int x,y,z;
public:
    c1()
    {
        x=1;
        y=1;
        z=1;
    }
    c1 operator +(c1 p)
    {
        c1 t;
        t.x=x+p.x;
        t.y=y+p.y;
        t.z=z+p.z;
        return(t);
    }
    void input()
    {
        cout<<"\nEnter x and y";
        cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum is ="<<z<<"\n";
    }
    void show()
    {
        cout<<"individually added variables(x,y,z) are\n";
        cout<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z;
    }
};

int main()
{
    c1 p;
    c1 k;
    c1 l;
    p.input();
    p.sum();
    k.input();
    k.sum();
    l=p+k;
    l.show();
    return 0;
}
