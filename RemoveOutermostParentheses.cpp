#include <iostream>
#include <string>
using namespace std;

string removeOuterParentheses(string s)
{
  string ans;
  int count = 0;

  for (char ch : s)
  {
    if (ch == '(')
    {
      if (count > 0)
      {
        ans += ch;
      }
      count++;
    }
    else
    {
      count--;
      if (count > 0)
      {
        ans += ch;
      }
    }
  }
  return ans;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  string result = removeOuterParentheses(s);
  cout << result;

  return 0;
}