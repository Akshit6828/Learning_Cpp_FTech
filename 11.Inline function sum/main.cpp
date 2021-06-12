#include <iostream>
using namespace std;
class c
{

private:
    int x,y,z;
public:
    inline void input()
    {
        cout<<"Enter x and y\n";
        cin>>x>>y;
    }
    inline void sum()
    {
        z=x+y;
        cout<<"\nSum is "<<z;
    }
};

int main()
{
    c p;
    p.input();
    p.sum();
    return 0;
}
