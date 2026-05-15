#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int smaller = 0;
            int larger = 0;

            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[i]) smaller++;
                else if (a[j] > a[i]) larger++;
            }

            ans[i] = max(smaller, larger);
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}
