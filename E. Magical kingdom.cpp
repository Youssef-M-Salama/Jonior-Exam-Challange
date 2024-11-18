#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <string>
#define ll long long
using namespace std;

// Define a macro to optimize input and output operations for competitive programming
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    speed // Apply fast input/output for efficient performance

        int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<ll> v(n + 1);
        ll Sum = 0;

        for (int i = 1; i <= n; ++i)
        {
            cin >> v[i];
            Sum += v[i];
        }

        // Compute the prefix sum array
        for (int i = 1; i <= n; ++i)
        {
            v[i] += v[i - 1]; // Add the previous element to create the prefix sum
        }

        // Process each query
        while (q--)
        {
            ll l, r, k;         // Variables for the query: range `[l, r]` and value `k`
            cin >> l >> r >> k; // Input `l`, `r`, and `k`

            // Calculate the new sum after applying the query
            // 1. Subtract the sum of elements in the range `[l, r]` from the total sum
            //    -> `(v[r] - v[l - 1])` gives the sum of elements in `[l, r]` using the prefix sum
            // 2. Add the effect of replacing `[l, r]` with `k`:
            //    -> `k * (r - l + 1)` is the sum of replacing all numbers in `[l, r]` with `k`
            ll curSate = Sum - (v[r] - v[l - 1]) + k * (r - l + 1);

            // Check if the new sum is odd or even
            if (curSate & 1) // Use bitwise AND to check if the least significant bit is 1 (odd)
            {
                cout << "ODD\n"; // Output "ODD" if the sum is odd
            }
            else
            {
                cout << "EVEN\n"; // Output "EVEN" if the sum is even
            }
        }
    }

    return 0; // Exit the program successfully
}
