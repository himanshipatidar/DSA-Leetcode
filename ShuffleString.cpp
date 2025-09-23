#include <iostream>
#include <string>
#include <vector>
using namespace std;

string restoreString(string s, vector<int> &indices)
{
  int len = s.length();
  string result = s;

  for (int i = 0; i < len; i++)
  {
    result[indices[i]] = s[i];
  }

  return result;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  int n;
  cout << "Enter value of n: ";
  cin >> n;

  cout << "Enter indices: ";
  vector<int> indices(n);
  for (int i = 0; i < n; i++)
  {
    cin >> indices[i];
  }

  string ans = restoreString(s, indices);
  cout << ans;

  return 0;
}