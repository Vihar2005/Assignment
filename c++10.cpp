#include <iostream>
using namespace std;
class Calculator 
{
private:
	
    int num1, num2;
public:
	
    Calculator(int n1, int n2) 
	{
        num1 = n1;
        num2 = n2;
    }
    int add() 
	{
        return num1 + num2;
    }
    int subtract() 
	{
        return num1 - num2;
    }
    int multiply() 
	{
        return num1 * num2;
    }
    float divide() 
	{
        if(num2 == 0) 
		{
            cout << "Error: division by zero" << endl;
            return 0.0f;
        }
        return (float)num1 / num2;
    }
};

int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Calculator c(a, b);
    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.subtract() << endl;
    cout << "Multiplication: " << c.multiply() << endl;
    cout << "Division: " << c.divide() << endl;
}

