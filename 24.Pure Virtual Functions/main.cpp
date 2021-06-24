#include <iostream>

using namespace std;
class c1
{
private:
    int x,y,z;
    public:
    virtual void input()=0;
    virtual void sum()=0;
};
class c2:public c1
{
private:
    int a,b,c;
public:
    void input()
    {
        cout<<"Enter a and b";
        cin>>a>>b;
    }
    void sum()
    {
        c=a+b;
        cout<<"Sum is "<<c;
    }
};

int main()
{
    c1 *p;
    c2 k;
    p=&k;
    p->input();
    p->sum();
    return 0;
}
