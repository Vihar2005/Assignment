#include <iostream>

// Define inline functions to calculate multiplication and cubic values
inline int multiply(int x, int y) { return x * y; }
inline int cube(int x) { return x * x * x; }

int main() {
    int a = 5, b = 3;
    
    // Calculate multiplication value using inline function
    int mult = multiply(a, b);
    std::cout << a << " * " << b << " = " << mult << std::endl;
    
    // Calculate cubic value using inline function
    int cub = cube(a);
    std::cout << a << "^3 = " << cub << std::endl;
    
    return 0;
}

