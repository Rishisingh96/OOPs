#include<iostream>
using namespace std;
class complex
{
	int a;
	int b;
	public:
		void setData(int V1,int V2)   //1 funciotn
		{		a=V1;  	b=V2;      }

		void setDataBySum(complex o1,complex o2)   //2nd fun
		{	a=o1.a+o2.a;  b=o1.b+o2.b;  }
		
		void printNumber()  //3rd fun
		{
			cout<<"your complex Number is "<<a<<"+"<<b<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2,c3;
	c1.setData(1,2);
	c1.printNumber();
	
	c2.setData(3,4);
	c2.printNumber();
	
	c3.setDataBySum(c1,c2);
	c3.printNumber();
}

