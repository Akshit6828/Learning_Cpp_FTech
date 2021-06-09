#include <iostream>

using namespace std;
class prime
{
private:
    int n,i;
public:
    void check();
};
void prime::check()
{
cout<<"Enter n";
cin>>n;
for(i=2;i<=n-1;i++)
{
    if(n%i==0)
    {
        cout<<"Not prime";
        break;
    }
    else
    {
        if(i==n-1)
        {
            cout<<"Prime";
        }
    }
}
}
int main()
{
    prime p;
    p.check();
    return 0;
}
