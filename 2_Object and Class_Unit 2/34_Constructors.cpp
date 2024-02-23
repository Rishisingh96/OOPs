#include<iostream>
using namespace std;
class myclass{
	public:
		myclass(){
			cout<<"Hellow World !";
		}
};

int main()
{
	myclass obj;    /*create an object myclass(this 
					will call the constructor */
	return 0;
}
