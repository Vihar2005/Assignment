#include <iostream>
using namespace std;
class Number 
{
    private:
        int value;
    
    public:
        Number() 
		{
            value = 0;
        }
    
        Number(int val) 
		{
            value = val;
        }
    
        Number operator+(const Number &num) const 
		{
            return Number(value + num.value);
        }
    
        Number operator-(const Number &num) const 
		{
            return Number(value - num.value);
        }
    
        Number operator*(const Number &num) const 
		{
            return Number(value * num.value);
        }
    
        friend ostream& operator<<(ostream &out, const Number &num);
};

ostream& operator<<(ostream &out, const Number &num) 
{
    out << num.value;
    return out;
}

int main() 
{
    Number num1(10), num2(5), result;
    char operation;
    
    cout << "Enter the operation (+, -, *): ";
    cin >> operation;
    
    switch(operation) 
	{
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            cout << "Invalid operation" << endl;
    }
    
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
}

