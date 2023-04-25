#include <iostream>
using namespace std;
class Student 
{
protected:
    int rollNumber;
public:
    Student(int roll) 
	{
        rollNumber = roll;
    }
};

class Test : public Student 
{
protected:
    int marks1, marks2;
public:
    Test(int roll, int m1, int m2) : Student(roll) 
	{
        marks1 = m1;
        marks2 = m2;
    }
};

class Result : public Test 
{
private:
    int totalMarks;
public:
    Result(int roll, int m1, int m2) : Test(roll, m1, m2) 
	{
        totalMarks = m1 + m2;
    }
    void display() 
	{
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    Result r;
    r.display();
}

