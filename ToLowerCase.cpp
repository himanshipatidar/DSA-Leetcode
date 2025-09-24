#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s)
{
  string ans = "";
  for (char ch : s)
  {
    ans += tolower(ch);
  }
  return ans;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  string result = toLowerCase(s);
  cout << result;

  return 0;
}