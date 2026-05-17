// 2 pointer approach
#include <iostream>
#include <vector>
using namespace std;

// function for finding pair
vector<int> pairSum(vector<int> nums, int target)
{
  int n = nums.size();
  vector<int> ans;

  int i = 0, j = n - 1;
  while (i < j)
  {

    int currentSum = nums[i] + nums[j];

    if (currentSum > target)
    {
      j--;
    }
    else if (currentSum < target)
    {
      i++;
    }
    else
    {

      ans.push_back(i);
      ans.push_back(j);
      return ans;
    }
  }
  return ans;
}

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 13;

  vector<int> ans = pairSum(nums, target);
  cout << ans[0] << "," << ans[1] << endl;
  return 0;
}