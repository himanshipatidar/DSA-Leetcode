#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle)
{
  while (haystack.length() > 0 && haystack.find(needle) < haystack.length())
  {
    return haystack.find(needle);
  }
  return -1;
}

int main()
{
  string haystack, needle;
  cout << "Enter haystack: ";
  cin >> haystack;
  cout << "Enter needle: ";
  cin >> needle;

  cout << strStr(haystack, needle);

  return 0;
}