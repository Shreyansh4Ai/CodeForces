#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        int maxPoints = 0;
        for (int i = 0; i < N; i++) {
            int points = 20 * A[i] - 10 * B[i];
            if (points < 0) points = 0;
            maxPoints = max(maxPoints, points);
        }
        cout << maxPoints << "\n";
    }
    return 0;
}
