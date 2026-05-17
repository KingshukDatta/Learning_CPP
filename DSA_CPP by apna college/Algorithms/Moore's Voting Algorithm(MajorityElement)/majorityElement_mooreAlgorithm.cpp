#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = {1, 2, 2, 1, 1};
  int n = nums.size();

  // frequency
  int freq = 0, ans = 0;

  for (int val : nums)
  {
    if (freq == 0)
    {
      ans = val;
    }
    if (ans == val)
    {
      freq++;
    }
    else
    {
      freq--;
    }
  }
  cout << "majority Element" << ans << endl;
  return 0;
}
