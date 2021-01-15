#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n>0 && n<10)
    {
        int i,j,k,l,x,p,q=1,r=2,s,t=2;
        x = (n+1)/2;
        p=x;
        for (i = 1; i<=n; i++)
        {
            if (i<=x)
            {
                for (j = 1; j<=p; j++)
                {
                    cout<<"*\t";
                }
                for (k = 1; i!=1 && k<=q; k++)
                {
                    cout<<" \t";
                }
                if (i>1)
                {
                    q += 2;
                }
                for (l = p; l>=1; l--)
                {
                    if (i==1 && l==p)
                    {
                        l=x-1;
                    }
                    cout<<"*\t";
                }
                p--;
            }
            else
            {
                if (i==(x+1))
                {
                    s=q-4;
                }
                
                for (j = 1; j<=t; j++)
                {
                    cout<<"*\t";
                }
                for (k = 1; i!=n && k<=s; k++)
                {
                    cout<<" \t";
                }
                if (i<n)
                {
                    s -= 2;
                }
                for (l = r; l>=1; l--)
                {
                    if (i==n && l==r)
                    {
                        l=x-1;
                    }
                    cout<<"*\t";
                }
                r++;
                t++;
            }
            cout<<endl;          
        }   
    }
    return 0;
}