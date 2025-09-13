#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> ans;
  for (int i = 0; i < numRows; i++)
  {
    vector<int> v(i + 1, 1);
    for (int j = 1; j < i; j++)
    {
      v[j] = ans[i - 1][j] + ans[i - 1][j - 1];
    }
    ans.push_back(v);
  }
  return ans;
}

int main()
{
  int numRows = 5;
  vector<vector<int>> triangle = generate(numRows);

  for (auto row : triangle)
  {
    for (int val : row)
    {
      cout << val << " ";
    }
    cout << endl;
  }
  return 0;
}
