#include <iostream>
#include <string>
using namespace std;

string interpret(string command)
{
  string ans = "";
  int i = 0;
  while (i < command.length())
  {
    if (command[i] == 'G')
    {
      ans += 'G';
      i++;
    }
    else if (command[i] == '(' && command[i + 1] == ')')
    {
      ans += 'o';
      i += 2;
    }
    else
    {
      ans += "al";
      i += 4;
    }
  }
  return ans;
}

int main()
{
  string command;
  cout << "Enter command: ";
  cin >> command;

  string result = interpret(command);
  cout << result;

  return 0;
}