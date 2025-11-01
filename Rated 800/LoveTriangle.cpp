#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> f(n+1); // 1-indexed
    for (int i = 1; i <= n; i++) cin >> f[i];

    for (int i = 1; i <= n; i++) {
        int a = f[i];       // i -> a
        int b = f[a];       // a -> b
        int c = f[b];       // b -> c
        if (c == i) {       // back to i?
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
