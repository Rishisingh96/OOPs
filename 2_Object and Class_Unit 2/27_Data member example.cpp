//Static data member
#include<iostream>
//static data_type member name; //declaration
//data_type class_name :: member_name = value;
using namespace std;
class Demo
{
	private:
		static int x;
	public:
		static void fun()
		{
			cout<<"value of x :"<<x<<endl;
		}
};     //hear static data member is accessing through the Static member function
int Demo :: x=10;
int main()
{
	Demo X;
	X.fun();
	return 0;
}
