//Find out shop item & 100 item Price and use Array?
#include<iostream>
using namespace std;
class Shop
{
	int itemId[100];
	int itemPrice[100];
	int counter;
	public:
		void initCounter(void){ counter = 0;
		};
		void setPrice(void);
		void dispayPrice(void);
};
void Shop::setPrice()
{
	cout<<"Enter ID of your item no "<<counter+1<<endl;
	cin>>itemId[counter];
	cout<<"Enter Price of your item "<<endl;
	cin >>itemPrice [counter];
	counter++;
}
void Shop::dispayPrice(void)
{
	for(int i=0;i<counter; i++)
	{
		cout<<"The Price of item with ID  "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}
int main()
{
	Shop dukaan;
	dukaan.initCounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.dispayPrice();
	return 0;
}
