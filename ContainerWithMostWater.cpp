#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
  int maxWater = 0;
  int lp = 0, rp = height.size() - 1;
  while (lp < rp)
  {
    int w = rp - lp;
    int ht = min(height[lp], height[rp]);
    int currWater = w * ht;
    maxWater = max(maxWater, currWater);
    height[lp] < height[rp] ? lp++ : rp--;
  }
  return maxWater;
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

  cout << "Max Area: " << maxArea(nums);
  return 0;
}