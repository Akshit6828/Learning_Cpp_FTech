// Problem URL: https://www.codechef.com/problems/HS08TEST
#include <iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main() {
	 int X;
	 if(X<0)
     {

         X=-1*X;
     }
	 float Y;
	 if(Y<0)
     {
         Y=-1*Y;
     }
	cin>>X; cin>>Y;
     if(Y<0)
	 {
	     Y = -Y;
	 }
	if(X%5==0&&X+0.50<=Y)
	{
	    if(X<Y)
	    {
	    Y=Y-X;
	    Y=Y- 0.50;
	    cout<<setprecision(2)<<fixed<<Y;
	    }
	}
	else
	{
	   cout<<setprecision(2)<<fixed<<Y;
	}
	return 0;
}
