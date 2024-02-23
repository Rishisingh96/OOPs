//Simple Single line inharetence Easy
#include<iostream>
using namespace std;
class A
{
	public:
		a()
		{
			cout<<"display A class"<<endl;
		}		
};
class B:public A  
{
		public:
		b()
		{
			cout<<"display class B"<<endl;
		}
};
class C: public A
{
	public:
	c()
	{
		cout<<"display of Class C"<<endl;
	}
};
int main()
{
	C obj;
	obj.a();
	obj.c();
//	obj.b();   C-> class A ke function a() called-> class C ke function c() called
	B aa;
	aa.b();
	aa.a();
//	aa.c();  path -    B-> class A ke function a() called-> class B ke function b() called
	A bb;
	bb.a();
//	bb.b();  path -    A-> only class A ke function a() called becouse this is base class
//	bb.c();
	return 0;
}

