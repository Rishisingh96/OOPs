#include<iostream>
using namespace std;
int main()
{
	float b;
	float c;
	b=5/2;  // if we are not use typecasting or implicit converson than output = 2
	// syntex of typecasting : (Data_type)Expression ;
	c = (float)5/2;
	cout<<"Value of b ="<<b<<endl;
	cout<<"Value of c ="<<c<<endl;
	return 0;
}
