#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <iomanip>
#define ll long long
using namespace std;

signed main()
{
    double n, sum = 0; // Declare variables: n for the input, sum to store the result

    cin >> n; // Take input n

    // Loop from 1 to n to calculate the sum of the harmonic series
    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0 / (double)i; // Add the reciprocal of each integer i to sum
    }

    // Set the output format to display 4 decimal places
    cout << fixed << setprecision(4);

    // Output the sum with the required precision
    cout << sum << "\n";

    return 0; // Exit the program
}
