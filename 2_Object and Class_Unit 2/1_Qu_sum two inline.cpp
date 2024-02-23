// by using Insinde class member
#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b;
	public:
	void getdata()
		{
		cout<<"Enter two number:";
		cin>>a>>b;
		}
	void putdata()
	{
		cout<<"total sum="<<a+b;;
	}
}obj;
 
int main()
{
	sum obj;
	obj.getdata();
	obj.putdata();
	return 0;
}
