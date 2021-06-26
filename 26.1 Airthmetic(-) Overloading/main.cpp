#include <iostream>

using namespace std;
class c1
{
private:
    int x,y,z;
public:
    c1 operator -(c1 p)
    {
        c1 t;
        t.x=x-p.x;
        t.y=y-p.y;
        t.z=z-p.z;
        return(t);
    }
 void input()
 {
     cout<<"\nEnter x and y";
     cin>>x>>y;
 }
 void sub()
 {
     z=x-y;
     cout<<"\nSubtracted result is "<<z;
 }
 void show()
 {
     cout<<"\nShowing\n";
     cout<<x<<" "<<y<<" "<<z;
 }
};

int main()
{
    c1 p;
    c1 k;
    c1 t;
    p.input();
    p.sub();
    k.input();
    k.sub();
    t=p-k;
    t.show();
    return 0;
}
