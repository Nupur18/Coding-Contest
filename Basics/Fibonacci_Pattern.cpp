#include<iostream>
using namespace std;
int main ()
{
    int n, F0=0, F1=1, i=0, temp, j;
    cin>>n;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<F0<<"\t";
            temp = F0;
            F0 = F1;
            F1 = temp + F1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}