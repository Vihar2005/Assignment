#include<iostream>
using namespace std;
class base
{
	public:
		int x;
		
		void input()
		{
			cout<<"enter value of x: ";
			cin>>x;
		}
};

class derived : public base
{
	public: 
	
		int y;
		
		void input1()
		{
			cout<<"enter value of y : ";
			cin>>y;
		}
		
		void display()
		{
			cout<<"sum = "<<x+y;
		}
};

main()
{
	derived d;
	d.input();
	d.input1();
	d.display();
}
