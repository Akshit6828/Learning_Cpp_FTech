#include <iostream>

using namespace std;
class c1
{ private:
    int x,y,z;
public:
c1()
  {  cout<<"\nConstructor c1";
    x=1;
    y=1;
    z=1;
  }
  ~c1()
  {
      cout<<"\ndestructing d1";
  }
};
class c2:public c1
{
private:
    int a,b,c;
public:
        c2()
        {   cout<<"\nconstructor c2";
            a=1;
            b=1;
            c=1;
        }
        ~c2()
        {
            cout<<"\ndestructing d2";
        }
};
int main()
{
    c2 p;
    return 0;
}
