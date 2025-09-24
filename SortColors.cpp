#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
  int n = nums.size();
  int low = 0, mid = 0, high = n - 1;

  while (mid <= high)
  {
    if (nums[mid] == 0)
    {
      swap(nums[low], nums[mid]);
      mid++, low++;
    }
    else if (nums[mid] == 1)
    {
      mid++;
    }
    else
    {
      swap(nums[high], nums[mid]);
      high--;
    }
  }
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

  sortColors(nums);

  cout << "After Sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << nums[i] << " ";
  }

  return 0;
}