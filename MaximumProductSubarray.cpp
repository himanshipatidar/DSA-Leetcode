#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums)
{
  int prod;
  int maxProd = nums[0];
  for (int i = 0; i < nums.size(); i++)
  {
    prod = 1;
    for (int j = i; j < nums.size(); j++)
    {
      prod *= nums[j];
      maxProd = max(prod, maxProd);
    }
  }
  return maxProd;
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  cout << "Enter elements: ";
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  cout << "Maximum Product: " << maxProduct(nums);

  return 0;
}