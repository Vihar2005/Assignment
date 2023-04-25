#include <iostream>

// Inline function to calculate the multiplication of two numbers
inline int multiply(int a, int b) {
  return a * b;
}

// Inline function to calculate the cubic of a number
inline int cube(int a) {
  return a * a * a;
}

int main() {
  int num1 = 5, num2 = 7, num3 = 3;

  // Calculate multiplication of two numbers
  int result1 = multiply(num1, num2);
  std::cout << "Multiplication of " << num1 << " and " << num2 << " is: " << result1 << std::endl;

  // Calculate cubic of a number
  int result2 = cube(num3);
  std::cout << "Cubic of " << num3 << " is: " << result2 << std::endl;

  return 0;
}

