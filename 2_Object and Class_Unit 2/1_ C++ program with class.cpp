#include<iostream>
using namespace std;
class item
{
	int number;                          //priavte by default
	float cost;
	public:
		void getdata(int a, float );   //prototype declaration to be defined
		//function defined inside class
		void putdata(void)
		{
			cout<<"number :"<<number<<"\n";
			cout<<"cost :" <<cost <<"\n";
		}
};

//...........Member Function Definition .............
void item :: getdata(int a, float b)   // use membership label
{
	number =a;     //private variale
	cost =b;
}
int main()
{
	item x;
	cout << "\nobject x"<<"\n";
	
	x.getdata(100, 299.95);
	x.putdata();
	
	item y;
	
	cout<<"\nnobject y"<<"\n";
	
	y.getdata(200, 175.50);
	y.putdata();
	return 0;	
}
