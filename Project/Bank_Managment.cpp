//#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
    char name[200],address[200],Email[200],y;
     long int a,b,c, balance;
    public:
 
        void Open_account();
        void Deposits_money();
        void Withdraw_money();
        void Display_account();
        void Intrest_money();
        void Exit();


        void Name()
        {
            cout<<"Enter your Name "<<endl;
            cin.ignore();
            cin.getline(name, 200);
        }
        void password()
        {
            cout<<"Creat a new password"<<endl;
            cin>>c;
            
        }
        void Addhar_card()
        {
            cout<<"Enter your Addhar card Number "<<endl;
            cin>>b;
        }
};
void Bank::Open_account()
{    
   
    Name();
    cout<<"Enter your Address :: "<<endl;
    cin.ignore();
    cin.getline(address, 200);
    cout<<"Enter your Phone number "<<endl;
    cin>>a; 
    password();
    Addhar_card();
    cout<<"Enter your email Id "<<endl;
    cin.ignore();
    cin.getline(Email, 200);
    cout<<"What type of account you want to open saving account (s) or current account (c)?"<<endl;
    cin>>y;
    cout<<"Enter amount for deposit :: "<<endl;
    cin>>balance;
    cout<<"your account is created "<<endl;
};
void Bank ::Deposits_money()
{
    Addhar_card();
    password();
    cout<<"Enter how much you deposit :: ";
    cin>>a;
    balance+=a;
    cout<<"Total amount is your deposit :: \t "<<balance<<endl;

};
void Bank ::Withdraw_money()
{  
        float amount;
        cout<<"\n withdraw ";
        cout<<"Enter amount to withdraw ";
        cin>>amount;
        balance-=amount;
        cout<<"Now total amount is left :: "<<balance<<endl;
};
void Bank ::Display_account()
{

    cout<<"\nyour Name              ="<<name<<endl;
    cout<<"your Address             ="<<address<<endl;
    cout<<"your Phone number        ="<<a<<endl;
    cout<<"your Addhar number       ="<<b<<endl;
    cout<<"your Email Id            ="<<Email <<endl;
    cout<<"What type of account you want to open saving account (s) or current account (c)? "<<y<<endl;
    cout<<"your total Ballance is   ="<<balance<<endl;
    cout<<"your Password is         ="<< c<<endl;

};
int main(){
      int  ch , x;
      Bank obj;
     do{
        cout<<"1.creat your Bank Account "<<"\n"
            <<"2.Deposit money "<<"\n"
            <<"3.Withdraw money "<<"\n"
            <<"4.Display your Account "<<"\n"
            <<"5.Exit program  "<<"\n";
            cout<<"Select the option from above "<<endl;
            cin>>ch;
            switch(ch){
                case 1 : "1.Creat your Account \n "; 
                obj.Open_account();
                break;
                case 2 : "2.Deposit money\n";
                obj.Deposits_money();
                break;
                case 3 : "3.Withdraw money\n";
                obj.Withdraw_money();
                break;
                case 4 : "4.Display your Account\n";
                obj.Display_account();
                break;
                case 5 : "5.Exit program\n";
                if(ch==5)
                {
                    exit(1);
                }
                default:
                cout<<"This is not exit Try again"<<endl;
            } 
            cout<<"\n Dp you want to select next option then press :: y\n";
            cout<<"if you want to exit than press :: N "<<endl;
            x=getch();
            if(x== 'n' || x=='N')
            exit(0);
    }while(x=='y' || x=='Y');
    getch();
    return 0;
}
