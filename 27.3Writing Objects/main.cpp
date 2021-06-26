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
    cout<<name<<"\t"<<age<<"\t"<<address<<"\t";
}
};


int main()
{
    c1 p;
    ofstream f;
    f.open("x.txt",ios::out);
    p.input();
    p.show();
    f.write((char *)&p,sizeof(p));
    f.close();
    return 0;
}
