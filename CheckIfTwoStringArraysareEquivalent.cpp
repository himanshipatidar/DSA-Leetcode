#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
  string s1 = "";
  string s2 = "";
  for (string w : word1)
  {
    s1 += w;
  }
  for (string w : word2)
  {
    s2 += w;
  }
  return s1 == s2;
}

int main()
{
  int n1, n2;
  cout << "Enter number of strings in first array: ";
  cin >> n1;
  vector<string> word1(n1);
  cout << "Enter strings for first array:\n";
  for (int i = 0; i < n1; i++)
  {
    cin >> word1[i];
  }

  cout << "Enter number of strings in second array: ";
  cin >> n2;
  vector<string> word2(n2);
  cout << "Enter strings for second array:\n";
  for (int i = 0; i < n2; i++)
  {
    cin >> word2[i];
  }

  if (arrayStringsAreEqual(word1, word2))
  {
    cout << "true\n";
  }
  else
  {
    cout << "false\n";
  }

  return 0;
}