#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, int> brand_cost; // A map to store the total cost for each brand (brand_id -> total_cost)

        // Read each offer and accumulate the cost for each brand
        for (int i = 0; i < k; i++)
        {
            int b, c;           // b: brand, c: cost
            cin >> b >> c;      // Read brand id and its associated cost
            brand_cost[b] += c; // Add the cost to the corresponding brand's total cost
        }

        // A vector to store the total costs of all brands
        vector<int> costs;
        for (const auto &entry : brand_cost)
        {
            costs.push_back(entry.second); // Add the accumulated cost of each brand to the costs vector
        }

        // Sort the costs in descending order to prioritize the most profitable brands
        sort(costs.rbegin(), costs.rend());

        // Variable to store the maximum earnings from selecting the best brands
        int max_earnings = 0;

        // Sum the costs of the top n brands (or fewer if there are less than n brands)
        for (int i = 0; i < min(n, (int)costs.size()); i++)
        {
            max_earnings += costs[i]; // Add the cost of each selected brand to max_earnings
        }

        // Output the maximum earnings for this test case
        cout << max_earnings << endl;
    }
}

// Main function, entry point of the program
int main()
{
    ios_base::sync_with_stdio(false);    // Speed up input/output
    cin.tie(nullptr), cout.tie(nullptr); // Untie cin and cout for better performance

    solve(); // Call the solve function to process all test cases

    return 0;
}
