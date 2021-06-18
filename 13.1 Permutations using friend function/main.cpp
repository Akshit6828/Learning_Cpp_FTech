#include <iostream>
using namespace std;

class permutation
{
private:
    int x[3];
public:
    void assign()
    {
        cout<<"Assign Values\n";
        cout<<" Enter first, second and third number";
        cin>>x[0]>>x[1]>>x[2];

    }
    friend void print(permutation p);//friend function declaration
};
void print(permutation p)
{    cout<<"Checking value\t"<<p.x[0]<<"\t"<<p.x[1]<<"\t"<<p.x[2]<<"\n";
    int i,j,k;
    cout<<"Permutations are\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
               {
                continue;
               }
        for(k=0;k<3;k++)
        {
            if(i==k||k==j)
             {
               continue;
             }
              cout<<p.x[i]<<"\t"<<p.x[j]<<"\t"<<p.x[k]<<"\t";
        }
        cout<<endl;
        }

    }

}
int main()
{
   permutation p;
   p.assign();
   print(p);
    return 0;
}
