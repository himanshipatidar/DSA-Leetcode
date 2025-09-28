#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string minRemoveToMakeValid(string s)
{
  string result = "";
  int count = 0;
  for (char ch : s)
  {
    if (ch >= 'a' && ch <= 'z')
    {
      result += ch;
    }
    else if (ch == '(')
    {
      count++;
      result += ch;
    }
    else if (ch == ')')
    {
      if (count > 0)
      {
        count--;
        result += ch;
      }
    }
  }
  string ans = "";
  for (int i = result.size() - 1; i >= 0; i--)
  {
    if (result[i] == '(' && count > 0)
    {
      count--;
    }
    else
    {
      ans += result[i];
    }
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  string ans = minRemoveToMakeValid(s);
  cout << ans;

  return 0;
}