#include<iostream>

using namespace std;

int main()
{	char a;
	cout<< "Enter any thing : ";
	cin >> a;
	if ((a>64&&a<91)||(a>96&&a<123))
	cout << " \n this is a alpabet ";
	else if((a>47&&a<58))
	cout << " \n this is a digit";
	else
	cout << " \n this is special character";
 	return 0;
}
