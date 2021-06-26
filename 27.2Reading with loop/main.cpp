#include <iostream>
#include<fstream>>

using namespace std;

int main()
{
   char c;
   ifstream f;
   f.open("x.txt",ios::in);
   while(!f.eof())
   {
       f>>c;
       cout<<c;
   }
   f.close();

return 0;
}
