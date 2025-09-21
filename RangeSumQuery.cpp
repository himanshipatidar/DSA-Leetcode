#include <iostream>
#include <vector>
using namespace std;

int sumRange(vector<int> &arr, int left, int right)
{
  int sum = 0;
  for (int i = left; i <= right; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int left, right;
  cout << "Enter left range: ";
  cin >> left;
  cout << "Enter right range: ";
  cin >> right;

  cout << "Sum: " << sumRange(arr, left, right);

  return 0;
}