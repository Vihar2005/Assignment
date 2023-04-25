#include<iostream>
using namespace std;
class facelty
{
	int id;
	string  contact;
	char name[10],email[25];
	
	public:
		
	void input()
	{
		cout<<"enter id : ";
		cin>>id;
		
		cout<<"enter name : ";
		cin>>name;
		
		cout<<"enter contact : ";
		cin>>contact;
		
		cout<<"enter email : ";
		cin>>email;
	}
	
	void display()
	{
		cout<<" id : "<<id<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"contact : "<<contact<<endl;
		cout<<"email : "<<email;
	}
};

main()
{
	facelty f;
	f.input();
	f.display();
}
