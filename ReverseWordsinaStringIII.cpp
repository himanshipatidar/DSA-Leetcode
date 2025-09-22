#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
  string word, result;
  for (char c : s)
  {
    if (c != ' ')
    {
      word += c;
    }
    else
    {
      if (!word.empty())
      {
        reverse(word.begin(), word.end());
        result += word + " ";
        word.clear();
      }
    }
  }
  if (!word.empty())
  {
    reverse(word.begin(), word.end());
    result += word;
  }
  return result;
}

int main()
{
  string s;
  getline(cin, s);

  string ans = reverseWords(s);
  cout << ans << endl;

  return 0;
}