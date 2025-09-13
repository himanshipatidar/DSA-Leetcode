#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
  int i = m - 1, j = n - 1, idx = m + n - 1;
  while (i >= 0 && j >= 0)
  {
    if (nums1[i] >= nums2[j])
    {
      nums1[idx--] = nums1[i--];
    }
    else
    {
      nums1[idx--] = nums2[j--];
    }
  }

  while (j >= 0)
  {
    nums1[idx--] = nums2[j--];
  }

  cout << "\nMerged sorted array is: ";
  for (int i = 0; i < m + n; i++)
  {
    cout << nums1[i] << " ";
  }
}

int main()
{
  int m, n;
  cout << "Enter value of m: ";
  cin >> m;
  cout << "Enter value of n: ";
  cin >> n;

  vector<int> nums1(m + n);
  vector<int> nums2(n);

  cout << "\nEnter first sorted array: ";
  for (int i = 0; i < m; i++)
  {
    cin >> nums1[i];
  }

  cout << "\nEnter second sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> nums2[i];
  }

  merge(nums1, m, nums2, n);

  return 0;
}