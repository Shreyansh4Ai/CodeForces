#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int maxTime = 240 - k; // Total time available to solve problems
    int timeSpent = 0, count = 0;

    for (int i = 1; i <= n; i++) {
        timeSpent += 5 * i;
        if (timeSpent > maxTime)
            break;
        count++;
    }

    cout << count << endl;
    return 0;
}
