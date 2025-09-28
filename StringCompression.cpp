#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
  int n = chars.size();
  int index = 0;
  for (int i = 0; i < n; i++)
  {
    char ch = chars[i];
    int count = 0;
    while (i < n && chars[i] == ch)
    {
      count++;
      i++;
    }
    if (count == 1)
    {
      chars[index++] = ch;
    }
    else
    {
      chars[index++] = ch;
      string str = to_string(count);
      for (char digit : str)
      {
        chars[index++] = digit;
      }
    }
    i--;
  }
  chars.resize(index);
  return index;
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  vector<char> chars(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> chars[i];
  }

  cout << compress(chars);
  return 0;
}