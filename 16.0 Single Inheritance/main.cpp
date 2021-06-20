#include <iostream>
using namespace std;
class c1
{
private:
    int x,y,z;
public:
    void input()
    {
        cout<<"Enter x and y\n";
        cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum ="<<z;
    }

};
class c2:public c1
{
private:
    int a,b,c;
    public:
        void get()
        {


    cout<<"\nEnter a and b\n";
        cin>>a>>b;
        }
        void sub()
        {
            c=a-b;
            cout<<"Difference is="<<c;
        }
};


int main()
{
  c2 p;
  p.input();
  p.sum();
  p.get();
  p.sub();
    return 0;
}
