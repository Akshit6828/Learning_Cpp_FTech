#include <iostream>
using namespace std;
class factorial
{
    private:
            int fact,n;
    public:
    void input()
     {
         fact=1;
         cout<<"Enter n";
         cin>>n;
     }
     friend void calculate(factorial p); //Declaring of friend function//
     //As class is a user defined data type hence we are passing class as a data type in the friend function
     // Also p is object for the class type of variable.
};
void calculate(factorial p)
{
    int i;
    for(i=1;i<=p.n;i++)
    {
        p.fact=p.fact*i;     //Definition of class//
                            //->Also private data members are being accessed
    }
cout<<"Factorial is equal to"<<p.fact;
 }
int main()
{
    factorial p;
    p.input();
    calculate(p);//calling of class//
                 //-> Also we note that we need not any object like (p.calculate) to call the friend function
                  //as this function is a independent function which is declared outside the class and thus
                  //it just need the object of the type of variable of the class to pass
       return 0;
}
