#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
		point(int x1,int y1)
		{
			x=x1;
			y=y1;	
		}
	int getx(){ return 0;  }
	int gety(){ return 0;  }
};
int main(){
	point p1(10 , 15);
	cout<<"p1.x = "<<p1.getx()<<"p1.y ="<<p1.gety();
	return 0;
}
