# include <iostream>

using namespace std;

int main()
{
	bool ver_bool=1;
	int ver_int=14;
	char ver_char='s';
	short ver_short=124;
	long ver_long=554;
	long long ver_long_long=456;
	float ver_float=45.21;
	double ver_double=445;
	long double ver_long_double=4554;
	
	cout << "bool variable has value: "<<ver_bool <<"\t\tsize of it is :"<< sizeof ver_bool << endl;	
	cout << "int variable has value: "<< ver_int << "\t\tsize of it is :"<< sizeof ver_int << endl;
	cout << "char variable has value: "<< ver_char << "\t\tsize of it is : "<< sizeof(char) << endl;
	cout << "short variabel has value: "<< ver_short << "\t\tsize of it is : " << sizeof( short) << endl;
	cout << "long variabel has value: " << ver_long << "\t\tsize of it is : " << sizeof( long )<< endl;
	cout << "long long variable has value: " << ver_long_long << " \tsize of it is:  " << sizeof( long long )<< endl;
	cout << "float variable has value: " << ver_float << "\t\tsize of it is : " << sizeof(float) << endl;
	cout << "double variable has value: " << ver_double << " \t\tsize of it is : "<< sizeof( double) << endl;
	cout << "long double variable has value: " << ver_long_double << " \tsize of it is : "<< sizeof( long double) << endl;
	
	
		return 0;
}
