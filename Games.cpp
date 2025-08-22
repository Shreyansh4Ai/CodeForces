#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int,int>> teams(n);
    for (int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second; // hi, ai
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (teams[i].first == teams[j].second) {
                ans++;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
