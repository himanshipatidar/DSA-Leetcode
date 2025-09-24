#include <iostream>
#include <vector>
using namespace std;

int characterReplacement(string s, int k)
{
  vector<int> freq(26, 0);
  int i = 0, maxFreq = 0, maxLen = 0;

  for (int j = 0; j < s.size(); j++)
  {
    freq[s[j] - 'A']++;
    maxFreq = max(maxFreq, freq[s[j] - 'A']);

    while ((j - i + 1) - maxFreq > k)
    {
      freq[s[i] - 'A']--;
      i++;
    }
    maxLen = max(maxLen, j - i + 1);
  }
  return maxLen;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  int k;
  cout << "Enter k: ";
  cin >> k;

  cout << characterReplacement(s, k);

  return 0;
}