#include <iostream>
#include<fstream>

using namespace std;
class c1
{

private:
    char name[20];
    int age;
    char address[40];
public:
    void input()
    {
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter age";
        cin>>age;
        cout<<"Enter address";
        cin>>address;
    }
    void show()
    {

        cout<<name<<age<<address;
    }
};

int main()
{
    c1 p;
    ifstream f;
    f.open("x.txt",ios::in);
    f.read((char *)&p,sizeof(p));
    p.show();
    return 0;
}
