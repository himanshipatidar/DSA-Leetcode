#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{
  if (s.length() != t.length())
    return false;

  unordered_map<char, char> st;
  unordered_map<char, char> ts;

  for (int i = 0; i < s.length(); i++)
  {
    char ch1 = s[i];
    char ch2 = t[i];

    if (st.count(ch1) && st[ch1] != ch2)
      return false;
    if (ts.count(ch2) && ts[ch2] != ch1)
      return false;

    st[ch1] = ch2;
    ts[ch2] = ch1;
  }

  return true;
}

int main()
{
  string s, t;
  cout << "Enter first string: ";
  cin >> s;
  cout << "Enter second string: ";
  cin >> t;

  if (isIsomorphic(s, t))
    cout << "true";
  else
    cout << "false";

  return 0;
}
