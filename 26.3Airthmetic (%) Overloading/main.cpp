#include <iostream>

using namespace std;
class c1
{
private:
    int x,y,z;
public:
    c1 operator %(c1 p)
    {
        c1 t;
        t.x=x%p.x;
        t.y=y%p.y;
        t.z=z%p.z;
        return(t);

    }
    void input()
    {
        cout<<"\nEnter x and y";
        cin>>x>>y;
    }
    void remainder()
    {
        z=x%y;
        cout<<"Remainder is = "<<z;
    }
    void show()
    {
        cout<<"\nShowing Remainder";
        cout<<z<<"\t";
    }

};

int main()
{
    c1 p;
    c1 k;
    c1 l;
    p.input();
    p.remainder();
    k.input();
    k.remainder();
    l=p%k;
    l.show();
    return 0;
}
