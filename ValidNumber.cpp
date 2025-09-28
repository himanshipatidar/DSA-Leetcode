#include <iostream>
using namespace std;

bool isNumber(string s)
{
  bool num = false, dot = false, e = false, numAfterE = true;
  for (int i = 0; i < s.size(); i++)
  {
    char ch = s[i];
    if (ch >= '0' && ch <= '9')
    {
      num = true;
      if (e)
        numAfterE = true;
    }
    else if (ch == '+' || ch == '-')
    {
      if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E')
        return false;
    }
    else if (ch == '.')
    {
      if (dot || e)
        return false;
      dot = true;
    }
    else if (ch == 'e' || ch == 'E')
    {
      if (e || !num)
        return false;
      e = true;
      numAfterE = false;
    }
    else
      return false;
  }
  return num && numAfterE;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  if (isNumber(s))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}