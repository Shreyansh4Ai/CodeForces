#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> seq(n), fingerprints(m);
    
    for (int i = 0; i < n; i++) cin >> seq[i];
    for (int j = 0; j < m; j++) cin >> fingerprints[j];
    
    unordered_set<int> fset(fingerprints.begin(), fingerprints.end());
    
    for (int i = 0; i < n; i++) {
        if (fset.count(seq[i])) {
            cout << seq[i] << " ";
        }
    }
    cout << "\n";
    return 0;
}
