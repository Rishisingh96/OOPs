/* We do use of inline function we reduce a time means when we use inline function then he not go to difinition
return our difination this directct input difination in argument like return a*a direct input in square(5) */ 
#include<iostream>
using namespace std;
inline int square(int a)
{
	return a*a;
}
inline int cube(int a)
{
	return a*a*a;
}
int main()
{
	cout<<"\nSquare of 5="<<square(5); // square(5) not call function this direct return a*a in square(5*5)=25 
	cout<<"\nCube of 5 ="<<cube(5);
}

