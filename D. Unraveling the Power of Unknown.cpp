#include <iostream>
#include <cmath>
#include <iomanip>
#define ll long long
using namespace std;

signed main()
{
    long long z, y;
    cin >> z >> y; // Take input for `z` (base) and `y` (number)

    // Calculate the logarithm of `y` with base `z`
    // Formula: log(y) base z = log(y) / log(z) (change of base formula)
    double x = log(y) / log(z);

    // Print the result with 9 decimal places of precision
    cout << fixed << setprecision(9) << x << endl;

    return 0;
}
