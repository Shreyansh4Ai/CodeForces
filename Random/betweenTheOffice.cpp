#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int countSF = 0, countFS = 0;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'S' && s[i+1] == 'F') countSF++;
        if (s[i] == 'F' && s[i+1] == 'S') countFS++;
    }

    if (countSF > countFS) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
