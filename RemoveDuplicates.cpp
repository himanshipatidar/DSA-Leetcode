#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
  if (nums.empty())
  {
    return 0;
  }
  int count = 1;
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] != nums[i - 1])
    {
      nums[count] = nums[i];
      count++;
    }
  }
  return count;
}

int main()
{
  int n;
  cout << "Enter number of elements:";
  cin >> n;

  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  cout << removeDuplicates(nums);
  return 0;
}