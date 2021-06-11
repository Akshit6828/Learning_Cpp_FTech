#include <iostream>
using namespace std;
class armstrong
{
    private:
        int n,sum,temp,r,c;
    public:
        void input();
};
void armstrong::input()
{
    sum=0;
    cout<<"Enter N";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        cout<<r<<"\n";//how loops works
        c=r*r*r;
        cout<<c<<"\n";//how loop works
        sum=sum+c;
        cout<<sum<<"\n";//how loop works
        n=n/10;
        cout<<n<<"\n";//how loop works
    }
    n=temp;
    if(n==sum)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }
}
 int main()
{
    armstrong p;
    p.input();


}
