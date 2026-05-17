#include <iostream>

int main()
{
  // if both number is integer then the result will be integer. For that we change one number to double to get precise result.
  double x = 10;
  int y = 3;
  int p = 5;
  int q = 2;

  // Arithmetic Operators: +, -, *, /, %
  // order of operations: parentheses, exponents, multiplication/division, addition/subtraction
  double z = x + y; // Addition
  std::cout << "x + y = " << z << std::endl;

  z = x - y; // Subtraction
  std::cout << "x - y = " << z << std::endl;

  z = x * y; // Multiplication
  std::cout << "x * y = " << z << std::endl;

  z = x / y; // Division
  std::cout << "x / y = " << z << std::endl;

  z = q % p; // Modulus (remainder)
  std::cout << "q % p = " << z << std::endl;

  // increment and decrement operators
  int a = 5;
  int b = a++; // post-increment
  std::cout << "Value of b (post-increment): " << b << std::endl;
  int c = ++a; // pre-increment
  std::cout << "Value of c (pre-increment): " << c << std::endl;
  a++; // increment by 1
  std::cout << "Value of a after increment: " << a << std::endl;
  a--; // decrement by 1
  std::cout << "Value of a after decrement: " << a << std::endl;
}