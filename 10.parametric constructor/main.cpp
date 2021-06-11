#include <iostream>
using namespace std;

class c
{
private:
    int x,y,z;
public:
    c(int a,int b)
    {
        x=a;
        y=b;
    }
    ~c()
    {
        cout<<"\nDestructing Memory";
    }
    void input()
    {
        cout<<"Enter x and y\n";
        cin>>x>>y;
    }
    void sum()

    {
        z=x+y;
      cout<<"Sum is"<<z;
    }
    void showonly()
    {
        z=x+y;
        cout<<"sum="<<z<<"\n";
    }
};
int main()
{
    c p(2,6);
    p.showonly();
    p.input();
    p.sum();
    p.input();
    p.sum();
    return(0);
}
