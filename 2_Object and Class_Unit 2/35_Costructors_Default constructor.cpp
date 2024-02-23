#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
		complex(void);
		void printNumber()
		{
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};
Complex :: complex(void)  //----This is a default constructor 
{	a=10 , b=20;  }
int main(){
	Complex c1, c2;
	c1.printNumber();
	c2.printNumber();
	return 0; 
}
	
