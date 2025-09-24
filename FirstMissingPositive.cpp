#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
    {
      swap(nums[i], nums[nums[i] - 1]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (nums[i] != i + 1)
    {
      return i + 1;
    }
  }
  return n + 1;
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  cout << "Enter elements: ";
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  cout << "First Missing Positive is:  " << firstMissingPositive(nums);

  return 0;
}