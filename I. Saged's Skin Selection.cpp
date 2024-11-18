#include <iostream>  
#include <string>    
#include <vector>     
#include <algorithm> 
#include <bitset>    
#include <cmath>      
#include <iomanip>    

#define ll long long  // Define 'll' as a shortcut for long long type

using namespace std;

// Macro to speed up input/output operations by uncoupling cin/cout from synchronization
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr), cout.tie(nullptr);

// Function to calculate the factorial of a number using iterative method
unsigned long long factorial(int num)
{
    unsigned long long result = 1;  
    for (int i = 1; i <= num; ++i)  
    {
        result *= i;  // Multiply the current value of i with result
    }
    return result;  // Return the calculated factorial
}

int main() {
    int n, k;  
    cin >> n >> k;  

    // Variable to store the result of nCk (combinations of n taken k at a time)
    int nCk = 1;  

    // Calculate the binomial coefficient nCk using a more efficient method
    for (int i = 0; i < k; ++i) {
        nCk *= (n - i);        // Multiply by (n - i) for each iteration
        nCk /= (i + 1);        // Divide by (i + 1) to account for the denominator in the combination formula
    }

    cout << nCk << endl;  // Output the result of nCk

    return 0;  
}
