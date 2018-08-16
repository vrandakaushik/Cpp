// First include library
#include <iostream>


using namespace std;

void process()
{
}









//---------------* my main() function *---------------------


int main()
{
	int a,b,sum;					//Alloting space to varible
	
	cout << "Enter the value for A : ";		// Taking input of first number to add	
	cin >> a;
	cout << "Enter the value for B : ";		// Taking input of secabd number to add 
	cin >> b;



	cout << "Your sum of A and B is : "<<a+b<<endl;		// Printing the sum of two numbers 
	cout << "Your product of A and B is : "<<a*b<<endl;
	cout << "Your difference of B form A is : "<<a-b<<endl;
	cout << "Your Division of A by B is : "	<< a/b << endl;
	cout << "Your modulus of A by B is : " << a%b << endl;
	
	
	
	return 0;					// Returning Zero to show that the program is compliled fine :)
}
