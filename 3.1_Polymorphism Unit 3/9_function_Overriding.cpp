#include <iostream>
using namespace std;
class A
{
public:
	void f1()
	{
		cout << "This is Class A f1() function." << endl;
	}
	void f2()
	{
		cout << "This is Class A f2() function." << endl;
	}
	void f3()
	{
		cout << "This is Class A f3() function." << endl;
	}
};
class B : public A
{
public:
	void f1()
	{ // Mathod overriding
		cout << "This is Class B f1() function." << endl;
	}

	//		void f2(){
	//			cout<<"This is Class B f2() function."<<endl;
	//		}

	void f2(int x)
	{ // Method Hiding
		cout << "This is Class B f2() function " << endl
			 << "x = " << x << endl;
	}
};
int main()
{
	B obj;
	obj.f1(); // call B class
	//obj.f2(); // error because f2 present in class B but f2 mathod He want take argument value.
	obj.f2(3); // call B class
	obj.f3();  // call A class because f3 not present in B class
	return 0;
}
