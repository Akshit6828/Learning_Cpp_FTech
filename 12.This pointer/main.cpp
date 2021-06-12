#include <iostream>
using namespace std;
class c
{
 private:
 int x,y,c;
 public:
    void calculate(int x,int y)
    {
    cout<<"Address of the current object is "<<this<<endl;
    this-> x=x;
    this->y=y;
    cout<<"Sum is" <<x+y;
    }
};
int main()
{
    c p;
    c X;
  //  X =p.calculate(2,3);//Perform Explicit call
    p.calculate(5,6);//Implicit Call
    return 0;
}
