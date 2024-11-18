#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <iomanip>

#define ll long long
using namespace std;

// Macro to speed up input/output operations by uncoupling cin/cout from synchronization
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    long long N;
    cin >> N;

    // Calculate the maximum number of pieces (N * (N + 1)) / 2 + 1
    // The formula calculates the maximum number of pieces that can be formed
    // by cutting a rope of length N into different segments. The result is the sum of the first N natural numbers (triangular number) plus 1.
    long long max_pieces = (N * (N + 1)) / 2 + 1;

    // Output the result, which is the maximum number of pieces
    cout << max_pieces << endl;

    return 0;
}
