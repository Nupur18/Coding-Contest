#include<iostream>
using namespace std;
int main()
{
    int n=0, sum=0;
    while (n>-1000 && n<1000)
    {
        cin>>n;
        sum = sum + n;
        if (sum>0)
        {
            cout<<n<<endl;
        }
        else
        {
            break;
        }        
    }
    return 0;
}