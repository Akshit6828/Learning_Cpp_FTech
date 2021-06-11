#include <iostream>

using namespace std;
class c1
{
private:
    int x,y,z;
public:
    c1()
    {   cout<<"Constructing memory\n";
        x=10;
        y=1;
        z=1;
    }
    ~c1()

    {
        cout<<"\nDestructing Memory";
    }
    void input()
    {
        cout<<"Enter x and y";
        cin>>x>>y;
    }
    void sum()
    {
        z=x+y;
        cout<<"Sum is equal to "<<z;
    }
};
int main()
{
    c1 *p; //pointer type object as it cant call constructor as it will only get 2 bytes.
    p=new c1();//"new" is a dynamic memory allocator
    p->input();
    p->sum();
    delete(p);//delete works as dynamic memory deallocator
    return 0;
}
