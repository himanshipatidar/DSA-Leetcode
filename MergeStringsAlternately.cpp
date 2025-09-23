#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2)
{
  string ans = "";
  int i = 0, j = 0;
  while (i < word1.size() && j < word2.size())
  {
    ans += word1[i];
    i++;
    ans += word2[j];
    j++;
  }
  while (i < word1.size())
  {
    ans += word1[i];
    i++;
  }
  while (j < word2.size())
  {
    ans += word2[j];
    j++;
  }
  return ans;
}

int main()
{
  string word1, word2;
  cout << "Enter word1: ";
  cin >> word1;
  cout << "Enter word2: ";
  cin >> word2;

  string result = mergeAlternately(word1, word2);
  cout << result;

  return 0;
}