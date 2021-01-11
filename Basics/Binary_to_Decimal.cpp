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
    int num;
    cin>>num;
    if (num>0 && num<=1000000000)
    {
        int i=num, j, digits=0, nd=0, p=0;
        while (i!=0)
        {
            j = i%10;
            i = i/10; 
            p = j*((power(2,digits)));
            nd = nd + p;
            digits++;
        }
        cout<<nd;
    }
    return 0;
}