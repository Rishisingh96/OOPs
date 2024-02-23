// Long - term fixed deposit system - Bnakdeposit
#include<iostream>
using namespace std;
class BankDeposit{
	int principal;
	int years;
	float interest_Rate;
	float returnValue;
	public:
		BankDeposit(){ }
		BankDeposit(int p, int y, float r);   // r can be a value like 0.04  // use Function Overloading
		BankDeposit(int p, int y, int r);     // r can be a value like 14
		void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
	principal = p;
	years = y;
	interest_Rate = r;
	returnValue = principal;
	for(int i=0; i<y; i++)
	{
		returnValue = returnValue *(1 + interest_Rate);
	}
}
BankDeposit :: BankDeposit(int p , int y, int r)
{
	principal = p;
	years = y;
	interest_Rate =float(r)/100;
	returnValue = principal;
	for(int i=0 ; i<y; i++)
	{
		returnValue = returnValue *(1+ interest_Rate);
	}
}

void BankDeposit :: show()
{
	cout<<endl<<"Principal amount was "
	<<principal<<" Return value ofter "
	<<years<<" year is "
	<<returnValue<<endl;
	
}
int main(){
	BankDeposit bd1,bd2,bd3;  // if we do comment
		int p,y;
		float r;
		int R;
	cout<<"\nEnter the value of Principal amount. year and rate(r)\n"<<endl;
	cin>>p>>y>>r;
	bd1= BankDeposit(p,y,r);
	bd1.show();
	cout<<"\nEnter the value of Principal amount. year and rate(R)\n"<<endl;
	cin>>p>>y>>R;
	bd2= BankDeposit(p,y,R);
	bd2.show();
	return 0; 
}
