#include <iostream>

using namespace std;
class c1
{
private:
    static int x,y,z;
public:
    static void input()
    {
        cout<<"Enter x and y";
        cin>>x>>y;
    }
    static void sum()
    {
        z=x+y;
        cout<<"Sum is "<<z;
    }
};
int c1::x=1;
int c1::y=1;
int c1::z=1;

int main()
{
    c1::input();
    c1::sum();
    return 0;
}
