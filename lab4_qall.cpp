#include <iostream>

using namespace std;

void pro_1();
void pro_2();
void pro_3();
void pro_4();
void pro_5();
void pro_6();
void pro_7();
void pro_8();
void pro_9();
void pro_10();
void clear()
{
	for(int i=0;i<100;i++)
		cout<<endl;
}




int main()
{
	cout << "\n-----------*** Slect one of theme ***--------------"<< endl;
	cout << "1. program to enter length in centimeter and convert it into meter and kilometer\n";
	cout << "2. program to enter temperature in Celsius and convert it into Fahrenheit\n";
	cout << "3. program to enter temperature in Fahrenheit and convert to Celsiu\n";
	cout << "4. program to convert days into years, weeks and days\n";
	cout << "5. program to enter two angles of a triangle and find the third angle\n";
	cout << "6. program to enter base and height of a triangle and find its area\n";
	cout << "7. program to calculate area of an equilateral triangle\n";
	cout << "8. program to enter marks of five subjects and calculate total, average and percentage\n";
	cout << "9. program to enter P, T, R and calculate Simple Interest\n";
	cout << "10.program to enter P, T, R and calculate Compound Interest.\n";
	cout << "Chose from 1 to 10 :";

	int choise=0;
	cin >> choise;
	clear();
	switch(choise)
	{
		case 1: pro_1(); break;
		case 2: pro_2();break;
		case 3: pro_3();break;
		case 4: pro_4();break;
		case 5: pro_5();break;
		case 6: pro_6();break;
		case 7: pro_7();break;
		case 8: pro_8();break;
		case 9: pro_9();break;
		case 10:pro_10();break;
		default :cout <<" --------------*** please enter courrect option ***------------------------";
	} 
	return 0;
}

void pro_1()
{

	float cen;
	cout << " ----------*** this is length converter ***------------\n";
	cout << "Enter the length in centimeter : ";
	cin >> cen;
	cout << "The given length in meter is :" << cen/100<<endl;
	cout << "The given length in kiolmeter is : "<< cen/100000<<endl;

}


void pro_2()
{

	float cel;
	cout << " ----------*** this is Temperature converter ***------------\n";
	cout << "Enter the Temperature in Celsius : ";
	cin >> cel;
	cout << "The given Temperature in Fahrenheit is :" << ((cel*9)/5)+32<<endl;

}


void pro_3()
{

	float cel;
	cout << " ----------*** this is Temperature converter ***------------\n";
	cout << "Enter the Temperature in Fahrenheit : ";
	cin >> cel;
	cout << "The given Temperature in Celsius is :" << ((cel+32)*5)/9<<endl;
}

void pro_4()
{
	int d;
	cout << "---------*** This porgram is to convert day in to yera ...etc..***-------";
	cout << "Enter days :";
	cin >>d;
	cout << " The above days in form year:weak:days is :   "<< d/365<<':'<<(d%365)/7<<':'<<((d%365)%7);
}

void pro_5()
{
	float a,b;
	cout << "Enter first angle of triangle in degree(<180): ";
	cin >> a;
	cout << "Enter secand angle of triangle in degree(<180): ";
	cin >> b;
	if (a+b<180)
		cout << "The third angle of triangle in degree is :"<< ((180-a)-b);
}

void pro_6()
{
	float h,b;
	cout << "Enter hight of triangle: ";
	cin >> h;
	cout << "Enter base of triangle: ";
	cin >> b;
	cout << "The Area of triangle is : "<< (h*b)/2;
}

void pro_7()
{
	float a;
	cout<<"Enter the side of equlatral triangle : ";
	cin >>a;
	cout<<"the area of the triangle is :"<< (a*a)*(1.73/4);
}

void pro_8()
{
	float marks[5],total=0;
	
	for(int i=0;i<5;i++)
	{
		cout << "\nEnter the marks of subject "<< i+1<<" out of 100 : ";
		cin>> marks[i];
		total=marks[i]+total;
	}
	cout << "\n totla marks is :"<< total <<"\n Average of marks is :"<< total/5 << "\n percantage of student is:" << total/5;
}

void pro_9()
{
	float p,r,t;
	cout<< "enter the amount borrow:";
	cin >> p;
	cout << "Enter the the rate in percent like for 50% write 50 :";
	cin >> r;
	cout << "Enter the time had passed:";
	cin >> t;

	cout<< "He will have to pay the interest ("<< (p*t*r)/100<<") and the total amount is "<< p+(p*r*t)/100;

}

void pro_10()
{

	float p,r,amount;
	int t;
	cout<<"enter the amount borrow:";
	cin >> p;
	amount=p;
	cout << "Enter the the rate in percent like for 50% write 50 :";
	cin >> r;
	cout << "Enter the time had passed(int):";
	cin >> t;

	for(int i=0;i<t;i++)
		amount=(amount*r/100)+amount;

	cout<< "He will have to pay the interest ("<<amount - p<<") and the total amount is "<<amount;
}
