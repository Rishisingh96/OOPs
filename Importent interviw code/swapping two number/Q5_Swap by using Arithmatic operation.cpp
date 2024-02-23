#include<iostream>
using namespace std;
int main()
{
	int x=10,y=5;
	cout<<"Befor swapping :"<<endl<<"x=10"<<"\t"<<"y=5"<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"After swapping : "<<endl<<"x= "<<x<<"\t"<<"y= "<<y<<"\t"<<endl;
	return 0;
}
