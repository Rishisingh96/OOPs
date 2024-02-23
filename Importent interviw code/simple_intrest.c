/*..WAP to intput principal,rate ,time and find the simple interest.....*/
#include<stdio.h>
void main()
{
	int p,i,n,SI;
	/*..Simple Interest = (P ? R ? T)/100  
	where P = Principal Amount, R = Rate per Annum, T = Time (years)  ..*/
	printf("Enter your number :\nprincipal(P);\nrate(I);\ntime(N)\n");
	scanf("%d%d%d",&p,&i,&n);
	SI=(p*i*n)/100;
	printf("Simpal interest=%d",SI);
return 0;
}

