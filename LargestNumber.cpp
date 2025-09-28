#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string largestNumber(vector<int> &nums)
{
  vector<string> str;
  for (int num : nums)
  {
    str.push_back(to_string(num));
  }

  sort(str.begin(), str.end(), [](const string &a, const string &b)
       { return a + b > b + a; });

  string ans = "";
  for (string s : str)
  {
    ans += s;
  }

  if (ans[0] == '0')
  {
    return "0";
  }

  return ans;
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  vector<int> nums(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  string ans = largestNumber(nums);
  cout << ans;

  return 0;
}