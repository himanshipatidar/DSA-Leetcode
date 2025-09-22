#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s, int st, int end)
{
  while (st < end)
  {
    if (s[st] != s[end])
    {
      return false;
    }
    st++;
    end--;
  }
  return true;
}

bool validPalindrome(string s)
{
  int st = 0, end = s.size() - 1;
  while (st < end)
  {
    if (s[st] == s[end])
    {
      st++;
      end--;
    }
    else
    {
      return palindrome(s, st + 1, end) || palindrome(s, st, end - 1);
    }
  }
  return true;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  if (validPalindrome(s))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}