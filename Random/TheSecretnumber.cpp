#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //---- - ----- ------------------------------------------------------------  solution goes here ????    -----------------------------------------------------------------------------------------------------------------
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;
        for (int k = 1; k <= 18; k++) {
            long long divisor = 1 + (long long)pow(10, k);
            if (n % divisor == 0) {
                long long x = n / divisor;
                if (x > 0) ans.push_back(x);
            }
        }
        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << "\n";
            for (auto v : ans) cout << v << " ";
            cout << "\n";
        }
    }
    return 0;
}
