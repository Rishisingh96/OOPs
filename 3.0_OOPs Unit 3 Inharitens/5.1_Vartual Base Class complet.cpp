//Virtual Base Class in C++
#include<iostream>
using namespace std;
/* 	Student -->	test
	Student -->	sports
	test 	--> result
	sports 	--> resutlt  */
class student{
	protected:
		int roll_no;
	public:
		void set_number(int a)
		{
			roll_no = a;
		}
		void print_number(void){
			cout<<"Your roll no is "<<roll_no<<endl;
		}
};
class Test : virtual public student{
	protected:
		float maths, physics;
	public:
		void set_marks(float m1, float m2){
			maths = m1;
			physics = m2;
		}
		void print_marks(void){
			cout<<"Your result is here : "<<endl
			<<"Maths :"<< maths <<endl
			<<"Physics : "<<physics<<endl;
		}
};
class Sports : virtual public student {
	protected:
		float score;
	public:
		void set_score(float sc){
			score = sc;
		}
		void print_score(void){
			cout<<"Your PT score is "<<score<<endl;
		}
};
class Result : public Test, public Sports{
	private:
		float total;
	public:
		void display(void){
			total = maths + physics + score;
		print_number();
		print_marks();
		print_score();
		cout<<"your tatal score is "<<total<<endl;
		}
};
int main(){
	Result Rishi;
	Rishi.set_number(4200);
	Rishi.set_marks(78.9 , 99.5);
	Rishi.set_score(9);
	Rishi.display();
	return 0;
}
