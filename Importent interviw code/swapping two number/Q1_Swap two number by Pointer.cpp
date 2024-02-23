#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int  z = *x;
	*x = *y;
	*y = z;
}
int main(){
	int a,b;
	cout<<"Enter two number for swap two number."<<endl;
	cin>>a>>b;	
	cout<<"Before swap"<<endl<<"a= "<<a<<"\t"<<"b= " <<b<<"\t"<<"\n";
	
	swap(&a,&b);
	
	cout << "After swap with Pass by pointer"<<endl;
	cout<<"a= " <<a<<"\t"<<"b= "<<b<<"\t"<<endl;
	return 0;
}
