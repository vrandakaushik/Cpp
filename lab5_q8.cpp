#include<iostream>

using namespace std;

int main()
{	char a;
	bool flag=0;
	cout<< "Enter any thing : ";
	cin >> a;
	if ((a>64&&a<91)||(a>96&&a<123))
	{
		char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
		for(int i=0;i<10;i++)
		if(a==vowel[i]) 
		flag=1;
		if(flag)
		cout << "\nthis is a vowel.";
		else
		cout << "\nthis is a consonant.";
	}
	else
	cout << " \n this is not a alpabat";
 	return 0;
}
