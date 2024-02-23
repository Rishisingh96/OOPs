#include<iostream>
using namespace std;
int main()
{
	int x=10,y=5;
	x=x^y;
	y=x^y;
	y=x^y;
	cout<<"After Swapping :"<<"x= "<<x<<", y= "<<y; //if we use <<x<<", some space use karne par 
	return 0; // output - After swapping x=5, y=10; // kuchh space ho jayega like "\t" ke jagak ", space
}
