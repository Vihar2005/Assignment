#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double a = 2.5, b = 3.8;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

}

