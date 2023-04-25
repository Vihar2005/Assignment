#include<iostream>
using namespace std;
class student
{
	int id;
	string contact;
	char name[20],email[50],add[50];
	
	public:
		student()
		{
			cout<<"enter id :";
			cin>>id;
			
			fflush(stdin);
			cout<<"enter name :";
			gets(name);
			
			fflush(stdin);
			cout<<"enter email id :";
			gets(email);
			
			fflush(stdin);
			cout<<"enter address :";
			gets(add);
			
			cout<<"enter contact";
			cin>>contact;
			
		}
		void disp()
		{
			cout<<"ID :"<<id<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"email :"<<email<<endl;
			cout<<"address :"<<add<<endl;
			cout<<"contact :"<<contact;
		}
};
main()
{
	student s;
	s.disp();
}
