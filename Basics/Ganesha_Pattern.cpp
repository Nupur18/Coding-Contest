#include<iostream>
using namespace std;
int main ()
{ 
    int n,h,i,j ;
    cin>>n;
    h=(n+1)/2;
    if ((n>=5) && (n<=99) && (n%2!=0))
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==1)
                {
                    if (j==1)
                        cout<<"*";
                    else if ((j>=h)&&(j<=n))
                        cout<<"*";
                    else
                        cout<<" ";
                }          
                else if(i<h)
                {
                    if(((j==1)||(j==h)))
                        cout<<"*";
                    else
                        cout<<" ";
                }
                else if((i==h)&&(j<=n))
                {
                    cout<<"*";
                }
                else if ((i>h)&&(i<n))
                {
                    if ((j==h)||(j==n))
                        cout << "*";
                    else
                        cout<<" ";
                }
                else if (i==n)
                {
                    if (j<=h)
                        cout<<"*";
                    else if (j==n)
                        cout<<"*";
                    else
                        cout<<" ";
                }
            } 
            cout<<endl;
        }
    }
    return 0;
}
