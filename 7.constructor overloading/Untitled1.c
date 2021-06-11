 #include<iostream>
 using namespace std;
class c
{
private:
 int n,fact;
public:
    c()
    {
    cout<<"\nConstructing Memory in default constructor";
     n=1;
     fact=1;
    }
    c(int n)
    {
        cout<<"\nConstructing Memory in parametric constructor\n";
        fact=1;
        n=1;
    }
    ~c()
    {
        cout<<"Destructing Memory for any of the constructor\n";
    }
    void doself(int n)
    {   int i;
        cout<<"\n Number you have passed as an argument is "<<n;
        for(i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            cout<<"\nFactorial of passed argument is"<<fact<<"\n";

            cout<<"\nEnter n whose factorial is to found";
            cin>>n;
        for(i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            cout<<"Factorial is"<<fact<<"\n";
    }

};

int main()
{
    c k(5); //calling parametric constructor(with argument)//
    k.doself(5);
    return 0;
}
