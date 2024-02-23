#include<iostream>
using namespace std;
class A
{
	public :
		void display()
		{
			cout<<"Class A";
		}
};
class B:public A
{
	public :
		void display(){
			cout<<"Class B";
		}
};
int main(){
	A obj = B();
//	B obj = A(); error conficting declaration
	obj.display();
//	obj1.display();
}
