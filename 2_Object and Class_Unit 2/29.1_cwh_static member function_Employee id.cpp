//#include<iostream>
#include<iostream>
using namespace std;
class Employee
{
	int id;
	static int count;
	public:
		void setData(void)
		{
			cout<<"Enter the id "<<endl;
			cin>>id;
			count++;
		}
		void getdata(void)
		{
			cout<<"The id of this employee is "<<id<<" and this is employee number"<<count<<endl;
		}
};     // count is static data number

int Employee :: count = 1000;   // default value is 0

int main()
{
	Employee harry,rohan,Rishi;
	//harry.id;
	//harry.count=1;  // can not this private
	harry.setData();
	harry.getdata();
	
	rohan.setData();
	rohan.getdata();
	
	Rishi.setData();
	Rishi.getdata();
	return 0;
}
