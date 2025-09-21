#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s)
{
  int length = 0;
  bool foundSpace = false;
  for (int i = s.length() - 1; i >= 0; i--)
  {
    if (s[i] != ' ')
    {
      length++;
      foundSpace = true;
    }
    else if (foundSpace)
    {
      break;
    }
  }
  return length;
}

int main()
{
  string s;
  cout << "Enter string: ";
  getline(cin, s);

  cout << lengthOfLastWord(s);

  return 0;
}