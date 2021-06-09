#include<iostream>
using namespace std;
class student
{
private:
 char name[20];
 int  age;
public:
    void input()
    {
        cout<<"Enter name and age";
        cin>>name>>age;
    }
    void show()
    {
        cout<<"\n"<<name<<"\t"<<age;
    }
};
int main()
{

    student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        s[i].input();
    }
    cout<<"Name and Age of following people are"<<"\n";
    for(i=0;i<5;i++)
    {
        s[i].show();
    }
    return(0);
}
