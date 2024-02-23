#include<iostream>
using namespace std;
int main()
{
	int arr[3][3],i,j;
	cout<<"Enter The Element:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	printf("The Matrix of Array");
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"\t";
		}	
	}
	return 0;
}
