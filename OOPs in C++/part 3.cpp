//2.3 What will happen when you run the following program?
#include<iostream>
using namespace std;
int main()
{
	 int i=10,j=5;
	//int modResult;
	//int divResult;
	int modResult=0;
	int divResult=0;
	modResult=i%j;
	cout<<modResult<<endl;
	divResult = i/modResult;
	cout<<divResult;
	return 0;
}

//Ans = 0   i%j = 10%5= remender 0
//			i/mod = 10/0  =  0
