#include<iostream>
using namespace std;
class A{
	public:
		a(){           //Function of class A
			cout<<"Display of A "<<endl;
		}
};
class B
{
	public:
		b(){
			cout<<"Display of B "<<endl;
		}
};
class C : public A, public B
{
	public:
		c(){
			cout<<"Display of C "<<endl;
		}
};
int main(){
	C obj;
	obj.a();
	obj.b();
	obj.c();
	return 0;
}
