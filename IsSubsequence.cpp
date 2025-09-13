#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t)
{
  int sidx = 0, tidx = 0;
  while (tidx < t.length() && sidx < s.length())
  {
    if (t[tidx] == s[sidx])
    {
      sidx++;
    }
    tidx++;
  }

  if (sidx == s.length())
  {
    return true;
  }
  return false;
}

int main()
{
  string s, t;
  cout << "Enter string t: ";
  cin >> t;
  cout << "Enter string s: ";
  cin >> s;

  if (isSubsequence(s, t))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}