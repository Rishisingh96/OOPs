#include<iostream>
using namespace std;
class circle
{
   private:
    double radius;
   public: 
    double computer_area(double r)
    {
       radius=r;
        double area=3.14*radius*radius;
        cout<<"Radius is :" << radius <<endl;
    }
};
int main()
{
     circle obj;
     //obj.radius = 1.5;
     obj.computer_area(1.5);
     return 0;
}