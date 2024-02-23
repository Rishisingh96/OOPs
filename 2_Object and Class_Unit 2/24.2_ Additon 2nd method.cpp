#include<iostream>
using namespace std;
class addition
{
        // Even if we do not write private, he will automatic concider it private. 
        int a,b;
        public :
        void getdata();
        void putdata();
};
// Outer side declare
void addition :: getdata()
{
    cout<<"\nEnter two Number : ";
    cin>>a>>b;
}
void addition ::putdata()
{
    cout<<"\n Addition ="<<a+b;
}
int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
  
 return 0;
 }
