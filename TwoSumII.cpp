#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
  vector<int> ans;
  int n = numbers.size();
  int i = 0, j = n - 1;
  while (i < j)
  {
    int pairsum = numbers[i] + numbers[j];
    if (pairsum < target)
    {
      i++;
    }
    else if (pairsum > target)
    {
      j--;
    }
    else
    {
      ans.push_back(i + 1);
      ans.push_back(j + 1);
      break;
    }
  }
  return ans;
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