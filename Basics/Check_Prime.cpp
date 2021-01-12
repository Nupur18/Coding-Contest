#include<iostream>
using namespace std;
int main()
{
    int n, i=2;
    cin>>n;
    if (n>2 && n<=1000000000)
    {
        while (i<n)
        {
            if (n%i==0)
            {
                cout<<"Not Prime";
                break;
            }
            i++;
        }
        if (i==n)
        {
            cout<<"Prime";
        }
    }
    return 0;
}