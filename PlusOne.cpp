#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
  int n = digits.size();

  for (int i = n - 1; i >= 0; i--)
  {
    if (digits[i] < 9)
    {
      digits[i]++;
      return digits;
    }
    digits[i] = 0;
  }
  vector<int> newDigits;
  newDigits.push_back(1);
  for (int d : digits)
  {
    newDigits.push_back(d);
  }
  digits = newDigits;
  return digits;
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

  vector<int> result = plusOne(nums);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}