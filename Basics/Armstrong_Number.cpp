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
void armstrong(int n)
{
    int i=n, j, digits=0, number=0, p=0;
    while (i!=0)
        {
            j = i%10;
            i = i/10; 
            digits++;
        }
    i=n;
    while (i!=0)
        {
            j = i%10;
            i = i/10; 
            p = power(j,digits);
            number = number + p;
        }
    if (number==n)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return;
}
int main()
{
    int num;
    cin>>num;
    if (num>0 && num<1000000000)
    {
        armstrong(num);
    }
    return 0;
}