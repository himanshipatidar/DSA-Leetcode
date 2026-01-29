#include <iostream>
using namespace std;

int LCS(string x, string y, int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }

    if (x[m - 1] == y[n - 1])
    {
        return 1 + LCS(x, y, m - 1, n - 1);
    }

    return max(LCS(x, y, m - 1, n), LCS(x, y, m, n - 1));
}

int main()
{
    string x, y;
    cout << "Enter string x: ";
    cin >> x;

    cout << "Enter string y: ";
    cin >> y;

    int m = x.length();
    int n = y.length();

    cout << LCS(x, y, m, n);
    return 0;
}