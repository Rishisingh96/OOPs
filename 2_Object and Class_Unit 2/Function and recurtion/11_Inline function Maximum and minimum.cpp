//Find Maximum and minimum in C++
#include<iostream>
using namespace std;
inline int Max(int x, int y)
{
	return(x>y)?x:y;
} // Main function for the program 
int main()
{
	cout<<"Max(20,10):"<<Max(20,10)<<endl;
	cout<<"Max(0,200):"<<Max(0,200)<<endl;
	return 0;
}
