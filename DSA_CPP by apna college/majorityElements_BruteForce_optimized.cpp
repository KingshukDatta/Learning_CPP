#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = {1, 2, 2, 1, 1};
  int n = nums.size();

  // sort: sort(begining_point, end_point)
  sort(nums.begin(), nums.end());

  // frequency
  int freq = 0, ans = nums[0];

  for (int val : nums)
  {
    if (ans == val)
    {
      freq++;
    }
    else
    {
      freq = 1;
      ans = val;
    }
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
