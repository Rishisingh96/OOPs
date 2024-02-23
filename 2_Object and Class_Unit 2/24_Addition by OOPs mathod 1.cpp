#include<iostream>
using namespace std;
class addition
{
    private:
    int a,b;
    public:
        void getdata()
        {
            cout<<"\n Enter two Number :";
            cin>>a>>b;
        }
        void putdata()
        {
            cout<<"\nAddition="<<a+b;
        }
};
int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
   
    return 0;
}
