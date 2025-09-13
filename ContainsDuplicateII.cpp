#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
  unordered_map<int, int> m;

  for (int i = 0; i < nums.size(); i++)
  {
    if (m.count(nums[i]))
    {
      if (i - m[nums[i]] <= k)
      {
        return true;
      }
    }
    m[nums[i]] = i;
  }

  return false;
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  int k;
  cout << "Enter value of k: ";
  cin >> k;

  if (containsNearbyDuplicate(nums, k))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}