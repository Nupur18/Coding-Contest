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
    int n, rev_num=0;
    cin>>n;
    if (n>=0 && n<=1000000000)
    {
        int i=n, j, digits=0, p;
        while (i!=0)
        {
            j = i%10;
            i = i/10; 
            digits++;
        }
        i = n;
        p = digits-1;
        while (i!=0)
        {
            j = i%10;
            i = i/10; 
            rev_num = rev_num + (j*power(10, p));
            p--;
        }
        cout<<rev_num;
    }
    return 0;
}