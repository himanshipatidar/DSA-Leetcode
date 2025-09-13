#include <iostream>
using namespace std;

bool isAlphaNum(char c)
{
  if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
  {
    return true;
  }
  return false;
}

bool isPalindrome(string s)
{
  int st = 0, end = s.length() - 1;
  while (st < end)
  {
    if (isAlphaNum(!s[st]))
    {
      st++;
      continue;
    }
    if (isAlphaNum(!s[end]))
    {
      end--;
      continue;
    }
    if (tolower(s[st]) != tolower(s[end]))
    {
      return false;
    }
    st++;
    end--;
  }
  return true;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  if (isPalindrome(s))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}