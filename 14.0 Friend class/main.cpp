#include<iostream>
using namespace std;
class c1
{
private:
    int x,y,z;
public:
    friend class c2;
    void input()
    {

        cout<<"Enter x and y";
        cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum is "<<z<<"\n";
    }
    };
    class c2
    {
 public:
    void sub()
    {
        c1 k;
        k.input();
        k.sum();
        k.z=k.x-k.y;
        cout<<"Subtract ="<<k.z;
    }
    };
int main()
{
    c2 p;
    p.sub();
    return 0;

}
