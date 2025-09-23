#include <iostream>
#include <string>
using namespace std;

string reverseOnlyLetters(string s)
{
  int st = 0, end = s.size() - 1;

  while (st < end)
  {
    if (!isalpha(s[st]))
    {
      st++;
    }
    else if (!isalpha(s[end]))
    {
      end--;
    }
    else
    {
      swap(s[st], s[end]);
      st++;
      end--;
    }
  }

  return s;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  string ans = reverseOnlyLetters(s);
  cout << ans;

  return 0;
}