#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    x=10;
    y=0;
    try
    {
        z=x/y;
        cout<<z<<"try success";
    }
    catch(exception e1)
    {
        cout<<"catch";
    }
    return 0;
}
