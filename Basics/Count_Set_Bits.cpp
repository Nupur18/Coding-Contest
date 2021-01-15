#include<iostream>
using namespace std;
int main()
{
    int test,n,i,no,res,count;
	cin>>test;
    for (i = 1; i <= test; i++)
    {
        cin>>n;
        no = n;
        count=0;
        while (no)
        {
            res = 1&no;
            no = no>>1;
            count = count + res;
        }
        cout<<count<<endl;
    }
    return 0;  
}