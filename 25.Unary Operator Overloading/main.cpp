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
        cout<<"Constructor\n";
    }
    void operator ++()
    {
       x++;
       y++;
       z++;
       cout<<"\nAdded\n";
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
};

int main()
{
    c1 p;
    p.input();
    p.sum();
    ++p;
    p.input();
    p.sum();
    return 0;
}
