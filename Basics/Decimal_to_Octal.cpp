#include<iostream>
using namespace std;
int power(int x, int y)
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result = result*x;
    }
    return result; 
}
int main()
{
    int n;
    cin>>n;
    if (n>0 && n<=1000000000)
    {
        int i=n, j, digits=0, p=0, k=n, octal=0;
        while (i!=0)
        {
            j = i%10;
            i = i/10; 
            digits++;
        }
        while (k!=0)
        {
            j = k%8;
            k = k/8; 
            octal = octal + (j*power(10, p));
            p++;
        }
        cout<<octal;
        return 0;
    }
}