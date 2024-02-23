//Constant refrence variable in C++
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	//int refx;
	const int &refx = x;
	cout<<"X = "<<x<<endl;
	cout<<"refx = "<<refx<<endl;
	cout<<"Address of x and refx is = "<<&x<<"  "<<&refx<<endl;
	x = 20; //constant refrence variable con't be changed any means
	cout<<"x= "<<x<<endl;
	cout<<"refx ="<<refx<<endl;
	cout<<"Address of x and refx is ="<<&refx << endl;
	return 0;
}
