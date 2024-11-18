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
    int n;
    cin >> n;

    string a[50][50];
    string s = to_string(n); // Convert the integer `n` to a string for use inside the grid

    // Create the grid
    for (int i = 0; i < n; ++i) // Iterate over rows
    {
        for (int j = 0; j < n; ++j) // Iterate over columns
        {
            // Check if the current cell is on the border of the grid
            if (!i || !j || i == n - 1 || j == n - 1)
            {
                a[i][j] = '#'; // Place `#` at the border cells
            }
            else
            {
                a[i][j] = s; // Place the string representation of `n` in inner cells
            }
        }
    }

    // Print the grid
    for (int i = 0; i < n; ++i) // Iterate over rows
    {
        for (int j = 0; j < n; ++j) // Iterate over columns
        {
            cout << a[i][j]; // Print each cell
        }
        cout << "\n"; // Move to the next line after finishing a row
    }

    return 0;
}
