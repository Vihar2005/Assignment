#include <iostream>
using namespace std;

int mathOp(int a, int b) 
{
    return a + b;
}


double mathOp(double a, double b) 
{
    return a - b;
}


int mathOp(int a, int b, int c) 
{
    return a * b * c;
}

double mathOp(double a, int b) 
{
    return a / b;
}

int main() 
{
    int num1 = 10, num2 = 5, num3 = 2;
    double num4 = 7.5, num5 = 2.5;

    // Addition
    int sum1 = mathOp(num1, num2);
    double sum2 = mathOp(num4, num5);
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum1 << endl;
    cout << "The sum of " << num4 << " and " << num5 << " is " << sum2 << endl;

    // Subtraction
    double diff1 = mathOp(num4, num5);
    cout << "The difference of " << num4 << " and " << num5 << " is " << diff1 << endl;

    // Multiplication
    int prod1 = mathOp(num1, num2, num3);
    cout << "The product of " << num1 << ", " << num2 << ", and " << num3 << " is " << prod1 << endl;

    // Division
    double quot1 = mathOp(num4, num2);
    cout << "The quotient of " << num4 << " and " << num2 << " is " << quot1 << endl;
}

