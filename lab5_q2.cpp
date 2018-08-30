#include<iostream>

using namespace std;

int main(){
	int a,b,c;

	//input two numbers
	cout << "\nEnter three numbers : ";
	cin >> a >> b >> c; 
	cout <<((a>b)?((a>c)?a:c):(b>c)?b:c) << " is the gratest number "; 
	return 0;
}
