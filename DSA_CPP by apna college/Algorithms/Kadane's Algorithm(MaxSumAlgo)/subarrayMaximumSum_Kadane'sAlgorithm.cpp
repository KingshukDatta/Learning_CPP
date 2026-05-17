// Kadane's Algorithm
#include <iostream>
#include <climits>   // Required for INT_MIN
#include <algorithm> // Required for max()
using namespace std;

int main()
{
  int n = 7;
  int arr[7] = {3, -4, 5, 4, -1, 7, -8};
  int currentSum = 0;
  int maxSum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    currentSum += arr[i];
    maxSum = max(currentSum, maxSum);

    if (currentSum < 0)
    {
      currentSum = 0;
    }
  }
  cout << "Max Sum of the Subarray is " << maxSum << endl;
}