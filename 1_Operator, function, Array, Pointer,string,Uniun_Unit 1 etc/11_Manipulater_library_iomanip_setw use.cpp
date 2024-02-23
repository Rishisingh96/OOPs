#include<iostream>
#include<iomanip>  // for setw
using namespace std;
int main()
{
	int Basic = 950,Allowance =95,Total = 1045;
	cout<<"Rishi singh";
	
	cout<<"Basic"<<"\t"<<Basic<<endl;
	cout<<"Allowance"<<"\t"<<Allowance<<endl;
	cout<<"Total"<<"\t"<<Total<<endl;
	cout<<"\n";
	
	cout<<setw(10)<<"Basic"<<setw(10)<<Basic<<endl;
	cout<<setw(10)<<"Allowance"<<setw(10)<<Allowance<<endl;
	cout<<setw(10)<<"Total"<<setw(10)<<Total<<endl;
	cout<<"\n";
	
	cout <<setw(5)<<"Basic"<<setw(5)<<Basic<<endl;
	cout<<setw(5)<<"Allowance"<<setw(5)<<Allowance<<endl;
	cout<<setw(5)<<"Total"<<setw(5)<<Total<<endl;
	cout<<"\n";
	
	cout <<setw(15)<<"Basic"<<setw(15)<<Basic<<endl;
	cout<<setw(15)<<"Allowance"<<setw(15)<<Allowance<<endl;
	cout<<setw(15)<<"Total"<<setw(15)<<Total<<endl;
	cout<<"\n";
	
	cout<<setw(11)<<"\nBasic"<<setw(11)<<Basic<<endl;
	cout<<setw(11)<<"Allowance"<<setw(11)<<Allowance<<endl;
	cout<<setw(11)<<"Total"<<setw(11)<<Total<<endl;
	
		return 0;
}
