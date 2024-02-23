//Passing by Refrence
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int z=x;
	x=y;
	y=z;
}
int main()
{
	int a=10,b=20;
	cout<<"Before swap"<<"\n"<<"a= "<<a<<", b= "<<b<<"\t"<<endl;
	swap(a,b);
	cout<<"\nAfter swap"<<endl<<"a= "<<a<<"\t"<<"b= "<<b<<"\t";	
}
	


