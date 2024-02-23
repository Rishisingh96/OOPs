#include<iostream>
using namespace std;
int main()
{
	int number=50;
	int *p;
	p=&number;  //store the address of num value
	cout<<"Adress of p variable is : = "<<p<<"\n";
	p=p+1;  //p+1 means adress of p and add 4 byte
	cout<<"After increment : Address of p variable is : ="<<p<<endl; //in our case p will get increment by p bytes.
	return 0;
}


