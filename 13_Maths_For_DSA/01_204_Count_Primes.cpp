#include <iostream>
#include <vector>
using namespace std;

//* Count Primes
// With normal method it will give TLE

//! 'Sieve of Eratosthenes' method
//? 1) Mark every number after 1 and before n as Prime Number
//? 2) Reducing numbers which come in table of numbers left there.
//? Finally left numbers will be prime

//* Time Complexity: O(n * log(log n))
// n * Harmonic Progression of Prime numbers

int countPrimes(int n) {

    int count = 0;
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    // checking all numbers from 2 to n-1
    for (int i=2; i<n; i++) {
        
        // if for the number true is there, count++
        if (prime[i]) {
            count++;

            // making false to all the elements in the table of i. Starting from 2*i till n-1 and incrementing by i
            for (int j=2*i; j<n; j=j + i) {
                prime[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;

    cout << "Number of primes before n: " << countPrimes(n) << endl;
    
    return 0;
}