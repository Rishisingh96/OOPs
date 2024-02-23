#include<iostream>
using namespace std;
class Value{
	protected:
		int val;
	public:
		void set_values(int a)
		{
			val = a;
		}
};
class Cube : public Value{
	public:
		int cube(){
			return (val *val *val);
		}
};
int main(){
	Cube cb;
	Value *ptr = &cb;
	ptr -> set_values(10);
	cout<<"The cube of 10 is ::"<<cb.cube()<<endl;
}
