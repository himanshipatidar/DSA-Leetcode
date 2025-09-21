#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
  int low = 0, high = nums.size() - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (target > nums[mid])
    {
      low = mid + 1;
    }
    else if (target < nums[mid])
    {
      high = mid - 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
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

  int target;
  cout << "\nEnter target: ";
  cin >> target;

  cout << search(nums, target);

  return 0;
}