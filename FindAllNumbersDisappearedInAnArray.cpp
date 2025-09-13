#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
  vector<int> ans;
  set<int> s(nums.begin(), nums.end());

  for (int i = 1; i <= nums.size(); i++)
  {
    if (s.find(i) == s.end())
    {
      ans.push_back(i);
    }
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter value of n: ";
  cin >> n;

  vector<int> nums(n);

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  vector<int> result = findDisappearedNumbers(nums);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}