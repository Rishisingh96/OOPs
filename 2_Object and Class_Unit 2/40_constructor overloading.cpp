#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex(){
			a=0; b=0;      // make a default constructors
		}
		complex(int x, int y) {	a=x; b=y;	}
		complex(int x)  {	a=x; b=0;	}
		void printNumber(){
			cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};
int main()
{
	complex c1(4,6);  //input a value in constructors
	c1.printNumber();
	complex c2(5);
	c2.printNumber();
	complex c3;                 // run default constructors no parameters
	c3.printNumber();
	return 0;
}
