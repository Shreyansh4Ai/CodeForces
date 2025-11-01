#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count[4] = {0}; // count[1] = # of 1s, count[2] = # of 2s, count[3] = # of 3s

    for (char c : s) {
        if (c != '+') {
            count[c - '0']++;
        }
    }

    bool first = true;
    for (int i = 1; i <= 3; ++i) {
        while (count[i]--) {
            if (!first) cout << '+';
            cout << i;
            first = false;
        }
    }

    cout << '\n';
    return 0;
}