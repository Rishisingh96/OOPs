//#include<bits/std++.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the two number for swap"<<endl;
	cin>>a>>b;
	cout<<"Value of a and b before swap : "<<endl<<"a= "<<a<<"\t"<<"b= "<<b<<"\t"<<endl;
	/* cout<< "Value of a before :"<<a<<endl;
	cout<< "Value of b before : "<<b<<endl; */
	// swap value of the variabl
	swap(a,b);
	cout<< "Value of a and b ofter swap :"<<endl<<"a= "<<a<<"\t"<<"b= "<<b<<"\t"<<endl;
	return 0;
}
