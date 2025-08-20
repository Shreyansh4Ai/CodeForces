#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> students; // { -total_score, id }

    for (int i = 1; i <= n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int total = a + b + c + d;
        students.push_back({-total, i}); // negate for descending order
    }

    // Sort by total score (descending), then id (ascending automatically)
    sort(students.begin(), students.end());

    // Find Thomas (id = 1)
    for (int rank = 0; rank < n; rank++) {
        if (students[rank].second == 1) {
            cout << rank + 1 << "\n"; // rank is 0-based
            break;
        }
    }

    return 0;
}
