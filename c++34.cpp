#include <iostream>
class Numbers 
{
private:
  int num1, num2;

public:
  Numbers(int n1, int n2) 
  {
    num1 = n1;
    num2 = n2;
  }

  // Declare friend function
  friend int max(Numbers n);
};

// Define friend function to find the max number
int max(Numbers n) 
{
  if (n.num1 > n.num2) 
  {
    return n.num1;
  } 
  else 
  {
    return n.num2;
  }
}

int main() 
{
  int num1 = 5, num2 = 7;
  Numbers n(num1, num2);

  // Call friend function to find the max number
  int result = max(n);
  std::cout << "The max number between " << num1 << " and " << num2 << " is: " << result << std::endl;

}

