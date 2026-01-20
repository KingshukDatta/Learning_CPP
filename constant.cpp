#include <iostream>

int main()
{
  // const -> used to declare constant variables whose value cannot be changed after initialization.
  const double pi = 3.1416;
  // pi = 3.14; // This will give an error because pi is a constant and cannot be modified.
  std::cout << "The value of pi is: " << pi << std::endl;

  // Naming conventions
  int file_size; // Snake case naming convention
  int fileSize;  // Camel case naming convention
  int FileSize;  // Pascal case naming convention
  int iFileSize; // Hungarian notation naming convention

  return 0;
}