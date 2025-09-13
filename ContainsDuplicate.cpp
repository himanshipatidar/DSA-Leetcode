#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size() - 1; i++)
  {
    if (nums[i] == nums[i + 1])
    {
      return true;
    }
  }
  return false;
}

int main()
{
  vector<int> nums;
  int n;
  cout << "Enter number of values:";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int value;
    cin >> value;

    nums.push_back(value);
  }

  cout << "\nArray is: ";
  for (int i = 0; i < n; i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;

  if (containsDuplicate(nums))
  {
    cout << "True";
  }
  else
  {
    cout << "False";
  }

  return 0;
}