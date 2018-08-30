#include<iostream>

using namespace std;

int main()
{
	int a,b=0,c;
	cout << "\n Enter a number to check is that palindrome : ";
	cin >> c;
	a=c;
	while(a!=0)
	{
		b=(b*10)+a%10;
		a=a/10;
	}
	if(c==b)
	cout << "\n the given number is a palindrome, yes ";
	else
	cout << "\n the given number is not a palindrome ";
	return 0;
}
