#include <iostream>
#include <vector>
using namespace std;

string convert(string s, int numRows)
{
  if (numRows == 1 || numRows >= s.size())
  {
    return s;
  }
  vector<string> rows(numRows);
  int row = 0;
  bool down = false;

  for (char ch : s)
  {
    rows[row] += ch;

    if (row == 0 || row == numRows - 1)
    {
      down = !down;
    }
    row += down ? 1 : -1;
  }
  string result = "";
  for (string &r : rows)
  {
    result += r;
  }
  return result;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  int numRows;
  cout << "Enter number of rows: ";
  cin >> numRows;

  string ans = convert(s, numRows);
  cout << ans;

  return 0;
}