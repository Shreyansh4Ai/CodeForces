#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        bool even = false, odd = false;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) even = true;
            else odd = true;
        }

        if (even && odd)
            sort(a.begin(), a.end());

        for (int i = 0; i < n; ++i)
            cout << a[i] << " ";
        cout << "\n";
    }
}
