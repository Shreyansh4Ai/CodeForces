#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxH = *max_element(a.begin(), a.end());
    int minH = *min_element(a.begin(), a.end());

    int maxIndex = -1, minIndex = -1;

    // leftmost maximum
    for (int i = 0; i < n; i++) {
        if (a[i] == maxH) {
            maxIndex = i;
            break;
        }
    }

    // rightmost minimum
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == minH) {
            minIndex = i;
            break;
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) moves--; // overlap adjustment

    cout << moves << "\n";
    return 0;
}
