#include <iostream>
#include <string>
using namespace std;
class binary
{
	string s;

public:
	void read(void);
	void chk_bin(void);
	void ones_compliment(void);
	void display(void);
};
void binary::read(void)
{
	cout << "Enter a binary number" << endl;
	cin >> s;
}
void binary::chk_bin(void)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) != '0' && s.at(i) != '1')
		{
			cout << "Incorrect binary formate"
				 << "\n";
			exit(0);
		}
	}
}
void binary::ones_compliment(void) // compliment means revers of element 0 ka 1, 1 ka 0; 1010 co - 0101
{
	chk_bin(); //Nesting a function
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) == '0')
		{
			s.at(i) = '1';
		}
		else
		{
			s.at(i) = '0';
		}
	}
}
void binary::display(void)
{
	cout << "Displaying your binary number" << endl;
	for (int i = 0; i < s.length(); i++)
	{
		cout << s.at(i);
	}
	cout << endl;
}
int main()
{
	binary b;
	b.read();
	//    b.chk_bin();     //Nesting a function uper complement function mai hai
	b.ones_compliment();
	b.display();
	return 0;
}
