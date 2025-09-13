#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
  int i = 0;
  for (int j : nums)
  {
    if (j != val)
    {
      nums[i++] = j;
    }
  }
  return i;
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

  int val;
  cout << "Enter element to remove:";
  cin >> val;

  cout << removeElement(nums, val);
  return 0;
}