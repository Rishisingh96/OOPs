//2.2 Identify the error in the following program.
#include<iostream>
using namespace std;
int main()
{
	short i=2500,j=3000;  //correct
	//int i=2500,j=3000;  //correct
	//cout>>"i+j= ">>-(i+j);  //incorect
//Ans-
	cout<<"sum of i+j"<<-(i+j);//correct
	return 0;
}

/*	[Error] no match for 'operator>>' 
(operand types are 'std::ostream {aka std::basic_ostream<char>}' and 'const char [6]')*/
