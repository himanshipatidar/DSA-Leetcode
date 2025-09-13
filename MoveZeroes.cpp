#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
  int lastNonZeroIndex = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] != 0)
    {
      nums[lastNonZeroIndex] = nums[i];
      lastNonZeroIndex++;
    }
  }
  for (int i = lastNonZeroIndex; i < nums.size(); i++)
  {
    nums[i] = 0;
  }
}

int main()
{
  int n;
  cout << "Enter number of values:";
  cin >> n;

  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  moveZeroes(nums);
  for (int i = 0; i < n; i++)
  {
    cout << nums[i] << " ";
  }
  return 0;
}