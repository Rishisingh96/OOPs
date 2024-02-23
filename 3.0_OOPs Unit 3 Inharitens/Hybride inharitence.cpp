#include<iostream>
using namespace std;
class A
{
	public:
		int a;
	void num()
	{
		a=2;
	}
};
class B:public A
{
	public:
		int b;
	public:
			void num1()
			{
				b=3;
			}
};
class D
{
	public:
		int c;
	public:
		void num2()
		{
			c=4;
		}
};
class c: public B,public D
{
	public:
		void display()
		{
			cout<<"This numbers = "<<a<<b<<endl;
		}
};
int main()
{
	c a1;
	a1.num();
	a1.num1();
	a1.num2();
	a1.display();
	return 0;
}
