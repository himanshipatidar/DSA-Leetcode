#include <iostream>
using namespace std;

int knapsack(int weight[], int value[], int n, int target)
{
    if (n == 0 || target == 0)
    {
        return 0;
    }

    if (weight[n - 1] <= target)
    {
        return max(value[n - 1] + knapsack(weight, value, n - 1, target - weight[n - 1]), knapsack(weight, value, n - 1, target));
    }
    return knapsack(weight, value, n - 1, target);
}

int main()
{
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    int weight[n];
    int value[n];

    cout << "Enter weight of items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    cout << "Enter value of items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int target;
    cout << "Enter capacity of knapsack: ";
    cin >> target;

    cout << "Total profit: " << knapsack(weight, value, n, target);
    return 0;
}