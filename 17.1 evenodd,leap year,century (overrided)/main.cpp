#include <iostream>

using namespace std;
class evenodd
{
protected:
    int n;
public:
    void calculate()
    {
        cout<<"Enter n to check even odd \n";
        cin>>n;
        if(n%2==0)
        {
            cout<<"Even\n";
        }
        else
        {
            cout<<"Odd\n";
        }
    }
};
class leapyear:public evenodd
{
public:
    void calculate()
    {
    cout<<"Enter year to check\n";
    cin>>n;
    if(n%4==0)
    {
        cout<<"leap year\n";
    }
    else
    {
     cout<<"Not a leap year";
    }
}
};
class leapcentury: public leapyear
{
public:
    void calculate()
    {
        cout<<"Enter century\n";
        cin>>n;
        if((n%100==0)&&(n%400==0))
        {
            cout<<"Leap century\n";
        }
        else
        {
            cout<<"Not a leap Century\n";
        }
    }
};
int main()
{
    leapcentury p;
    p.calculate();//Scope resoluter is used to remove Overriding
    p.evenodd::calculate();//Scope resoluter is used to remove Overriding
    p.leapyear::calculate();//Scope resoluter is used to remove Overriding

    return 0;
}
