#include <iostream>
#include <string>
using namespace std;

bool detectCapitalUse(string word)
{
  int count = 0;
  for (char ch : word)
  {
    if (isupper(ch))
    {
      count++;
    }
  }

  if (count == 0)
  {
    return true;
  }
  if (count == 1 && isupper(word[0]))
  {
    return true;
  }
  if (count == word.length())
  {
    return true;
  }
  return false;
}

int main()
{
  string word;
  cout << "Enter word: ";
  cin >> word;

  if (detectCapitalUse(word))
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }

  return 0;
}