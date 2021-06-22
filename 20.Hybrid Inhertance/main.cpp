#include <iostream>
using namespace std;
class c1
{
protected:
    float x,y,z;
public:
    void input()
    {
      cout<<"Enter x and y ";
      cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum is "<<z;

    }
};
class c2: virtual public c1
{
public:
    c2()
    {
        cout<<"Constructor of class 2\n";
    }
    void subtract()
    {
       z=x-y;
       cout<<"\nSubtraction product= "<< z;
    }
};
class c3:virtual public c1
{ public:
    c3()
    {
        cout<<"Constructor of class 3\n";
    }
   void multiply()
   {
       z=x*y;
       cout<<"\nProduct is "<<z;
   }
};
class c4:public c3,public c2
 {
   public:
       c4()
       {
           cout<<"Constructor of class 4\n";
       }
       void divide()
       {
           z=x/y;
           cout<<"\nDivide result is "<<z;
       }
 };
int main()
{
    c4 p;
    p.input();
    p.sum();
    p.subtract();
    p.multiply();
    p.divide();
    return 0;
}
