#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    if (n<=20)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = n-i; j >= 1; j--)
            {
                cout<<" ";
            }   
            if (i==1 || i==n)
            {
                for (k = 1; k<=n ; k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
            else
            {
                for (l=1 ; l<=n; l++)
                {
                    if (l==1 || l==n)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<" ";
                    }    
                }
                cout<<endl;  
            }   
            cout<<endl;
        }  
    }
    return 0;
}