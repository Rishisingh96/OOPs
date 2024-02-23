//How to acces private data members using friend function
#include<iostream>
using namespace std;
class acc
{
	private:
		char name[20];
		int acn;
		float bal;
	public:
		void read()
		{
			cout<<"\nEnter your name:"<<endl;
			cin>>name;
			cout<<"\nEnter your account number:"<<endl;
			cin>>acn;
			cout<<"\n Enter your balance:"<<endl; 
			cin>>bal;
		}
		friend void showbal(acc);
	};
	void showbal(acc a)
	{
		
		cout<<"\nName :"<<a.name;
		cout<<"\nAccount:"<<a.acn;
		cout<<"\nBalence:"<<a.bal;
	}
	int main()
	{
		acc obj;
		obj.read();
		showbal(obj);
		return 0;
	}
