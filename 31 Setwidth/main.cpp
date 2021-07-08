#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main()
{
    string s1 = "Akshit";
    char s2[10]= "Akki";
    int x=1234;
    int y =123;
    cout<<setw(10)<<s1<<"\t"<<setw(5)<<x<<endl;
    cout<<setw(10)<<s2<<"\t"<<setw(5)<<y<<endl;
    return 0;
}
