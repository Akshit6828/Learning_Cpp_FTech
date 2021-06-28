#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    char x[10]="Hey";
    ofstream f;
    f.open("x.txt",ios::app);
    f<<x;
    f.close();
    return 0;
}
