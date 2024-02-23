// Static member function in C++
//class_name :: function_name(perameter);
#include<iostream>
using namespace std;
class Demo
{
	static int x;
	static int y;
	public:
		static void print()
		{
			cout<<"Value of X "<<x<<endl;
			cout<<"Value of Y "<<y<<endl;
		}
};
int Demo :: x=10;int Demo :: y=20;
int main()
{
	Demo OB;
	//accessing class name with object name
	cout<<"Printing through object name :"<<endl;
	OB.print();
	cout<<"Printing through Class name :"<<endl;
	Demo::print();
	
	return 0;
}
