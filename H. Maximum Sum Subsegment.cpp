#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

#define ll long long // Define a shortcut for the long long data type (ll is now an alias for long long)

using namespace std;

// Macro to speed up input and output operations by untangling cin/cout with synchronization
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr), cout.tie(nullptr);

// The main function, entry point of the program
signed main()
{
    speed // Activate the fast input-output mode

        int n;
    cin >> n;

    vector<int> v(n);   // Declare a vector of integers to hold the elements (of size 'n')
    ll sum = 0, mx = 0; // Initialize two long long variables: sum (to keep track of the sum of elements) and mx (to store the maximum sum encountered)

    // Loop through the elements of the array (size 'n')
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i]; // Read the current element into the vector 'v'

        sum += v[i]; // Add the current element to 'sum'

        // Update 'mx' if the current 'sum' is greater than the previously recorded maximum sum
        mx = max(sum, mx);

        // If the sum becomes non-positive (<= 0), reset it to 0 for the next iteration
        // This ensures we don't include negative sums which would reduce the maximum sum
        if (sum <= 0)
        {
            sum = 0; // Reset sum to 0 if it is non-positive
        }
    }

    cout << mx;

    return 0;
}
