#include <iostream>

using namespace std;
class palindrome
{
private:
    int n,r,c,x;
public:
    void check();
};
void palindrome::check()
{
    cout<<"Enter the number\n";
    cin>>n;
    c=n;
    r=0;
    while(c>0)
    {
        r=r*10;
        r=r+(c%10);
        c=c/10;
    }
        if(n==r)
        {
            cout<<"Palindrome\n";
        }
        else
        {
            cout<<"Not Palindrome\n";
        }
        cout<<"Size of class = ";
        x=sizeof(palindrome);
        cout<<x;

}

int main()
{
    palindrome p;
    p.check();
        return 0;
}
