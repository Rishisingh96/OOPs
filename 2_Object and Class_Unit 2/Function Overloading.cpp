#include<iostream>
using namespace std;
void add(int,int);
void add(int,int,int);
void add(int,float);
int main()
{
	add(2,3);
	add(10,20.10);
	add(10,20,30);
	//getch();
	return 0;
}
void add(int a,int b)
{
	cout<<"\nAddition = "<<a+b;
}
void add(int a,float b)
{
	cout<<"\nAddition = "<<a+b;
}
void add(int a,int b,int c)
{
	cout<<"\nAddition = "<<a+b+b;
}
