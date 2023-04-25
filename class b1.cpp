#include<iostream>
#include<string.h>
using namespace std;
class Person 
{
  private:
    string name;
    int age;
    string address;

  public:
    void setName(string n) 
	{
        name = n;
    }
    void setAge(int a) 
	{
        age = a;
    }
    void setAddress(string addr) 
	{
        address = addr;
    }
    string getName() 
	{
        return name;
    }
    int getAge() 
	{
        return age;
    }
    string getAddress() 
	{
        return address;
    }
};

