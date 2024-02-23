#include<iostream>
//#include<stdio.h>
using namespace std;
int main()
{
	int arr[3][3],i,j;
	cout<<"Enter The Element:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin<<"%d",&arr[i][j];
		}
	}
	printf("The Matrix of Array");
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<<"%d\t",arr[i][j];
		}	
	}
	return 0;
}
