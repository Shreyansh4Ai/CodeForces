#include <iostream>
using namespace std;

// Function to count distinct prime divisors
int countPrimeDivisors(int num) {
    int count = 0;

    for (int i = 2; i <= num; ++i) {
        if (num % i == 0) {
            bool isPrime = true;
            // Check if i is prime
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                // Count only once for each distinct prime
                count++;
                // Remove all powers of this prime
                while (num % i == 0) {
                    num /= i;
                }
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (countPrimeDivisors(i) == 2) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
