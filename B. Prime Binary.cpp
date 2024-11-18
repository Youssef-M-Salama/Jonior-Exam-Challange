#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#define ll long long
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num < 2) // Numbers less than 2 are not prime
        return false;
    for (int i = 2; i * i <= num; i++) // Check divisors up to sqrt(num)
    {
        if (num % i == 0) // If num is divisible by i, it's not prime
        {
            return false;
        }
    }
    return true; // Return true if no divisors are found
}

signed main()
{
    int t; 
    cin >> t; 
    while (t--) 
    {
        int n;
        cin >> n;
        
        // Count the number of 1s in the binary representation of n
        int cnt = bitset<32>(n).count(); // bitset<32> represents n in 32 bits
        
        // Check if the count of 1s is a prime number
        if (isPrime(cnt))
        {
            cout << "YES" << endl; // Output YES if count is prime
        }
        else
        {
            cout << "NO" << endl; // Output NO if count is not prime
        }
    }
    return 0; 
}
