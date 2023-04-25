#include<iostream>
#include<string.h>
using namespace std;
class abc
{
	int sid; //student id //
	
	char name[20];
	double fees;
	
	public:
	
	abc(int,char[ ],double);
	void display();
};
	abc::abc(int id,char n[25],double f)
	{
		sid=id;
		strcpy(name,n);
		fees=f;
	}
	void abc::display()
	{
		cout<<sid<<"\t"<<name<<"\t"<<fees;
	}

main()
{
	abc a(11,"vihar",102202);
	a.display();
}
