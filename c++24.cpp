#include <iostream>
using namespace std;
class Number 
{
private:
    int num;
public:
    Number(int n) 
	{
        num = n;
    }
    friend void swap(Number& num1, Number& num2);
    void display() 
	{
        cout << "Number: " << num << endl;
    }
};

void swap(Number& num1, Number& num2) 
{
    int temp = num1.num;
    num1.num = num2.num;
    num2.num = temp;
}

int main() 
{
    Number n1(20);
    Number n2(10);
    cout << "Before swapping:" << endl;
    n1.display();
    n2.display();
    swap(n1, n2);
    cout << "After swapping:" << endl;
    n1.display();
    n2.display();

}

