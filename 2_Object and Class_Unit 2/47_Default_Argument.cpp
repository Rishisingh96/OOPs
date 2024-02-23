#include<iostream>
//void add(int,int,int);
using namespace std;
void add(int a=10, int b=5, int c=20);
int main()
{
	add();
	add(20);
	add(30,10);
	add(10,20,30);
	return 0;
}
void add(int a,int b,int c)
	{
		cout<<"\nAddition of argument="<<a+b+c<<endl;				
	}
