#include<iostream>
using namespace std;
class circle
{
    public:
        double radius;
    	double compute_area()
   		{
         	return 3.14*radius*radius;
  		}
};
int main()
{
	circle obj;
    obj.radius = 5.5;  // accessing public data member outside.
    cout<<"Radius is :" << obj. radius << "\n";
    cout<<"Area is :"<< obj.compute_area();
}
