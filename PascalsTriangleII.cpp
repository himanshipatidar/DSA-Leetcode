#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex)
{
  vector<vector<int>> ans;
  for (int i = 0; i <= rowIndex; i++)
  {
    vector<int> v(i + 1, 1);
    for (int j = 1; j < i; j++)
    {
      v[j] = ans[i - 1][j - 1] + ans[i - 1][j];
    }
    ans.push_back(v);
  }
  return ans[rowIndex];
}

int main()
{
  int rowIndex;
  cout << "Enter row index: ";
  cin >> rowIndex;

  vector<int> row = getRow(rowIndex);

  cout << "Row " << rowIndex << " of Pascal's Triangle: ";
  for (int num : row)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}