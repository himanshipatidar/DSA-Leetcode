#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
  int st = 0, end = s.size() - 1;
  while (st < end)
  {
    swap(s[st++], s[end--]);
  }
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  vector<char> s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  reverseString(s);
  cout << "\nReversed string is: ";
  for (int i = 0; i < n; i++)
  {
    cout << s[i] << " ";
  }

  return 0;
}