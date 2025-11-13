#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> x(4);
    for (int i = 0; i < 4; i++) cin >> x[i];

    sort(x.begin(), x.end()); // sort ascending

    long long S = x[3]; // the largest = a + b + c
    long long a = S - x[0];
    long long b = S - x[1];
    long long c = S - x[2];

    cout << a << " " << b << " " << c << endl;
    return 0;
}
