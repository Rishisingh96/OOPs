#include<iostream>
using namespace std;
// Base class
class Employee{
	public:
		int id;
		float salary;
		Employee(int inpId)
		{
			id  = inpId;
			salary = 34.0;
		}
		Employee(){ }   //default constructor
};
// Derived Class Syntex 
/* Class {{derived - class - name }} : {{ visibitity - mode }} {{ base - class - name }}
{
	class member / methods / etc.
}; */

// Creating a progrmmer class deriver from Employee Base class. 
// Derived Class Syntex 
class Programmer : public  Employee 
{
	public :
			int languagecode;
		Programmer(int inpId)
		{
			id = inpId;
			languagecode = 9;
		}	
	void getData(){
		cout<<id<<endl;
	}
};
int main()   {  
cout<<"This is Output of this program."<<endl;
Employee harry(1), rohan(2); 
  	cout << harry.salary << endl;   
  	cout << rohan.salary << endl;   
  	Programmer skillF(10);   
  	cout << skillF.languagecode<<endl;  
  	cout << skillF.id<<endl;  
    skillF.getData();   
	return 0;  
}  
