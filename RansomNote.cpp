#include <iostream>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
  int freq[26] = {0};

  for (char c : magazine)
  {
    freq[c - 'a']++;
  }
  for (char c : ransomNote)
  {
    if (--freq[c - 'a'] < 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string ransomNote, magazine;
  cout << "Enter magazine: ";
  cin >> magazine;
  cout << "Enter ransomNote: ";
  cin >> ransomNote;

  if (canConstruct(ransomNote, magazine))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}