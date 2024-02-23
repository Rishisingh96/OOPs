//Reference Variabl is C++
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int &refx = x;
	cout<<"X = "<<x<<endl;
	cout<<"refx = "<<refx<<endl;
	cout<<"Address of x and refx is = "<<&x<<"  "<<&refx<<endl;
	refx++;
	cout<<"x= "<<x<<endl;
	cout<<"refx ="<<refx<<endl;
	cout<<"Address of x and refx is ="<<&refx << endl;
	return 0;
}
