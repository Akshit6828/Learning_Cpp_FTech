#include <iostream>
#include<fstream>
using namespace std;

int main()
{
   char c;
   ifstream f1;
   ofstream f2;
   f1.open("x.txt",ios::in);
   f2.open("y.txt",ios::out);
   while(!f1.eof())
   {
    f1>>c;
    f2<<c;
   }
   f1.close();
   f2.close();
    return 0;
}
