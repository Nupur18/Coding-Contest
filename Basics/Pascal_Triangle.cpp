#include<iostream>
using namespace std;
int factorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    int i=1, result=1;
    while (i<=num)
    {
        result = result*i;
        i++;
    }
    return result;
}
int nCr(int n, int r)
{
    int answer = ((factorial(n))/((factorial(r))*(factorial(n-r))));
    return answer;
}
int main()
{
    int n;
    cin>>n;
    if (n<=10)
    {
        int i, j, k;
        for (i = 0; i < n; i++)
        {
			cout<<"\t";
            for (j = 2*n-2-2*i; j > 0 ; j--)
            {
                cout<<" ";
            }
            for (k = 0; k <= i; k++)
            {
                cout<<nCr(i,k)<<"   ";
            }
            cout<<endl;
        }  
    }
    return 0;
}
