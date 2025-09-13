#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  int count = 1;
  int majEl = nums[0];
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] == nums[i - 1])
    {
      count++;
    }
    else
    {
      count = 1;
      majEl = nums[i];
    }
    if (count > (nums.size() / 2))
    {
      return majEl;
    }
  }
  return 0;
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

  cout << "\nMajority element is: " << majorityElement(nums);

  return 0;
}