#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &nums)
{
  int st = 0, end = nums.size() - 1;
  while (st < end)
  {
    int mid = st + (end - st) / 2;
    if (nums[mid] < nums[end])
    {
      end = mid;
    }
    else
    {
      st = mid + 1;
    }
  }
  return nums[st];
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  vector<int> nums(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  cout << "Minimum is: " << findMin(nums);

  return 0;
}