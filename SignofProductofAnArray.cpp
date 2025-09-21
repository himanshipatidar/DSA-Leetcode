#include <iostream>
#include <vector>
using namespace std;

int arraySign(vector<int> &nums)
{
  int n = nums.size();
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == 0)
    {
      return 0;
    }
    if (nums[i] < 0)
    {
      count++;
    }
  }
  if (count % 2 == 0)
  {
    return 1;
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

  cout << arraySign(nums);

  return 0;
}