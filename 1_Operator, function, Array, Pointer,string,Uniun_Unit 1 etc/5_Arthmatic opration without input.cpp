#include<iostream>
using namespace std;
int main(){
	int a=10,b=4,r;
	//printing a and b
	cout<<"a is "<<a<<"and b is "<<b<<"\n"; // printf("a is %d and b is %d\n", a, b); in c pro
	//addition
	r=a+b;
	cout<<"a+b is:"<<r<<"\n"; // printf("a+b is %d\n", r); in C pro
	// subtraction
	r=a-b;
	cout<<"a-b is:"<<r<<"\n";
	//multiplication
	r=a*b;
	cout<<"a*b is:"<<r<<"\n";
	//division
	r=a/b;
	cout<<"a/b is: "<<r<<"\n";
	//modulus
	r=a%b;
	cout<<"a%b is:"<<r<<"\n";
	return 0; 	
}	

/*
// C program to demonstrate
// working of binary arithmetic
// operators
#include <stdio.h>
 
int main()
{
    int a = 10, b = 4, res;
 
    // printing a and b
    printf("a is %d and b is %d\n", a, b);
 
    res = a + b; // addition
    printf("a+b is %d\n", res);
 
    res = a - b; // subtraction
    printf("a-b is %d\n", res);
 
    res = a * b; // multiplication
    printf("a*b is %d\n", res);
 
    res = a / b; // division
    printf("a/b is %d\n", res);
 
    res = a % b; // modulus
    printf("a%%b is %d\n", res);
 
    return 0;
}
*/
