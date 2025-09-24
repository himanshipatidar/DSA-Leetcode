#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
  sort(intervals.begin(), intervals.end());
  vector<vector<int>> ans;

  ans.push_back(intervals[0]);
  for (int i = 1; i < intervals.size(); i++)
  {
    vector<int> &lastInterval = ans.back();
    if (intervals[i][0] <= lastInterval[1])
    {
      lastInterval[1] = max(lastInterval[1], intervals[i][1]);
    }
    else
    {
      ans.push_back(intervals[i]);
    }
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter number of intervals: ";
  cin >> n;

  vector<vector<int>> intervals(n, vector<int>(2));
  cout << "Enter intervals (start end):\n";
  for (int i = 0; i < n; i++)
  {
    cin >> intervals[i][0] >> intervals[i][1];
  }

  vector<vector<int>> merged = merge(intervals);

  cout << "Merged intervals:\n";
  for (auto &interval : merged)
  {
    cout << "[" << interval[0] << ", " << interval[1] << "] ";
  }
  cout << endl;

  return 0;
}