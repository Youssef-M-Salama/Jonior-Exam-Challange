#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <iomanip>
#define ll long long
using namespace std;
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        // Calculate minimal side length for different configurations
        int side1 = max(2 * a, b);         // Place side-by-side horizontally
        int side2 = max(2 * b, a);         // Place side-by-side vertically
        int side3 = max(a + b, max(a, b)); // Place stacked (either orientation)

        // Find the minimum side required for the square
        int side = min({side1, side2, side3});

        // Output the area of the square
        cout << side * side << endl;
    }
    return 0;
}