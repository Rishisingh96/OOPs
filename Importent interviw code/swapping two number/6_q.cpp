#include<iostream>
using namespace std;

int main(){
    int p;
    cin>>p;
    int count = 0;
    int n;
    while(count<p){
        int ele=5*n+3;
        if(ele%7 == 0){
            continue;
        }else{
            count++;
            cout<<ele;
        }
    }
}