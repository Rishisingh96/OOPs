#include<iostream>
class Circle{
    private :
        double r ;
    public :
    int Area;
    void compute_area(double r)
    {
        Area = 3.14 * r*r;
    }
};
int main(){
    Circle obj;
    obj.compute_area();
    return 0;
}