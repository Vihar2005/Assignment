#include<iostream>
using namespace std;
class student
{
	int id;
	string  contact;
	char name[20];
	
	public:
		
	void input()
	{
		cout<<"enter id : ";
		cin>>id;
		
		cout<<"enter name : ";
		cin>>name;
		
		cout<<"enter contact : ";
		cin>>contact;
	}
	void display()
	{
		cout<<"id : "<<id<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"contact : "<<contact;
	}
};

main()
{
	student s;
	s.input();
	s.display();
}
