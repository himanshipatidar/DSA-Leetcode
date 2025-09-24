#include <iostream>
#include <string>
using namespace std;

int firstUniqChar(string s)
{
  int charCount[26] = {0};
  for (char c : s)
  {
    charCount[c - 'a']++;
  }
  for (int i = 0; i < s.length(); i++)
  {
    if (charCount[s[i] - 'a'] == 1)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  cout << firstUniqChar(s);

  return 0;
}