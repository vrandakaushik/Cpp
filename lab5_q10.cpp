#include<iostream>

using namespace std;

int main()
{	char a;
	cout<< "Enter any thing : ";
	cin >> a;
	if ((a>64&&a<91))
	cout << " \n this is a uppercase alphabet ";
	else if((a>96&&a<123))
	cout << " \n this is a lowercase alphabet ";
 	else
	cout << " \n this is not a alphabet ";

	return 0;
}
