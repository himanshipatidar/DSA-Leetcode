#include <iostream>
#include <vector>
using namespace std;

string simplifyPath(string path)
{
  vector<string> stack;
  string token;

  for (int i = 0; i <= path.size(); i++)
  {
    if (i == path.size() || path[i] == '/')
    {
      if (!token.empty())
      {
        if (token == ".")
        {
        }
        else if (token == "..")
        {
          if (!stack.empty())
          {
            stack.pop_back();
          }
        }
        else
        {
          stack.push_back(token);
        }
        token.clear();
      }
    }
    else
    {
      token += path[i];
    }
  }

  string result = "/";
  for (int i = 0; i < stack.size(); i++)
  {
    result += stack[i];
    if (i < stack.size() - 1)
    {
      result += "/";
    }
  }

  return result;
}

int main()
{
  string path;
  cout << "Enter path: ";
  cin >> path;

  string ans = simplifyPath(path);
  cout << ans;

  return 0;
}