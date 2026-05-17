#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> nums = {1, 2, 2, 1, 1};
  int n = nums.size();

  for (int val : nums)
  {
    int freq = 0;

    for (int el : nums)
    {
      if (el == val)
      {
        freq++;
      }
    }

    // When the condition is met, print the value before returning
    if (freq > n / 2)
    {
      cout << "The majority element is: " << val << endl;
      return 0; // Return 0 to indicate the program finished successfully
    }
  }

  // If no majority element is found (though the problem says there always is one)
  cout << "No majority element found." << endl;
  return 0;
}