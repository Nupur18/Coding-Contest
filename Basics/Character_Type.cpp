#include<iostream>
using namespace std;
void check(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		cout<<'U';
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<'L';
	}
	else
	{
		cout<<'I';
	}
	return;
}
int main() 
{
	char ch;
	cin>>ch;
	check(ch);
	return 0;
}