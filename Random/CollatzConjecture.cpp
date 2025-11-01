 #include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long k, x;
        cin >> k >> x;
        while (k--) {
            if ((x - 1) % 3 == 0) {
                long long y = (x - 1) / 3;
                if (y % 2 == 1) {
                    x = y;
                    continue;
                }
            }
            x = 2 * x;
        }
        cout << x << "\n";
    }
    return 0;
}
