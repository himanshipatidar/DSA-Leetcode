#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
  int m = matrix.size(), n = matrix[0].size();
  int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
  vector<int> ans;
  while (srow <= erow && scol <= ecol)
  {
    for (int j = scol; j <= ecol; j++)
    {
      ans.push_back(matrix[srow][j]);
    }
    for (int i = srow + 1; i <= erow; i++)
    {
      ans.push_back(matrix[i][ecol]);
    }
    for (int j = ecol - 1; j >= scol; j--)
    {
      if (srow == erow)
      {
        break;
      }
      ans.push_back(matrix[erow][j]);
    }
    for (int i = erow - 1; i >= srow + 1; i--)
    {
      if (scol == ecol)
      {
        break;
      }
      ans.push_back(matrix[i][scol]);
    }
    srow++;
    erow--;
    scol++;
    ecol--;
  }
  return ans;
}

int main()
{
  int m, n;
  cout << "Enter number of rows: ";
  cin >> m;
  cout << "Enter number of columns: ";
  cin >> n;

  vector<vector<int>> matrix(m, vector<int>(n));
  cout << "Enter matrix elements row-wise:\n";
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matrix[i][j];
    }
  }

  cout << "Spiral Matrix: \n";
  vector<int> result = spiralOrder(matrix);
  for (int i = 0; i < m * n; i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}