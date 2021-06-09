#include <iostream>
using namespace std;

class c
{
 private:
     int x,y,z;

 public:
    c()
    {
        x=1;
        y=1;
        z=1;
    }
    ~c()
    {
        cout<<"Destructing memory";
    }
    void show()
    {
        cout<<"Enter x and y"<<endl;
        cin>>x>>y;
    }
    void get()
    { z=x+y;
     cout<<"Sum is"<<z<<endl;
    }
};
int main()
{
    c p;
    p.show();
    p.get();
    return(0);

}
