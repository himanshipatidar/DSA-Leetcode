#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t)
{
  if (s.length() != t.length())
  {
    return false;
  }
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  return s == t;
}

int main()
{
  string s, t;
  cout << "Enter string s: ";
  cin >> s;
  cout << "Enter string t: ";
  cin >> t;

  if (isAnagram(s, t))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}