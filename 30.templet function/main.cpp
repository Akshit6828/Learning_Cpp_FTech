//------------ Implementing tempelate function
#include <iostream>

using namespace std;
class c1
{
private:
    int x,y,z;
public:
    int a,b;
    template<class t>
    void calculate(t a,t b)
    {
        x=a;
        y=b;
        z=x+y;
        cout<<"Sum is ="<<z;
    }
};

int main(){ 
c1 p;
p.calculate<int>(10,20);
p.calculate <float>(10.10,20.20);


    return 0;
}
