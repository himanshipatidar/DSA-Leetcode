#include <iostream>
using namespace std;

bool equalsum(int arr[], int n, int arrsum, bool dp[][1000])
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= arrsum; j++)
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
    return dp[n][arrsum];
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

    int arrsum = 0;
    for (int i = 0; i < n; i++)
    {
        arrsum += arr[i];
    }

    if (arrsum % 2 != 0)
    {
        cout << "false";
        return 0;
    }

    arrsum /= 2;

    bool dp[n + 1][1000];

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < arrsum + 1; j++)
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

    bool result = equalsum(arr, n, arrsum, dp);
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