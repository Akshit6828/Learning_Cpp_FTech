#include <iostream>
#include<fstream>

using namespace std;


int main()
{
    char x[10];
    ifstream f;
    f.open("x.txt",ios::in);
    f>>x;
    cout<<x;
    f.close();
    return 0;

}
