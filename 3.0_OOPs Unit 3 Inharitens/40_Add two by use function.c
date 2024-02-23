#include<stdio.h>
void add();
int main()
{
	add();
	return ;
}
void add()
{
	int a,b;
	printf("Enter your number for add");
	scanf("%d%d",&a,&b);
	printf("Add of two number is = %d",a+b);	
}

