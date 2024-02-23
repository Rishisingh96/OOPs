#include<iostream>
using namespace std;
class point
{
	int x , y;
	public:
		complex(){ a=0; b=0; }  //default constructor
		complex(int x, int y) {	x=a; y=b; }  //parameterized constructor
		complex(int x){ a=x; b=0; }     // 3 constructor called overloading or multiple cons..
};
void printNumber()
