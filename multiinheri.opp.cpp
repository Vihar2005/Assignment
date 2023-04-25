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
};
class derived1 : public derived
{
	public: 
		int z;
		void input2()
		{
			cout<<"enter value of z : ";
			cin>>z;
		}
		void display()
		{
			cout<<"sum = "<<x*y*z;
		}
};


main()
{
	derived1 d;
	d.input();
	d.input1();
	d.input2();
	d.display();
}
