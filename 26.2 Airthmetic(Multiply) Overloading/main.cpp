#include <iostream>

using namespace std;
class c1
{

private:
    int x,y,z;
public:
    c1()
    {
        x=1;
        y=1;
        z=1;
    }
    c1 operator *(c1 p)
    {
        c1 t;
        t.x=x*p.x;
        t.y=y*p.y;
        t.z=z*p.z;
        return(t);
    }
    void input()
    {
        cout<<"\nEnter x and y";
        cin>>x>>y;
    }
    void multiply()
    {
        z=x*y;
        cout<<"Product = "<<z<<"\n";
    }
    void show()
    {
        cout<<x<<"   "<<y<<"    "<<z;
    }
};
int main()
{
    c1 p;
    c1 k;
    c1 l;
 p.input();
 p.multiply();
 k.input();
 k.multiply();
 l=p*k;
 l.show();

    return 0;
}
