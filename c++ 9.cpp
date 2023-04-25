#include <iostream>
#include <iomanip>
using namespace std;
class Student 
{
	
private:
	
    int roll_no;
    int sub1, sub2, sub3;
    int total;
    float percentage;
    
public:
	
    void setRollNo(int roll) 
	{
        roll_no = roll;
    }
    void setMarks(int s1, int s2, int s3) 
	{
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
        total = sub1 + sub2 + sub3;
        percentage = (float)total / 3;
    }
    void display() 
	{
        cout << roll_no << setw(7) << sub1 << setw(6) << sub2 << setw(6) << sub3 << setw(8) << total << setw(12) << percentage << "%" << endl;
    }
};

int main() 
{
    Student s[4];
    s[0].setRollNo(1);
    s[0].setMarks(30, 25, 45);
    s[1].setRollNo(2);
    s[1].setMarks(25, 20, 25);
    s[2].setRollNo(3);
    s[2].setMarks(20, 15, 35);
    s[3].setRollNo(4);
    s[3].setMarks(35, 30, 40);
    cout << "Roll No" << setw(6) << "Sub1" << setw(6) << "Sub2" << setw(6) << "Sub3" << setw(8) << "Total" << setw(12) << "Percentage" << endl;
    for(int i=0; i<4; i++) 
	{
        s[i].display();
    }
}

