#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
  int n = strs.size();

  vector<vector<string>> result;
  unordered_map<string, vector<string>> m;
  for (int i = 0; i < n; i++)
  {
    string temp = strs[i];
    sort(temp.begin(), temp.end());
    m[temp].push_back(strs[i]);
  }

  for (auto it : m)
  {
    result.push_back(it.second);
  }

  return result;
}

int main()
{
  vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

  vector<vector<string>> ans = groupAnagrams(strs);

  cout << "Grouped Anagrams:" << endl;
  for (auto group : ans)
  {
    cout << "[ ";
    for (auto word : group)
    {
      cout << word << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}