#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
  int n = nums.size();
  int maxSum = nums[0];
  int currentSum = nums[0];
  for (int i = 1; i < n; i++)
  {
    currentSum = max(nums[i], currentSum + nums[i]);
    maxSum = max(maxSum, currentSum);
  }
  return maxSum;
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> nums(n);

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  cout << "Max Sum : " << maxSubArray(nums);
  return 0;
}