#include<iostream>
#include "Q3.h"
using namespace std;
int main(){
	float len, bre;
	//ask for data
	cout << "Please Enter the length of the rectangle: ";
	cin >> len;
	cout << "Please enter the breadth: ";
	cin >> bre;
	//call
	Q3 Rectangle_1(len, bre);
	float Ar1=Rectangle_1.getAr();
	cout << "the area of the rectangle is "<<Ar1<<endl;

	//ask for data again
	cout << "Please Enter the length of the rectangle: ";
	cin >> len;
	cout << "Please enter the breadth: ";
	cin >> bre;
	//call
	Q3 Rectangle_2(len, bre);
	float Ar2=Rectangle_2.getAr();
	cout<< "The area of the rectangle is "<<Ar2<<endl;
return 0;
}
