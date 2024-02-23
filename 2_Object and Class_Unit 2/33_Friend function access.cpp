#include<iostream>
using namespace std;
class base
{
	int val_1,val_2;
	public:
		void get()
		{
			cout<<"Enter two values:";
			cin>>val_1>>val_2;
		}
		friend float mean(base ob);  // friend return_type function Name(argument/s)
};
float mean(base ob)
{
//	return float(ob.val_1 + ob.val_2);  //for two number sum 
 	return float(ob.val_1 + ob.val_2);
}
int main()
{
	base obj;
	obj.get();
	cout<<"\nSum is : "<<mean(obj);
}
