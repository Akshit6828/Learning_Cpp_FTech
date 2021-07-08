#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
int i,j;
for(i=n;i>0;i--)
 {
    for(j=1;j<=n;j++)
    {
        if(j>=i)
        {
            cout<<"#";
        }
        else
        {
            cout<<" ";
        }

    }
    cout<<"\n";
 }
}

int main()
{
    int n;
    cout<<"Enter n for the Right Aligned Stair_Case to Form";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
