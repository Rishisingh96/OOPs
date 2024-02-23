//case 1: No argument Passed
/*C++ Program to demonstrate working of default argument */
//case 2: First argument Passed
//case 3: All arguemtn Passed
//case 4: Second argument Passed
#include<iostream>
void display(char ='*',int =1);
using namespace std;
int main()
{
	cout<<"No argument passed:\n";
	display();
	cout<<"\n\nFirst argument passed :\n";
	display('#');
	cout<<"\n\nBoth arguemt passed:\n";
	display('$',5);
	return 0;
}
void display(char c,int n)
{
	for(int i=1;i<=n;++i)
	{
		cout<<c;
	}
	cout<<endl;
}
