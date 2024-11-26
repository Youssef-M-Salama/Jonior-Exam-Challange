#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr), cout.tie(nullptr);


signed main()
{
    int n;
    cin >> n;

    ll ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        int x = i;
        int sum = 0;

        // Extract and check each digit of `x`.
        while (x)
        {
            if ((x % 10) & 1) // Check if the last digit is odd (`x % 10` returns the last digit, `& 1` checks if it's odd).
            {
                sum += x % 10; // Add the odd digit to `sum`.
            }
            x /= 10; // Remove the last digit from `x` (integer division by 10).
        }

        // If the sum of odd digits is <= 15, add it to the total `ans`.
        if (sum <= 15)
        {
            ans += sum;
        }
    }

    cout << ans;

    return 0;
}
