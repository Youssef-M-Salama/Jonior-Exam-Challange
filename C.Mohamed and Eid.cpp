#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#define ll long long
using namespace std;

signed main()
{
    string s;
    // Infinite loop to continuously take input
    while (cin >> s)
    {
        // Prompt to the user
        cout << "Mohamed and Eid are brothers Mohamed died who is left?\n";

        // Check if the input is not "Eid"
        if (s != "Eid")
        {
            cout << "NO"; // Respond with "NO" if input is incorrect
            break;        // Exit the loop if the condition is met
        }
    }
}
