#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address)
{
  string defanged = "";
  for (char ch : address)
  {
    if (ch == '.')
    {
      defanged += "[.]";
    }
    else
    {
      defanged += ch;
    }
  }
  return defanged;
}

int main()
{
  string address;
  cout << "Enter string: ";
  cin >> address;

  string ans = defangIPaddr(address);
  cout << ans;

  return 0;
}