#include<iostream>
using namespace std;
int main()
{
    int n1, n2, x, count;
    cin>>n1>>n2;
    for (int i = 1, count = n1; count>0; i++)
    {
        x = 3*i + 2;
        if (x%n2 != 0)
        {
            cout<<x<<endl;
            count--;
        }
    }
}
     