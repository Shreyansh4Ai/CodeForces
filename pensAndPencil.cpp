#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        // minimum pens needed
        int pens = (a + c - 1) / c;
        // minimum pencils needed
        int pencils = (b + d - 1) / d;

        if (pens + pencils <= k) {
            cout << pens << " " << pencils << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
