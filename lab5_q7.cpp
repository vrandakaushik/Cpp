#include<iostream>

using namespace std;

int main()
{	char a;
	cout<< "Enter any thing : ";
	cin >> a;
	if ((a>64&&a<91)||(a>96&&a<123))
	cout << " \n this is a alpabet ";
	else
	cout << " \n this is not a alpabat";
 	return 0;
}
