#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <iomanip>
#define ll long long
using namespace std;

// Speed optimization to speed up I/O operations by unsynchronizing with C streams
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    speed // Apply I/O speed optimization
    int n;
    cin >> n; // Read the number of elements `n`
    vector<int> v(n); // Create a vector `v` of size `n` to store input values

    // Read the input values and store them in the vector `v`
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    // Sort the vector `v` in ascending order
    sort(v.begin(), v.end());

    // Handle the case when there are exactly 2 elements in the vector
    if (n == 2)
    {
        cout << 0; // If there are only two elements, the answer is 0 since there are no other elements to compare with
    }
    else
    {
        // Otherwise, calculate and print the minimum difference between the second-to-last and first element,
        // and the difference between the last and second element, and output the smaller one.
        cout << min({v[n-2] - v[0], v[n-1] - v[1]});
    }

    return 0; // Exit the program
}
