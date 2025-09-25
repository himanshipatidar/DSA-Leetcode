#include <iostream>
#include <string>
using namespace std;

int expand(string &s, int left, int right)
{
  int cnt = 0;
  while (left >= 0 && right < s.size() && s[left] == s[right])
  {
    cnt++;
    left--;
    right++;
  }
  return cnt;
}

int countSubstrings(string s)
{
  int n = s.size();
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    count += expand(s, i, i);
    count += expand(s, i, i + 1);
  }
  return count;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  cout << countSubstrings(s);

  return 0;
}