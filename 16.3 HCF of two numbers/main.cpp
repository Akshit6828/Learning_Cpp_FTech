#include <iostream>
using namespace std;
class c1
{
  protected:
    int x,y;
  public:
    void input()
    {
        cout<<"Enter x and y";
        cin>>x>>y;
    }
};
class c2: public c1
{
public:
    void solve()
    {
        int i=1,pos;
        cout<<"HCF is";
        while(i<=x&&i<=y)
        {
            if(x%i==0&&y%i==0)
            {
                pos=i;
            }
            i++;
        }
        cout<<pos;
    }

};

int main()
{
    c2 p;
    p.input();
    p.solve();
    return 0;
}
