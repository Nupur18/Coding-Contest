#include<iostream>
using namespace std;
int main()
{
    int n1, n2, x, gcd;
    cin>>n1>>n2;
    if (n1>0 && n1<1000000000 && n2>0 && n2<1000000000)
    {
        if (n1>n2)
        {
            x = n2;
        }
        else
        {
            x = n1;
        }
        for (int i = 1; i <= x; i++)
        {
            if (n1%i==0 && n2%i==0)
            {
                gcd = i;
            }  
        }
        cout<<gcd;
    }
    return 0;
}

