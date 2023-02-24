#include<iostream>
using namespace std;
class student
{
	int age,dob;
	string  contact;
	char name[10],address[20];
	
	public:
		
	void input()	
	{
	    cout<<"enter age : ";
	    cin>>age;
	
	    cout<<"enter dob : ";
	    cin>>dob;
	  
	    cout<<"enter name : ";
	    cin>>name;
	  
	    cout<<"enter address : ";
	    cin>>address;
	  
	    cout<<"enter contact : ";
	    cin>>contact;
    }
    
    void display()
    {
        cout<<"age : "<<age<<endl;
	    cout<<"dob : "<<dob<<endl;
	    cout<<"name : "<<name<<endl;
	    cout<<"address : "<<address<<endl;
	    cout<<"contact : "<<contact;
	}
};

main()
{
	student s;
	s.input();
	s.display();
}

