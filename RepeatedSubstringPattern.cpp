#include <iostream>
using namespace std;

bool repeatedSubstringPattern(string s)
{
  for (int i = 1; i <= s.size() / 2; i++)
  {
    if (s.size() % i != 0)
    {
      continue;
    }

    string substring = s.substr(0, i);
    string s1 = "";

    int times = s.size() / i;

    for (int i = 0; i < times; i++)
    {
      s1 += substring;
    }

    if (s1 == s)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  if (repeatedSubstringPattern(s))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }
}