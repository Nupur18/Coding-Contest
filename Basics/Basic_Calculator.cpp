#include<iostream>
using namespace std;
int main()
{
    char ch;
    int n1, n2, result;
    if (n1>=0 && n1<=100000000 && n2>0 && n2<=100000000)
    {
        do
        {
            cin>>ch; 
            switch (ch)
            {
            case '+':
                cin>>n1>>n2;
                result = n1 + n2;
                cout<<result;
                break;
            case '-':
                cin>>n1>>n2;
                result = n1 - n2;
                cout<<result;
                break;
            case '*':
                cin>>n1>>n2;
                result = n1 * n2;
                cout<<result;
                break;
            case '/':
                cin>>n1>>n2;
                result = n1 / n2;
                cout<<result;
                break;
            case '%':
                cin>>n1>>n2;
                result = n1 % n2;
                cout<<result;
                break;      
            case 'x':
                break;
            case 'X':
                break;
            default:
                cout<<"Invalid operation. Try again"<<endl;
                break;
            }
        } while (ch !='X' and ch !='x');
    }
    return 0;
}