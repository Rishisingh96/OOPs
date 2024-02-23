//1: Virtual Base Class in C++
#include<iostream>
using namespace std;
class A{
	public:
		void say()
		{
			cout<<"Hellow world "<<endl;
		}
};
class B : public virtual A{
	//cout<<"Rishi singh"<<endl;
};
class B : public virtual A{
	
};
class D : public B, public C{
};

