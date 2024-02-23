#include<iostream>
int main()
{
	std::cout.sync_with_stdio(false); // on some platforms, stdout flushes on \n  //Why use 
	using namespace std;
	int a,b;
	cout<<"Enter two number";
	cin>>a>>b;
	cout<<"Add two number : "<<a+b;  //<ostream
	return 0;
}
