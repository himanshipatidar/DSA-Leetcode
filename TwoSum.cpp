#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i + 1; j < nums.size(); j++)
    {
      int pairsum = nums[i] + nums[j];
      if (pairsum == target)
      {
        return {i, j};
      }
    }
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

  int target;
  cout << "Enter target: ";
  cin >> target;

  vector<int> ans = twoSum(nums, target);
  for (int value : ans)
  {
    cout << value << " ";
  }

  return 0;
}