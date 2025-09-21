#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceElements(vector<int> &arr)
{
  int n = arr.size();
  int maxR = -1;
  for (int i = n - 1; i >= 0; i--)
  {
    int temp = arr[i];
    arr[i] = maxR;
    if (temp > maxR)
    {
      maxR = temp;
    }
  }
  return arr;
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

  vector<int> result = replaceElements(nums);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}