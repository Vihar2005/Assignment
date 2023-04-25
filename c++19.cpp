#include <iostream>
#include <string>
using namespace std;
class Person 
{
protected:
    string name;
    int age;
public:
    Person(string n, int a) 
	{
        name = n;
        age = a;
    }
    void readData() 
	{
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
    void writeData() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
private:
    float percentage;
public:
    Student(string n, int a, float p) : Person(n, a) 
	{
        percentage = p;
    }
    void readData() 
	{
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cin.ignore();
    }
    void writeData() 
	{
        Person::writeData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person 
{
private:
    int salary;
public:
    Teacher(string n, int a, int s) : Person(n, a) 
	{
        salary = s;
    }
    void readData() 
	{
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }
    void writeData() 
	{
        Person::writeData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() 
{
    Student s("John", 20, 85.5);
    s.writeData();
    cout << endl;
    s.readData();
    s.writeData();
    cout << endl;

    Teacher t("Mary", 35, 50000);
    t.writeData();
    cout << endl;
    t.readData();
    t.writeData();
    cout << endl;
}

