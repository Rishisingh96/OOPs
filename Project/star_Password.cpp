#include<iostream>
#include<conio.h>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
        int ch;
        start:
        string user,pass;

        cout<<"\n\n            Username  ";
        cin>> user;
        cout<<"\n\n            Username  ";
        ch = getch();
        while(ch !=13)
        {
            pass.push_back(ch);
            cout <<'x';
            ch = getch();
        }
        cout<<"\n\n \n *************************** ";
        if(user == "Rishi" && pass == "9696"){
            cout <<"\n\n        Congratulations , if you like if \n " ;
        }
        else
        {
            cout << "\n \n    wrong Password or Username,Try Again";
            goto start;
        }
    getch();
    return 0;
};
        