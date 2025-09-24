#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();
  bool firstrow = false, firstcol = false;

  for (int j = 0; j < n; j++)
  {
    if (matrix[0][j] == 0)
    {
      firstrow = true;
      break;
    }
  }

  for (int i = 0; i < m; i++)
  {
    if (matrix[i][0] == 0)
    {
      firstcol = true;
      break;
    }
  }

  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (matrix[i][j] == 0)
      {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }

  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (matrix[i][0] == 0 || matrix[0][j] == 0)
      {
        matrix[i][j] = 0;
      }
    }
  }

  if (firstrow)
  {
    for (int j = 0; j < n; j++)
    {
      matrix[0][j] = 0;
    }
  }

  if (firstcol)
  {
    for (int i = 0; i < m; i++)
    {
      matrix[i][0] = 0;
    }
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

  setZeroes(matrix);

  cout << "Matrix after setting zeroes:\n";
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