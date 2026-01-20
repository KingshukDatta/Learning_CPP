#include <iostream>

int main()
{
  // in c++ if we just declare variables without asigning any value, it will store garbage value which is super inefficient for memory.
  // so thats why its the best practice to just initialize variables while declaring them.
  int fileSize = 100;
  std::cout << fileSize << std::endl;
  std::cout << "Hello, World!" << std::endl; // cout means "character output". endl means "end line". std is the standard namespace where cout and endl live.
  return 0;
}