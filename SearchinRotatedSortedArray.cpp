#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
  int st = 0, end = nums.size() - 1;
  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (nums[mid] == target)
    {
      return mid;
    }
    if (nums[st] <= nums[mid])
    {
      if (nums[st] <= target && target <= nums[mid])
      {
        end = mid - 1;
      }
      else
      {
        st = mid + 1;
      }
    }
    else
    {
      if (nums[mid] <= target && target <= nums[end])
      {
        st = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }
  return -1;
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

  int target;
  cout << "Enter target: ";
  cin >> target;

  cout << "Index is: " << search(nums, target);

  return 0;
}