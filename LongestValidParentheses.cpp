#include <iostream>
#include <stack>
using namespace std;

int longestValidParentheses(string s)
{
  stack<int> st;
  st.push(-1);
  int len = 0;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '(')
    {
      st.push(i);
    }
    else
    {
      st.pop();
      if (st.empty())
      {
        st.push(i);
      }
      else
      {
        len = max(len, i - st.top());
      }
    }
  }
  return len;
}

int main()
{
  string s;
  cout << "Enter string: ";
  cin >> s;

  cout << longestValidParentheses(s);
  return 0;
}