// find the  smallest/ largest element in an array
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  // initialize array and size
  int nums[] = {5, 15, 22, 1, -15, 24};
  int size = 6;

  // initialize smallest and largest number to compare
  int smallest = INT_MAX;
  int largest = INT_MIN;
  int smallestIndex = 0;
  int largestIndex = 0;

  // loop through the array and compare each element to smallest and largest
  for (int i = 0; i < size; i++)
  {
    // if the current element is smaller than smallest, update smallest
    if (nums[i] < smallest)
    {
      smallest = nums[i];
      smallestIndex = i;
    }
    if (nums[i] > largest)
    {
      largest = nums[i];
      largestIndex = i;
    }

    // if we used min max functions, we could do this in one line:
    // smallest = min(smallest, nums[i]);
    // largest = max(largest, nums[i]);
  }
  cout << "Smallest: " << smallest << ", Largest: " << largest << endl;
  cout << "Smallest Index: " << smallestIndex << ", Largest Index: " << largestIndex << endl;
}