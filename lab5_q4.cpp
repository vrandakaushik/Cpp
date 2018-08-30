#include<iostream>

using namespace std;

int main(){
	int a;
	cout << "\nEnter a number : ";
	cin >> a;
	if(!(a%5))
	cout << "\n this is divisible by 5";
	if(!(a%11))
	cout << "\n this is divisible by 11";
	if((a%5)||(a%11))
	cout << "\n this is nither divisible by 5 nor by 11";
 	return 0;
}
