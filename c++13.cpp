#include<iostream>
using namespace std;

// Inline function to find the multiplication of two numbers
inline int multiply(int a, int b) 
{
    return a * b;
}

// Inline function to find the cubic value of a number
inline int cube(int x) 
{
    return x * x * x;
}

int main() 
{
    int num1 = 4, num2 = 5;
    int product = multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;

    int num3 = 3;
    int cubic = cube(num3);
    cout << "The cubic value of " << num3 << " is " << cubic << endl;

}

