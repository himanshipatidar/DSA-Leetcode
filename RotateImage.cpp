#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
  int n = matrix.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    reverse(matrix[i].begin(), matrix[i].end());
  }
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

  rotate(matrix);

  cout << "Matrix after rotating: \n";
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}