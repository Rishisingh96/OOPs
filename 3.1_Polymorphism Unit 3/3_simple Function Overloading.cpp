#include<iostream>
using namespace std;
int sum(int a, int b){
	cout<<a+b<<endl;
	}
int sum(int a,int b,int c)
{
	cout<<a+b+c<<endl;
}
int main(){
	sum(10,20);
	sum(10,20,30);
}
