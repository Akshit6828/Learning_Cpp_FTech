#include <iostream>
#include<fstream>
 using namespace std;
int main()
{
    char x[100]="Hello Welcome to file Handling";
    ofstream f;
    f.open("x.txt",ios::out);
    f<<x;
    f.close();
    return(0);
}


