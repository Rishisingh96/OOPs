//Multilevel Inheritence by cwh, Find student subject marks
#include <iostream>
using namespace std;
class student
{
protected:
	int roll_number;

public:
	void set_roll_number(int);
	void get_roll_number(void);
};
void student ::set_roll_number(int r)
	{
		roll_number = r;
	}
void student ::get_roll_number()
	{
		cout << "The roll number is " << roll_number << endl;
	}

class Exam : public student
{
	protected:
		float math;
		float physics;

	public:
		void set_marks(float, float);
		void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
	{
		math = m1;
		physics = m2;
	}
void Exam ::get_marks()
	{
		cout << "The marks obtained in math are :"
			 << math << endl;
		cout << "The marks obtained in physics are :" << physics << endl;
	}
class Result : public Exam
{
	float persentage;
	
	public:
	void display_result()
	{
		get_roll_number();
		get_marks();
		cout << "Your result is " << (math + physics) / 2 << "%" << endl;
	}
};

int main()
{
	Result Rishi;
	Rishi.set_roll_number(420);
	Rishi.set_marks(94.0, 90.0);
	Rishi.display_result();
	return 0;
}
