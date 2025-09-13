#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
  int bestBuy = prices[0];
  int maxProfit = 0;
  for (int i = 1; i < prices.size(); i++)
  {
    if (prices[i] < bestBuy)
    {
      bestBuy = prices[i];
    }
    int profit = prices[i] - bestBuy;
    if (maxProfit < profit)
    {
      maxProfit = profit;
    }
  }
  return maxProfit;
}

int main()
{
  int n;
  cout << "Enter number of prices: ";
  cin >> n;

  vector<int> prices(n);

  cout << "Enter prices: ";
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i];
  }

  cout << "\nMaximum Profit is: " << maxProfit(prices);
  return 0;
}