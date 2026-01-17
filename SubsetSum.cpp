#include <iostream>
using namespace std;

bool subsetsum(int arr[], int n, int sum, bool dp[][1000])
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][sum];
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter target sum: ";
    cin >> sum;

    bool dp[n + 1][1000];

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
            {
                dp[i][j] = false;
            }
            if (j == 0)
            {
                dp[i][j] = true;
            }
        }
    }

    bool result = subsetsum(arr, n, sum, dp);
    if (result)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}