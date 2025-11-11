#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int max_welfare = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        max_welfare = max(max_welfare, a[i]);
    }

    long long total_cost = 0;
    for (int i = 0; i < n; ++i) {
        total_cost += max_welfare - a[i];
    }

    cout << total_cost << endl;
    return 0;
}
