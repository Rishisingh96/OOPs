// 2: Ambiguity Resolution in Inheritance 
#include<iostream>
using namespace std;
class B{
	public:
		void say(){
			cout<<" Hellow world "<<endl;
		}
	};
class D: public B{
	int a;
// Ds new say (.) method will override base 
// class's say() method 
	public:
		void say(){
			cout<<"Hellow my Beautiful Familay "<<endl;
		}
};
int main(){
	//Ambiguity 2
	B b;
	b.say();
	D d;
	d.say();
	return 0;
}
