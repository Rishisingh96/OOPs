/* 	Accessing static data member without static member function.
	syntex:
	class_name :: static_data_member;  */
	#include<iostream>
	using namespace std;
	class Demo
	{
		public:
			static int ABC;
	};
	int Demo :: ABC=10;
	int main()
	{
		cout<<"\n Value of ABC :"<< Demo :: ABC;
		return 0;
	};
